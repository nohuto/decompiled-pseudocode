/*
 * XREFs of HalpHvDiscover @ 0x14055CC50
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x1405461A4 (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x140375540 (HalQueryMaximumProcessorCount.c)
 *     HalSocRequestApi @ 0x1404A8A70 (HalSocRequestApi.c)
 *     HalpTimerRegister @ 0x14055DCBC (HalpTimerRegister.c)
 *     HalSocRequestConfigurationData @ 0x14055F0DC (HalSocRequestConfigurationData.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpHvDiscover(__int64 a1)
{
  __int64 v1; // rdx
  int MaximumProcessorCount; // eax
  int v4; // [rsp+30h] [rbp-39h] BYREF
  int v5; // [rsp+34h] [rbp-35h]
  __int64 (*v6)(); // [rsp+38h] [rbp-31h]
  __int64 (__fastcall *v7)(__int64, __int64); // [rsp+40h] [rbp-29h]
  __int64 (__fastcall *v8)(__int64); // [rsp+48h] [rbp-21h]
  __int64 (__fastcall *v9)(__int64, int, unsigned __int64); // [rsp+50h] [rbp-19h]
  unsigned __int64 (__fastcall *v10)(__int64); // [rsp+58h] [rbp-11h]
  __int64 (__fastcall *v11)(); // [rsp+78h] [rbp+Fh]
  __int64 v12; // [rsp+88h] [rbp+1Fh]
  int v13; // [rsp+90h] [rbp+27h]
  int v14; // [rsp+94h] [rbp+2Bh]
  __int64 v15; // [rsp+98h] [rbp+2Fh]
  int v16; // [rsp+A4h] [rbp+3Bh]
  int v17; // [rsp+B8h] [rbp+4Fh]
  char v18; // [rsp+D0h] [rbp+67h] BYREF

  v18 = 0;
  if ( (int)HalSocRequestApi(a1, (__int64)HalpHvCounterUpdateCallback, 3, 8LL, &HalpHvTimerApi) >= 0 )
  {
    memset_0(&v4, 0, 0x90uLL);
    v4 = 1;
    v6 = PdcCreateWatchdogAroundClientCall;
    v5 = 144;
    v7 = HalpHvCounterQueryCounter;
    v14 = 64;
    v17 = 8;
    v16 = 2;
    v15 = 10000000LL;
    HalpTimerRegister(&v4, 0LL);
  }
  if ( (int)HalSocRequestConfigurationData(3LL, v1, &v18) >= 0 && v18 )
  {
    memset_0(&v4, 0, 0x90uLL);
    v12 = 0LL;
    v4 = 1;
    v5 = 144;
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    v14 = 64;
    v15 = 10000000LL;
    v17 = 8;
    v16 = 34913;
    v6 = HalpHvTimerInitialize;
    v7 = HalpHvCounterQueryCounter;
    v11 = HalpHvTimerSetInterruptVector;
    v9 = HalpHvTimerArm;
    v8 = HalpHvTimerAcknowledgeInterrupt;
    v13 = 24 * MaximumProcessorCount;
    v10 = HalpHvTimerStop;
    HalpTimerRegister(&v4, 0LL);
  }
  return 0LL;
}
