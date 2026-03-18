/*
 * XREFs of BmlCompareTargetModesWithConstraint @ 0x1402C7DB0
 * Callers:
 *     BmlCompareTargetModes @ 0x1402C7B9C (BmlCompareTargetModes.c)
 * Callees:
 *     ?IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z @ 0x140045E18 (-IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z.c)
 *     ??$DIFF@I@@YAIII@Z @ 0x140059684 (--$DIFF@I@@YAIII@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x140184A4C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402C1F3C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     BmlCompareRegionsWithPivot @ 0x1402C7500 (BmlCompareRegionsWithPivot.c)
 *     BmlDoesTargetModeSupportWireFormat @ 0x140357540 (BmlDoesTargetModeSupportWireFormat.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x14037DD70 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 *     ??$BmlCompareValues@_N@@YA?AW4BML_COMPARISON_RESULT@@_N0@Z @ 0x1403BF260 (--$BmlCompareValues@_N@@YA-AW4BML_COMPARISON_RESULT@@_N0@Z.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1403BF90C (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1403FD27C (BmlCompareTargetModeWithVirtualRefreshRate.c)
 */

__int64 __fastcall BmlCompareTargetModesWithConstraint(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v5; // r13
  __int64 v9; // r14
  bool refreshed; // di
  bool v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // r8
  char v15; // r8
  unsigned int v17; // edx
  struct _D3DDDI_RATIONAL v18; // rax
  int v19; // ecx
  struct _D3DDDI_RATIONAL v20; // rax
  int v21; // ecx
  int v22; // ecx
  unsigned int v23; // esi
  unsigned int v24; // ebx
  unsigned int v25; // edi
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // r10d
  unsigned int v31; // eax
  char DoesTargetModeSupportWireFormat; // bl
  __int64 v33; // rdx
  __int64 v34; // rcx
  bool v35; // bl
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct _D3DDDI_RATIONAL v38; // [rsp+20h] [rbp-38h] BYREF
  struct _D3DDDI_RATIONAL v39; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v5 = a2;
  v9 = *(_QWORD *)(120LL * a2 + a1 + 16);
  if ( (*(_BYTE *)v9 & 1) == 0
    || (v4 = BmlCompareRegionsWithPivot(
               (struct _D3DKMDT_2DREGION *)(a3 + 84),
               (struct _D3DKMDT_2DREGION *)(a4 + 84),
               (struct _D3DKMDT_2DREGION *)(v9 + 44))) == 0 )
  {
    if ( (*(_DWORD *)v9 & 0x1000000) == 0 || IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(v9 + 224)) )
      goto LABEL_38;
    refreshed = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
                  (DMMVIDPNTARGETMODE *)a3,
                  (const struct _D3DDDI_RATIONAL *)(v9 + 224));
    v11 = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
            (DMMVIDPNTARGETMODE *)a4,
            (const struct _D3DDDI_RATIONAL *)(v9 + 224));
    v14 = v11;
    if ( !refreshed && !v11 && *(_DWORD *)(v9 + 240) != 1 )
    {
      refreshed = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
                    (DMMVIDPNTARGETMODE *)a3,
                    (const struct _D3DDDI_RATIONAL *)(v9 + 224));
      v14 = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
              (DMMVIDPNTARGETMODE *)a4,
              (const struct _D3DDDI_RATIONAL *)(v9 + 224));
    }
    LOBYTE(v12) = v14;
    LOBYTE(v13) = refreshed;
    v4 = BmlCompareValues<bool>(v13, v12);
    if ( !v4
      && (refreshed
       || v15
       || (v4 = BmlCompareTargetModeWithVirtualRefreshRate(
                  (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a3 + 72),
                  (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a4 + 72))) == 0) )
    {
LABEL_38:
      if ( (*(_BYTE *)v9 & 2) == 0
        || !*(_DWORD *)(v9 + 56)
        || !*(_DWORD *)(v9 + 52)
        || IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(a3 + 92))
        || IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(a4 + 92)) )
      {
        goto LABEL_39;
      }
      v17 = *(_DWORD *)(a3 + 120);
      v18 = *(struct _D3DDDI_RATIONAL *)(a3 + 92);
      v39 = v18;
      v19 = (v17 >> 3) & 0x3F;
      if ( v19 )
        v39.Denominator = v19 * v18.Denominator;
      v20 = *(struct _D3DDDI_RATIONAL *)(a4 + 92);
      v21 = *(_DWORD *)(a4 + 120) >> 3;
      v38 = v20;
      v22 = v21 & 0x3F;
      if ( v22 )
        v38.Denominator = v22 * v20.Denominator;
      v23 = DmmMapVSyncFromRationalToInteger(
              (const struct _D3DDDI_RATIONAL *)(v9 + 52),
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(v17 << 29) >> 29),
              0LL);
      v24 = DmmMapVSyncFromRationalToInteger(
              &v39,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a3 + 120) << 29) >> 29),
              0LL);
      v25 = DmmMapVSyncFromRationalToInteger(
              (const struct _D3DDDI_RATIONAL *)(v9 + 52),
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a4 + 120) << 29) >> 29),
              0LL);
      DIFF<unsigned int>(v24, v23);
      v26 = DmmMapVSyncFromRationalToInteger(
              &v38,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a4 + 120) << 29) >> 29),
              0LL);
      v27 = DIFF<unsigned int>(v26, v25);
      v4 = BmlCompareValues<unsigned int>(v27);
      if ( !v4 )
      {
        if ( ((*(_DWORD *)(v9 + 80) >> 3) & 0x3F) == 0 )
          goto LABEL_39;
        v28 = (*(_DWORD *)(a3 + 120) >> 3) & 0x3F;
        if ( !v28 )
          v28 = 1;
        DIFF<unsigned int>(v28, (*(_DWORD *)(v9 + 80) >> 3) & 0x3F);
        v31 = DIFF<unsigned int>(v30, v29);
        v4 = BmlCompareValues<unsigned int>(v31);
        if ( !v4 )
        {
LABEL_39:
          if ( (*(_DWORD *)v9 & 0x1000000) != 0
            || (*(_DWORD *)(120 * v5 + a1 + 128) & 1) == 0
            || (v35 = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)a3),
                LOBYTE(v36) = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)a4),
                LOBYTE(v37) = v35,
                (v4 = BmlCompareValues<bool>(v37, v36)) == 0) )
          {
            if ( (*(_BYTE *)v9 & 8) != 0 )
            {
              DoesTargetModeSupportWireFormat = BmlDoesTargetModeSupportWireFormat(a3, *(unsigned int *)(v9 + 204));
              LOBYTE(v33) = BmlDoesTargetModeSupportWireFormat(a4, *(unsigned int *)(v9 + 204));
              LOBYTE(v34) = DoesTargetModeSupportWireFormat;
              return (unsigned int)BmlCompareValues<bool>(v34, v33);
            }
          }
        }
      }
    }
  }
  return v4;
}
