/*
 * XREFs of WPP_RECORDER_SF_S @ 0x140094F70
 * Callers:
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1400DD68C (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1401351B0 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     NdisQueryDiagnosticSetting @ 0x140138690 (NdisQueryDiagnosticSetting.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1401436E0 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x140143820 (ndisBindReadFilterDriverFromV3Registry.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1401439C0 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x14015C0E0 (ndisLWMBuildConfigurationKeyPath.c)
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1401655B0 (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v10; // rsi
  unsigned int v11; // r14d
  __int64 v12; // rbp
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r9
  const wchar_t *v17; // r8
  bool v18; // zf
  int v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-28h]
  __int64 v22; // [rsp+48h] [rbp-20h]

  v6 = a6;
  v7 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v11 = a2;
  v12 = 10LL;
  v14 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v14, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) >= a2 )
  {
    if ( a6 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a6[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v16 = 10LL;
    }
    v17 = a6;
    if ( !a6 )
      v17 = L"NULL";
    ndisWppFastTraceMessage(a5, a4, v17, v16, 0LL);
  }
  v18 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v12 = 2 * v7 + 2;
    v18 = a6 == 0LL;
  }
  if ( v18 )
    v6 = L"NULL";
  LOWORD(v20) = a4;
  return WppAutoLogTrace(a1, v11, a3, a5, v20, v6, v12, 0LL, v21, v22);
}
