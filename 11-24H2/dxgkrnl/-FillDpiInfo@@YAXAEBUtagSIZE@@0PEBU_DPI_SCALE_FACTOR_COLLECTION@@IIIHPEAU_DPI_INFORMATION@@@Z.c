/*
 * XREFs of ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1400554C8
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x14030DAE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1400556A0 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1400556E4 (-CalcDpiOverride@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x14005591C (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?GetOptimalZoomPercentage@DpiInternal@@YA?AUtagSIZE@@IAEBU2@JPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x140055A08 (-GetOptimalZoomPercentage@DpiInternal@@YA-AUtagSIZE@@IAEBU2@JPEBU_DPI_SCALE_FACTOR_COLLECTION@@@.c)
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x140055AB8 (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@H@Z @ 0x140055AE0 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x14006497C (-RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 */

void __fastcall FillDpiInfo(
        const struct tagSIZE *a1,
        struct tagSIZE *this,
        const struct tagSIZE *a3,
        DpiInternal *a4,
        DpiInternal *a5,
        unsigned int a6,
        unsigned int a7,
        struct _DPI_INFORMATION *a8)
{
  LONG v8; // ebx
  unsigned int v9; // r15d
  struct tagSIZE v13; // rax
  unsigned int v14; // edx
  const struct tagSIZE *v15; // r8
  struct tagSIZE OptimalZoomPercentage; // rax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v17; // r8
  unsigned int v18; // r12d
  unsigned int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // edx
  unsigned int PlateauIndexForScaleFactor; // eax
  struct _DPI_SCALE_FACTOR_COLLECTION *v23; // [rsp+20h] [rbp-48h]
  struct _DPI_SCALE_FACTOR_COLLECTION *v24; // [rsp+20h] [rbp-48h]
  int v25; // [rsp+28h] [rbp-40h]

  v8 = 0;
  v9 = (unsigned int)a4;
  *((struct tagSIZE *)a8 + 3) = *a1;
  *((struct tagSIZE *)a8 + 4) = *this;
  if ( a1->cx && a1->cy )
    *((struct tagSIZE *)a8 + 5) = DpiInternal::CalcDpi((DpiInternal *)this, a1, a3);
  v13 = DpiInternal::CalcDpiOverride((DpiInternal *)this, a1, a3);
  if ( v13.cx && v13.cy )
  {
    v14 = (_DWORD)a8 + 40;
  }
  else
  {
    v14 = (_DWORD)a8 + 40;
    v13 = (struct tagSIZE)*((_QWORD *)a8 + 5);
  }
  v15 = (const struct tagSIZE *)*((unsigned int *)a8 + 9);
  *((struct tagSIZE *)a8 + 6) = v13;
  *((_DWORD *)a8 + 16) = v9;
  OptimalZoomPercentage = DpiInternal::GetOptimalZoomPercentage((DpiInternal *)v9, v14, v15, (int)a3, v23);
  *((struct tagSIZE *)a8 + 7) = OptimalZoomPercentage;
  v18 = (OptimalZoomPercentage.cy + OptimalZoomPercentage.cx) / 2;
  if ( !a7 )
  {
    v19 = (unsigned int)a3;
    if ( a6 )
    {
      v20 = RoundToNearestScaleFactor(a6, (const struct _DPI_SCALE_FACTOR_COLLECTION *)a3);
LABEL_21:
      v21 = v20;
      goto LABEL_22;
    }
LABEL_20:
    PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)v18, v19, v17);
    LODWORD(v24) = 0;
    v20 = DpiInternal::SatisfyMinResolutionBarForScaleIdx(
            (DpiInternal *)PlateauIndexForScaleFactor,
            0,
            (int)*this,
            (struct tagSIZE)a3,
            v24,
            v25);
    goto LABEL_21;
  }
  if ( (_DWORD)a5 )
  {
    if ( !a6 )
      goto LABEL_16;
  }
  else if ( a6 )
  {
    goto LABEL_18;
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 903;
  DxgkLogInternalTriageEvent(
    0LL,
    262146LL,
    0xFFFFFFFFLL,
    L"((Win8StyleDpiOverride != 0) && (PreferredScaleFactor == 0)) || ((Win8StyleDpiOverride == 0) && (PreferredScaleFactor != 0))",
    903LL,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( !(_DWORD)a5 )
  {
    if ( !a6 )
    {
      v19 = (unsigned int)a3;
      goto LABEL_20;
    }
LABEL_18:
    v20 = RoundToNearestScaleFactor(a6, (const struct _DPI_SCALE_FACTOR_COLLECTION *)a3);
    *((_DWORD *)a8 + 15) = a6;
    *((_DWORD *)a8 + 14) = a6;
    goto LABEL_21;
  }
LABEL_16:
  v21 = (100 * (int)a5 + 48) / 0x60u;
LABEL_22:
  LOBYTE(v8) = a6 != 0;
  *((_DWORD *)a8 + 3) = v21;
  LODWORD(v24) = v8;
  DpiInternal::FillOverridesAndAdjustedScaleFactor((DpiInternal *)(unsigned int)a5, a7, (int)a3, a8, v24, v25);
}
