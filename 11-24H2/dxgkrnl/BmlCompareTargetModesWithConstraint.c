/*
 * XREFs of BmlCompareTargetModesWithConstraint @ 0x1402DD6F4
 * Callers:
 *     BmlCompareTargetModes @ 0x1402DD4E0 (BmlCompareTargetModes.c)
 * Callees:
 *     ?IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z @ 0x140045808 (-IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z.c)
 *     ??$DIFF@I@@YAIII@Z @ 0x140059144 (--$DIFF@I@@YAIII@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x140186D9C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1402DBB50 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 *     ??$BmlCompareValues@_N@@YA?AW4BML_COMPARISON_RESULT@@_N0@Z @ 0x1402DBC3C (--$BmlCompareValues@_N@@YA-AW4BML_COMPARISON_RESULT@@_N0@Z.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1402DC0F0 (BmlCompareTargetModeWithVirtualRefreshRate.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1402DC470 (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 *     BmlCompareRegionsWithPivot @ 0x1402DDCA8 (BmlCompareRegionsWithPivot.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x140361E0C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     BmlDoesTargetModeSupportWireFormat @ 0x1403F6A84 (BmlDoesTargetModeSupportWireFormat.c)
 */

__int64 __fastcall BmlCompareTargetModesWithConstraint(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v5; // r13
  __int64 v9; // r14
  char refreshed; // di
  bool v11; // al
  char v12; // r8
  char v13; // r8
  unsigned int v15; // edx
  struct _D3DDDI_RATIONAL v16; // rax
  int v17; // ecx
  struct _D3DDDI_RATIONAL v18; // rax
  int v19; // ecx
  int v20; // ecx
  unsigned int v21; // esi
  unsigned int v22; // ebx
  unsigned int v23; // edi
  unsigned int v24; // ebx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // edx
  unsigned int v29; // r10d
  unsigned int v30; // eax
  unsigned int v31; // r9d
  char DoesTargetModeSupportWireFormat; // bl
  char v33; // al
  char v34; // bl
  char v35; // al
  struct _D3DDDI_RATIONAL v36; // [rsp+20h] [rbp-38h] BYREF
  struct _D3DDDI_RATIONAL v37; // [rsp+60h] [rbp+8h] BYREF

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
    v12 = v11;
    if ( !refreshed && !v11 && *(_DWORD *)(v9 + 240) != 1 )
    {
      refreshed = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
                    (DMMVIDPNTARGETMODE *)a3,
                    (const struct _D3DDDI_RATIONAL *)(v9 + 224));
      v12 = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
              (DMMVIDPNTARGETMODE *)a4,
              (const struct _D3DDDI_RATIONAL *)(v9 + 224));
    }
    v4 = BmlCompareValues<bool>(refreshed, v12);
    if ( !v4
      && (refreshed
       || v13
       || (v4 = BmlCompareTargetModeWithVirtualRefreshRate(
                  (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a3 + 72),
                  (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a4 + 72),
                  *(_QWORD *)(120 * v5 + a1 + 16))) == 0) )
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
      v15 = *(_DWORD *)(a3 + 120);
      v16 = *(struct _D3DDDI_RATIONAL *)(a3 + 92);
      v37 = v16;
      v17 = (v15 >> 3) & 0x3F;
      if ( v17 )
        v37.Denominator = v17 * v16.Denominator;
      v18 = *(struct _D3DDDI_RATIONAL *)(a4 + 92);
      v19 = *(_DWORD *)(a4 + 120) >> 3;
      v36 = v18;
      v20 = v19 & 0x3F;
      if ( v20 )
        v36.Denominator = v20 * v18.Denominator;
      v21 = DmmMapVSyncFromRationalToInteger(
              (const struct _D3DDDI_RATIONAL *)(v9 + 52),
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(v15 << 29) >> 29),
              0LL);
      v22 = DmmMapVSyncFromRationalToInteger(
              &v37,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a3 + 120) << 29) >> 29),
              0LL);
      v23 = DmmMapVSyncFromRationalToInteger(
              (const struct _D3DDDI_RATIONAL *)(v9 + 52),
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a4 + 120) << 29) >> 29),
              0LL);
      v24 = DIFF<unsigned int>(v22, v21);
      v25 = DmmMapVSyncFromRationalToInteger(
              &v36,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a4 + 120) << 29) >> 29),
              0LL);
      v26 = DIFF<unsigned int>(v25, v23);
      v4 = BmlCompareValues<unsigned int>(v26, v24);
      if ( !v4 )
      {
        if ( ((*(_DWORD *)(v9 + 80) >> 3) & 0x3F) == 0 )
          goto LABEL_39;
        v27 = (*(_DWORD *)(a3 + 120) >> 3) & 0x3F;
        if ( !v27 )
          v27 = 1;
        DIFF<unsigned int>(v27, (*(_DWORD *)(v9 + 80) >> 3) & 0x3F);
        v30 = DIFF<unsigned int>(v29, v28);
        v4 = BmlCompareValues<unsigned int>(v30, v31);
        if ( !v4 )
        {
LABEL_39:
          if ( (*(_DWORD *)v9 & 0x1000000) != 0
            || (*(_DWORD *)(120 * v5 + a1 + 128) & 1) == 0
            || (v34 = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)a3),
                v35 = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)a4),
                (v4 = BmlCompareValues<bool>(v34, v35)) == 0) )
          {
            if ( (*(_BYTE *)v9 & 8) != 0 )
            {
              DoesTargetModeSupportWireFormat = BmlDoesTargetModeSupportWireFormat(a3, *(unsigned int *)(v9 + 204));
              v33 = BmlDoesTargetModeSupportWireFormat(a4, *(unsigned int *)(v9 + 204));
              return (unsigned int)BmlCompareValues<bool>(DoesTargetModeSupportWireFormat, v33);
            }
          }
        }
      }
    }
  }
  return v4;
}
