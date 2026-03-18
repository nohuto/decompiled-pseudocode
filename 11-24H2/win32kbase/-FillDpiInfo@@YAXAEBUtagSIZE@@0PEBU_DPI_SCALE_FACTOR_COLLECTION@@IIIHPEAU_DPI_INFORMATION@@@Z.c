/*
 * XREFs of ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401C8D14
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1400E8950 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1401C6B9C (-CalcDpiOverride@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1401C925C (-RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1401C9404 (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 */

void __fastcall FillDpiInfo(
        const struct tagSIZE *a1,
        struct tagSIZE *this,
        struct tagSIZE a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        struct tagSIZE *a8)
{
  bool v8; // zf
  struct tagSIZE v13; // rax
  unsigned int v14; // eax
  DpiInternal *v15; // rcx
  unsigned int cy; // edx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v17; // [rsp+20h] [rbp-18h]
  int v18; // [rsp+28h] [rbp-10h]
  struct _DPI_INFORMATION *v19; // [rsp+78h] [rbp+40h]

  v8 = a1->cx == 0;
  a8[3] = *a1;
  a8[4] = *this;
  if ( !v8 && a1->cy )
    a8[5] = DpiInternal::CalcDpi((DpiInternal *)this, a1, *(const struct tagSIZE **)&a3);
  v13 = DpiInternal::CalcDpiOverride((DpiInternal *)this, a1, *(const struct tagSIZE **)&a3);
  if ( !v13.cx || !v13.cy )
    v13 = a8[5];
  a8[6] = v13;
  a8[8].cx = 200;
  LODWORD(v19) = 20000 * a8[5].cx / 26880;
  HIDWORD(v19) = 20000 * a8[5].cy / 26880;
  a8[7] = (struct tagSIZE)v19;
  if ( a5 )
  {
    if ( !a6 )
    {
LABEL_12:
      v14 = (100 * a5 + 48) / 0x60;
      goto LABEL_19;
    }
  }
  else if ( a6 )
  {
LABEL_14:
    v14 = RoundToNearestScaleFactor(a6, *(const struct _DPI_SCALE_FACTOR_COLLECTION **)&a3);
    a8[7].cy = a6;
    a8[7].cx = a6;
    goto LABEL_19;
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 903;
  if ( a5 )
    goto LABEL_12;
  if ( a6 )
    goto LABEL_14;
  v15 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)&a3 + 8LL) != 1 )
  {
    do
    {
      if ( (unsigned int)(((int)v19 + HIDWORD(v19)) / 2) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&a3 + 24LL)
                                                                     + 4LL * (_QWORD)v15) )
        break;
      v15 = (DpiInternal *)(unsigned int)((_DWORD)v15 + 1);
    }
    while ( (unsigned int)v15 < *(_DWORD *)(*(_QWORD *)&a3 + 8LL) - 1 );
  }
  LODWORD(v17) = 0;
  v14 = DpiInternal::SatisfyMinResolutionBarForScaleIdx(v15, 0, (int)*this, a3, v17, v18);
LABEL_19:
  a8[1].cy = v14;
  if ( !v14 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 525;
  }
  if ( !a8[4].cx || !a8[4].cy )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 526;
  }
  if ( a5 )
  {
    a8[10].cy = 1234569;
    cy = (100 * a5 + 48) / 0x60;
  }
  else
  {
    cy = a8[1].cy;
  }
  a8[1].cx = cy;
}
