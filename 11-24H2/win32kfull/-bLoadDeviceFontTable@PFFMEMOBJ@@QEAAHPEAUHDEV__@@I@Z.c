/*
 * XREFs of ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x14030EA30
 * Callers:
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x14030DDA0 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 * Callees:
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1400C2054 (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z @ 0x1400FEBEC (-bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z.c)
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1400FEE08 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1401797B8 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x14019F0B4 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1401CF04C (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x14020703C (--0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 */

__int64 __fastcall PFFMEMOBJ::bLoadDeviceFontTable(PFFMEMOBJ *this, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v5; // r14d
  __int64 result; // rax
  unsigned int v9; // r12d
  struct _FD_GLYPHSET *v10; // rdi
  struct _IFIMETRICS *v11; // rsi
  struct _FD_GLYPHSET *v12; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-18h] BYREF
  struct _FD_GLYPHSET *v14[2]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v15; // [rsp+A8h] [rbp+48h] BYREF
  int v16; // [rsp+B0h] [rbp+50h]
  _QWORD *v17; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 0;
  v4 = a2[5] & 0x8000;
  v17 = a2;
  v16 = v4;
  v5 = a3;
  v13 = 0LL;
  v15 = 0LL;
  if ( (_DWORD)a3 )
  {
    result = PFFMEMOBJ::bAllocPFEData(this, (unsigned int)a3, a3);
    if ( !(_DWORD)result )
      return result;
  }
  v9 = 1;
  if ( !v5 )
    return 1;
  while ( 1 )
  {
    v10 = 0LL;
    v11 = PDEVOBJ::QueryFont((PDEVOBJ *)&v17, *(struct DHPDEV__ **)(*(_QWORD *)this + 104LL), 0LL, v9, &v13);
    if ( !v11 )
    {
      EngSetLastError(0x3EBu);
      goto LABEL_26;
    }
    if ( v16 )
    {
      v15 = 0LL;
      goto LABEL_14;
    }
    v12 = (struct _FD_GLYPHSET *)PFFOBJ::QueryFontTree(
                                   this,
                                   *(struct DHPDEV__ **)(*(_QWORD *)this + 104LL),
                                   0LL,
                                   v9,
                                   3u,
                                   &v15);
    v10 = v12;
    if ( !v12 )
      break;
    if ( v11->jWinCharSet == 2 )
    {
      v14[0] = 0LL;
      if ( bExtendGlyphSet(&v12, v14) )
      {
        if ( a2[377] )
          PDEVOBJ::Free((PDEVOBJ *)&v17, v12, v15);
        v10 = v14[0];
      }
      else
      {
        v10 = v12;
      }
    }
LABEL_14:
    if ( !(unsigned int)PFFMEMOBJ::bAddEntry(this, v9, v10, v15, v11, v13, 0LL, 0LL) )
      goto LABEL_21;
    if ( ++v9 > v5 )
    {
      FHMEMOBJ::FHMEMOBJ((__int64)v14, (_QWORD *)(*(_QWORD *)this + 112LL), 0, v5);
      FHMEMOBJ::FHMEMOBJ((__int64)v14, (_QWORD *)(*(_QWORD *)this + 120LL), 1, v5);
      FHMEMOBJ::FHMEMOBJ((__int64)v14, (_QWORD *)(*(_QWORD *)this + 128LL), 2, v5);
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
      if ( a2[377] )
        PDEVOBJ::Free((PDEVOBJ *)&v17, v11, v13);
      return v3;
    }
  }
LABEL_26:
  if ( v10 && a2[377] )
    PDEVOBJ::Free((PDEVOBJ *)&v17, v10, v15);
  if ( v11 )
    goto LABEL_30;
  return v3;
}
