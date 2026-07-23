/*
 * XREFs of PpmCheckInitProcessors @ 0x140AC506C
 * Callers:
 *     PopNewProcessorCallback @ 0x140746FE0 (PopNewProcessorCallback.c)
 *     PpmReapplyPerfPolicy @ 0x140AC5250 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402AA18C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402B2A28 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PopExecuteOnTargetProcessors @ 0x140370234 (PopExecuteOnTargetProcessors.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PpmCheckApplyParkConstraints @ 0x14044BDC4 (PpmCheckApplyParkConstraints.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x1404564F0 (KeQueryActiveProcessorAffinity2.c)
 *     PpmParkRegisterParking @ 0x1405D72D0 (PpmParkRegisterParking.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PpmAllocatePerfCheck @ 0x140757260 (PpmAllocatePerfCheck.c)
 *     PpmUpdateProcessorPolicy @ 0x140A51F98 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckReInit @ 0x140A6B620 (PpmCheckReInit.c)
 *     PpmHvEnableQosEnlightenment @ 0x140AC9098 (PpmHvEnableQosEnlightenment.c)
 */

LONG __fastcall PpmCheckInitProcessors(int a1, int a2)
{
  __int64 v4; // rdx
  unsigned int v5; // r8d
  __int64 Prcb; // rax
  __int64 v8; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 *v9[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v10; // [rsp+40h] [rbp-C8h]
  int v11; // [rsp+42h] [rbp-C6h]
  __int16 v12; // [rsp+46h] [rbp-C2h]
  struct _KAFFINITY_EX v13; // [rsp+48h] [rbp-C0h] BYREF

  v11 = 0;
  v12 = 0;
  v8 = 0LL;
  memset_0(&v13.8, 0, sizeof(v13.8));
  *(_QWORD *)&v13.Count = 2097153LL;
  memset_0(&v13.8, 0, sizeof(v13.8));
  if ( !a1 )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v4, v5);
    KeQueryActiveProcessorAffinity2((__int64)&v13);
    if ( !(unsigned __int8)KiSubtractAffinityEx(&v13, &PpmCheckRegistered, &v13, v13.Size) )
      return PpmReleaseLock(&PpmPerfPolicyLock);
  }
  KiOrAffinityEx(&PpmCheckRegistered, &v13, &PpmCheckRegistered, PpmCheckRegistered.Size);
  if ( !(unsigned int)KeIsEmptyAffinityEx(&v13.Count) )
  {
    v9[1] = (unsigned __int16 *)v13.Bitmap[0];
    v9[0] = (unsigned __int16 *)&v13;
    v10 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v8, v9) )
    {
      Prcb = KeGetPrcb(v8);
      PpmAllocatePerfCheck(Prcb + 35248);
    }
    PopExecuteOnTargetProcessors((__int64)&v13, (__int64)PpmCheckProcessorInit, 0LL, 0LL);
  }
  if ( !(unsigned int)KeIsEmptyAffinityEx(&v13.Count) || a2 )
    PpmParkRegisterParking();
  if ( _bittest64((const signed __int64 *)&KeGetCurrentPrcb()->FeatureBits, 0x27u) )
  {
    PpmAllowedActions |= 0x400u;
    HIDWORD(v8) |= 0x400u;
    PpmUpdateProcessorPolicy((_WORD *)&v8 + 2, 0LL);
  }
  if ( (unsigned int)KeIsEmptyAffinityEx(&v13.Count) && !a2 )
  {
    PpmHvEnableQosEnlightenment();
    return PpmReleaseLock(&PpmPerfPolicyLock);
  }
  PpmCheckReInit();
  PpmCheckApplyParkConstraints();
  return PpmHvEnableQosEnlightenment();
}
