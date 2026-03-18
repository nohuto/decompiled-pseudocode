/*
 * XREFs of ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVUDCOBJ@@@Z @ 0x1400BEB94
 * Callers:
 *     cjIFIMetricsToOTMW @ 0x1400BD614 (cjIFIMetricsToOTMW.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVUDCOBJ@@@Z @ 0x1400BE3D0 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVUDCOBJ@@@Z.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVUDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1400BF214 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVUDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRIC.c)
 *     ?GrepFontIsLinked@@YAHAEAVUDCOBJ@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1401D9C14 (-GrepFontIsLinked@@YAHAEAVUDCOBJ@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x14025B70C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x14025BE74 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVUDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1403035E4 (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVUDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 * Callees:
 *     <none>
 */

IFIOBJR *__fastcall IFIOBJR::IFIOBJR(
        IFIOBJR *this,
        const struct _IFIMETRICS *a2,
        struct RFONTOBJ *a3,
        struct UDCOBJ *a4)
{
  int *v6; // rcx
  int v7; // r10d
  int v8; // r11d
  int v9; // ebx
  __int16 v10; // cx
  int v11; // r9d
  __int64 fwdWinDescender; // rcx
  int v13; // r10d
  unsigned int *v14; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // eax
  int v19; // eax
  __int64 v21; // rax
  int v22; // ecx

  *(_QWORD *)this = a2;
  v6 = (int *)((char *)a2 + a2->dpFontSim);
  v7 = *(_DWORD *)(*(_QWORD *)a3 + 12LL) & 0x6000;
  switch ( v7 )
  {
    case 0:
      *((_BYTE *)this + 19) = a2->panose.bWeight;
      *((_WORD *)this + 10) = a2->usWinWeight;
      *((_WORD *)this + 11) = a2->fsSelection;
      *((_WORD *)this + 12) = a2->fwdAveCharWidth;
      *((_WORD *)this + 13) = a2->fwdMaxCharInc;
      *(POINTL *)((char *)this + 28) = a2->ptlCaret;
      goto LABEL_3;
    case 8192:
      if ( (a2->fsSelection & 1) == 0 )
      {
        v21 = *v6;
        goto LABEL_23;
      }
      break;
    case 16384:
      if ( (a2->fsSelection & 0x20) == 0 )
      {
        v21 = v6[1];
        goto LABEL_23;
      }
      break;
    case 24576:
      break;
    default:
      goto LABEL_3;
  }
  v21 = v6[2];
LABEL_23:
  *((_OWORD *)this + 1) = *(_OWORD *)((char *)v6 + v21);
  *((_DWORD *)this + 8) = *(int *)((char *)v6 + v21 + 16);
LABEL_3:
  v8 = *((__int16 *)this + 12);
  v9 = *((__int16 *)this + 13);
  *((_DWORD *)this + 10) = v8;
  *((_DWORD *)this + 9) = v9;
  v10 = a2->fwdMacAscender + a2->fwdMacLineGap - a2->fwdMacDescender - a2->fwdWinDescender - a2->fwdWinAscender;
  if ( v10 <= 0 )
    v10 = 0;
  v11 = v10;
  *((_DWORD *)this + 12) = v10;
  fwdWinDescender = (unsigned __int16)a2->fwdWinDescender;
  LOWORD(fwdWinDescender) = a2->fwdWinAscender + fwdWinDescender - a2->fwdUnitsPerEm;
  v13 = (__int16)fwdWinDescender;
  *((_DWORD *)this + 11) = (__int16)fwdWinDescender;
  if ( (a2->flInfo & 0x3000010) == 0 )
  {
    v22 = *(_DWORD *)(*(_QWORD *)a3 + 656LL);
    if ( v22 > 1 )
    {
      *((_DWORD *)this + 10) = v22 * v8;
      *((_DWORD *)this + 9) = v22 * v9;
    }
    fwdWinDescender = *(unsigned int *)(*(_QWORD *)a3 + 660LL);
    if ( (int)fwdWinDescender > 1 )
    {
      *((_DWORD *)this + 12) = fwdWinDescender * v11;
      *((_DWORD *)this + 11) = fwdWinDescender * v13;
    }
  }
  if ( (a2->flInfo & 1) != 0 )
  {
    v14 = *(unsigned int **)(*(_QWORD *)a4 + 48LL);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(fwdWinDescender);
    v16 = v14[10];
    if ( (v16 & 1) != 0 && (v16 = (CurrentThreadDpiAwarenessContext & 0xF) - 1, (unsigned int)v16 > 1) )
      v17 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    else
      v17 = v14[541];
    *((_DWORD *)this + 13) = v17;
    v18 = W32GetCurrentThreadDpiAwarenessContext(v16);
    if ( (v14[10] & 1) != 0 && (v18 & 0xF) - 1 > 1 )
      v19 = (v18 >> 8) & 0x1FF;
    else
      v19 = v14[540];
  }
  else
  {
    *((_DWORD *)this + 13) = a2->ptlAspect.y * *(_DWORD *)(*(_QWORD *)a3 + 660LL);
    v19 = a2->ptlAspect.x * *(_DWORD *)(*(_QWORD *)a3 + 656LL);
  }
  *((_DWORD *)this + 14) = v19;
  return this;
}
