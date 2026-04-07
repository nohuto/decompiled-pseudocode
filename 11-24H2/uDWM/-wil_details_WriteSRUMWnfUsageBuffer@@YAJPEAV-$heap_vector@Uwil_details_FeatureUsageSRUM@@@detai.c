/*
 * XREFs of ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x1800A0E7C
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_5035b992506f4af81a770c5842624510_@@CA@PEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18009D7A0 (-_lambda_invoker_cdecl_@_lambda_5035b992506f4af81a770c5842624510_@@CA@PEAU_TP_CALLBACK_INSTANCE@.c)
 * Callees:
 *     wil_details_NtQueryWnfStateData @ 0x180096028 (wil_details_NtQueryWnfStateData.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 *     ??$make_range@PEAUwil_details_FeatureUsageSRUM@@@wil@@YA?AV?$pointer_range@PEAUwil_details_FeatureUsageSRUM@@@details@0@PEAUwil_details_FeatureUsageSRUM@@_K@Z @ 0x18009DC40 (--$make_range@PEAUwil_details_FeatureUsageSRUM@@@wil@@YA-AV-$pointer_range@PEAUwil_details_Featu.c)
 *     wil_details_NtUpdateWnfStateData @ 0x1800A1144 (wil_details_NtUpdateWnfStateData.c)
 *     _alloca_probe @ 0x1800F6300 (_alloca_probe.c)
 */

__int64 __fastcall wil_details_WriteSRUMWnfUsageBuffer(__int64 *a1)
{
  unsigned int WnfStateData; // ebx
  unsigned int updated; // edi
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // r9d
  unsigned int v8; // r11d
  __int64 i; // r10
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 j; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v17[3]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v18[1024]; // [rsp+70h] [rbp-90h] BYREF

  WnfStateData = 0;
  updated = 0;
  if ( (unsigned __int64)(a1[1] - *a1) >= 0xC )
  {
    v4 = 0;
    do
    {
      memset_0(v18, 0, sizeof(v18));
      v15 = 4096LL;
      WnfStateData = wil_details_NtQueryWnfStateData(
                       (__int64)&__WIL_WNF_WIL_FEATURE_USAGE_FOR_SRUM,
                       v5,
                       v6,
                       (__int64)&v15 + 4,
                       (__int64)v18,
                       (__int64)&v15);
      if ( !WnfStateData )
      {
        if ( (unsigned int)v15 != 12 * ((unsigned int)v15 / 0xCuLL) )
          LODWORD(v15) = 0;
        wil::make_range<wil_details_FeatureUsageSRUM *>(v16, *a1, (a1[1] - *a1) / 0xCuLL);
        for ( i = v16[0]; i != v16[1]; i = v11 + 12 )
        {
          wil::make_range<wil_details_FeatureUsageSRUM *>(v17, (__int64)v18, v8);
          for ( j = v17[0]; j != v17[1]; j += 12LL )
          {
            if ( *(_DWORD *)j == *(_DWORD *)v11 && *(_WORD *)(j + 4) == *(_WORD *)(v11 + 4) )
            {
              *(_DWORD *)(j + 8) += *(_DWORD *)(v11 + 8);
              v7 = v15;
              goto LABEL_15;
            }
          }
          if ( (unsigned __int64)v7 + 12 <= 0x1000 )
          {
            v13 = 3 * v10;
            *(_QWORD *)&v18[v13] = *(_QWORD *)v11;
            v7 += 12;
            ++v8;
            v18[v13 + 2] = *(_DWORD *)(v11 + 8);
            LODWORD(v15) = v7;
          }
LABEL_15:
          ;
        }
        updated = wil_details_NtUpdateWnfStateData(
                    (unsigned int)&__WIL_WNF_WIL_FEATURE_USAGE_FOR_SRUM,
                    (unsigned int)v18,
                    v7,
                    v7);
      }
      ++v4;
    }
    while ( updated == -1073741823 && v4 < 100 && !WnfStateData );
  }
  if ( !WnfStateData )
    return updated;
  return WnfStateData;
}
