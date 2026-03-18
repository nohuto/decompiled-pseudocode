/*
 * XREFs of GreIntersectClipRect @ 0x1C003ADF0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C00595A0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     bCvtPts1 @ 0x1C0007EC4 (bCvtPts1.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C003AC00 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003BD24 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CBC0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0159C24 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C015CD50 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 */

__int64 __fastcall GreIntersectClipRect(HDC a1, LONG left, LONG top, LONG right, LONG a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  LONG bottom; // edx
  int v11; // eax
  int v12; // eax
  __int64 v14; // rax
  unsigned int v15; // ecx
  ULONG v16; // ecx
  __int64 v17; // [rsp+30h] [rbp-31h] BYREF
  int v18; // [rsp+38h] [rbp-29h]
  int v19; // [rsp+3Ch] [rbp-25h]
  DC *v20[6]; // [rsp+40h] [rbp-21h] BYREF
  struct _RECTL v21; // [rsp+70h] [rbp+Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v20, a1);
  v8 = 0;
  if ( !v20[0] )
  {
LABEL_20:
    v16 = 6;
LABEL_21:
    EngSetLastError(v16);
    goto LABEL_15;
  }
  if ( *((_WORD *)v20[0] + 6) > 1u )
  {
    v14 = *((_QWORD *)v20[0] + 6);
    if ( v14 )
      v15 = *(_DWORD *)(v14 + 40);
    else
      v15 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(12LL, v15, *((unsigned __int16 *)v20[0] + 6), 0LL, 0LL);
    goto LABEL_20;
  }
  v9 = *((_QWORD *)v20[0] + 122);
  v18 = *(_DWORD *)(v9 + 208);
  v19 = *(_DWORD *)(v9 + 108) & 1;
  EXFORMOBJ::vInit((EXFORMOBJ *)&v17, v20, 516, 0x80000000);
  bottom = a5;
  v21.left = left;
  v21.top = top;
  v11 = *(_DWORD *)(v17 + 32);
  v21.right = right;
  v21.bottom = a5;
  if ( (v11 & 1) != 0 )
  {
    if ( (v11 & 0x43) != 0x43 )
    {
      bCvtPts1(v17, &v21.left, 2LL);
      bottom = v21.bottom;
      right = v21.right;
      top = v21.top;
      left = v21.left;
    }
    if ( v19 )
    {
      ++left;
      ++right;
      v21.left = left;
      v21.right = right;
    }
    if ( left > right )
    {
      v21.left = right;
      v21.right = left;
    }
    if ( top > bottom )
    {
      v21.top = bottom;
      v21.bottom = top;
    }
    v12 = DC::iCombine(v20[0], &v21, 1);
    goto LABEL_13;
  }
  if ( (left & 0xF8000000) != 0 && (left & 0xF8000000) != -134217728
    || (a5 & 0xF8000000) != 0 && (a5 & 0xF8000000) != 0xF8000000
    || (((right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((top & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    v16 = 87;
    goto LABEL_21;
  }
  v12 = DC::iCombine(v20[0], (struct EXFORMOBJ *)&v17, &v21, 1);
LABEL_13:
  v8 = v12;
  if ( v12 > 1 )
    v8 = 3;
LABEL_15:
  DCOBJ::~DCOBJ((DCOBJ *)v20);
  return v8;
}
