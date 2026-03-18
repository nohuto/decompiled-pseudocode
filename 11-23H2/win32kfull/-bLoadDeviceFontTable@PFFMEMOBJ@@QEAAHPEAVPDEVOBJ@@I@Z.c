/*
 * XREFs of ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C013FE88
 * Callers:
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C013DF44 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 * Callees:
 *     ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x1C0094EC0 (--0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C00CA668 (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00CB050 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     ?bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z @ 0x1C00CBAB0 (-bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C02D5A24 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C02E07C8 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C02E08C4 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 */

__int64 __fastcall PFFMEMOBJ::bLoadDeviceFontTable(PFFMEMOBJ *this, struct PDEVOBJ *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v7; // eax
  __int64 result; // rax
  unsigned int v9; // r15d
  struct _FD_GLYPHSET *v10; // rdi
  struct _IFIMETRICS *v11; // r14
  unsigned __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  struct _FD_GLYPHSET *v13[3]; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v14; // [rsp+A8h] [rbp+48h] BYREF
  int v15; // [rsp+B0h] [rbp+50h]
  struct _FD_GLYPHSET *v16; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 0;
  v7 = *(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x8000;
  v12 = 0LL;
  v15 = v7;
  v14 = 0LL;
  if ( a3 )
  {
    result = PFFMEMOBJ::bAllocPFEData(this, a3);
    if ( !(_DWORD)result )
      return result;
  }
  v9 = 1;
  if ( !a3 )
    return 1;
  while ( 1 )
  {
    v10 = 0LL;
    v11 = PDEVOBJ::QueryFont(a2, *(struct DHPDEV__ **)(*(_QWORD *)this + 96LL), 0LL, v9, &v12);
    if ( !v11 )
    {
      EngSetLastError(0x3EBu);
      goto LABEL_26;
    }
    if ( v15 )
    {
      v14 = 0LL;
      goto LABEL_14;
    }
    v16 = (struct _FD_GLYPHSET *)PFFOBJ::QueryFontTree(
                                   this,
                                   *(struct DHPDEV__ **)(*(_QWORD *)this + 96LL),
                                   0LL,
                                   v9,
                                   3u,
                                   &v14);
    v10 = v16;
    if ( !v16 )
      break;
    if ( v11->jWinCharSet == 2 )
    {
      v13[0] = 0LL;
      if ( bExtendGlyphSet(&v16, v13) )
      {
        if ( *(_QWORD *)(*(_QWORD *)a2 + 3000LL) )
          PDEVOBJ::Free(a2, v16, v14);
        v10 = v13[0];
      }
      else
      {
        v10 = v16;
      }
    }
LABEL_14:
    if ( !(unsigned int)PFFMEMOBJ::bAddEntry(this, v9, v10, v14, v11, v12, 0LL, 0LL) )
      goto LABEL_21;
    if ( ++v9 > a3 )
    {
      FHMEMOBJ::FHMEMOBJ((__int64)v13, (_QWORD *)(*(_QWORD *)this + 104LL), 0, a3);
      FHMEMOBJ::FHMEMOBJ((__int64)v13, (_QWORD *)(*(_QWORD *)this + 112LL), 1, a3);
      FHMEMOBJ::FHMEMOBJ((__int64)v13, (_QWORD *)(*(_QWORD *)this + 120LL), 2, a3);
      return 1;
    }
  }
  EngSetLastError(0x3EBu);
LABEL_21:
  if ( v11->jWinCharSet == 2 )
  {
    if ( !v10 )
      goto LABEL_30;
    if ( (v10->flAccel & 0x10) != 0 )
    {
      Win32FreePool(v10);
LABEL_30:
      if ( *(_QWORD *)(*(_QWORD *)a2 + 3000LL) )
        PDEVOBJ::Free(a2, v11, v12);
      return v3;
    }
  }
LABEL_26:
  if ( v10 && *(_QWORD *)(*(_QWORD *)a2 + 3000LL) )
    PDEVOBJ::Free(a2, v10, v14);
  if ( v11 )
    goto LABEL_30;
  return v3;
}
