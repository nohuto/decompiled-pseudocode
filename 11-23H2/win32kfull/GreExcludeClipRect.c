/*
 * XREFs of GreExcludeClipRect @ 0x1C00BD4B0
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00103B8 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     NtGdiExcludeClipRect @ 0x1C00BD490 (NtGdiExcludeClipRect.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0076170 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00BDAD8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C00F80F0 (bCvtPts1.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C011D48C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013DB9C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0264948 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreExcludeClipRect(HDC a1, LONG left, LONG a3, LONG right, LONG a5)
{
  __int64 v9; // rax
  unsigned int v10; // ecx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // esi
  unsigned int v15; // ebx
  ULONG v16; // ecx
  DC *v17; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v19; // rdi
  int v20; // [rsp+30h] [rbp-31h] BYREF
  DC *v21; // [rsp+38h] [rbp-29h] BYREF
  int v22; // [rsp+40h] [rbp-21h]
  unsigned int v23; // [rsp+44h] [rbp-1Dh]
  _BYTE v24[32]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v25; // [rsp+68h] [rbp+7h] BYREF
  int v26; // [rsp+74h] [rbp+13h]
  struct _RECTL v27; // [rsp+78h] [rbp+17h] BYREF

  v21 = 0LL;
  v22 = 0;
  v23 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v24);
  XDCOBJ::vLock((XDCOBJ *)&v21, a1);
  if ( v21 )
  {
    if ( *((_WORD *)v21 + 6) > 1u )
    {
      v9 = *((_QWORD *)v21 + 6);
      if ( v9 )
        v10 = *(_DWORD *)(v9 + 40);
      else
        v10 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(10LL, v10, *((unsigned __int16 *)v21 + 6));
      EngSetLastError(6u);
      DCOBJ::~DCOBJ((DCOBJ *)&v21);
      return 0LL;
    }
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v25, (struct XDCOBJ *)&v21, -2147483132);
    v27.left = left;
    v27.top = a3;
    v27.right = right;
    v27.bottom = a5;
    v12 = *(_DWORD *)(v25 + 32);
    if ( (v12 & 1) != 0 )
    {
      if ( (v12 & 0x43) != 0x43 )
      {
        bCvtPts1(v25, &v27, 2LL);
        right = v27.right;
        left = v27.left;
      }
      if ( v26 )
      {
        v27.left = left + 1;
        v27.right = right + 1;
      }
      ERECTL::vOrder((ERECTL *)&v27);
      v13 = DC::iCombine(v21, &v27, 4);
      goto LABEL_20;
    }
    v14 = left & 0xF8000000;
    if ( (!v14 || v14 == -134217728)
      && ((a5 & 0xF8000000) == 0 || (a5 & 0xF8000000) == 0xF8000000)
      && (((right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
    {
      v13 = DC::iCombine(v21, (struct EXFORMOBJ *)&v25, &v27, 4);
LABEL_20:
      v15 = v13;
      if ( v13 > 1 )
        v15 = 3;
      goto LABEL_25;
    }
    v16 = 87;
  }
  else
  {
    v16 = 6;
  }
  EngSetLastError(v16);
  v15 = 0;
LABEL_25:
  v17 = v21;
  if ( v21 )
  {
    if ( v22 && (*((_DWORD *)v21 + 11) & 2) != 0 )
    {
      if ( !v23 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v21);
        v17 = v21;
        if ( UserAttr )
        {
          DC::RestoreAttributes(v21, UserAttr);
          v17 = v21;
        }
      }
      *((_DWORD *)v17 + 11) &= ~2u;
      v22 = 0;
      v17 = v21;
    }
    v20 = 0;
    v19 = *(_QWORD *)v17;
    HmgDecrementExclusiveReferenceCountEx(v17, v23, &v20);
    if ( v20 )
      GrepDeleteDC(v19, 0x2000000LL);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v24);
  return v15;
}
