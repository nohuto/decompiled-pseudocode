/*
 * XREFs of WPP_RECORDER_SF_Sd @ 0x14006C050
 * Callers:
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x140067560 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1401436E0 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x140143820 (ndisBindReadFilterDriverFromV3Registry.c)
 *     _lambda_3ed15a572a362cb111cc1d3010d8268d_::operator() @ 0x140144134 (_lambda_3ed15a572a362cb111cc1d3010d8268d_--operator().c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceAddress @ 0x1401442D8 (Ndis--BindRegistry--LoadNetworkInterfaceAddress.c)
 *     ?ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x140160AF0 (-ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Sd(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        const wchar_t *a6,
        ...)
{
  const wchar_t *v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v9; // r14
  unsigned int v10; // r15d
  __int64 v11; // rsi
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r9
  const wchar_t *v16; // r8
  bool v17; // zf
  int v19; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  v9 = (unsigned __int64)a3 >> 16;
  v10 = a2;
  v11 = 10LL;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v13, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v9 + 41) >= a2 )
  {
    if ( a6 )
    {
      v14 = -1LL;
      do
        v17 = a6[++v14] == 0;
      while ( !v17 );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = a6;
    if ( !a6 )
      v16 = L"NULL";
    ndisWppFastTraceMessage(a5, a4, v16, v15, va, 4LL, 0LL);
  }
  v17 = a6 == 0LL;
  if ( a6 )
  {
    do
      v17 = a6[++v7] == 0;
    while ( !v17 );
    v11 = 2 * v7 + 2;
    v17 = a6 == 0LL;
  }
  if ( v17 )
    v6 = L"NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, v10, a3, a5, v19, v6, v11, va, 4LL, 0LL);
}
