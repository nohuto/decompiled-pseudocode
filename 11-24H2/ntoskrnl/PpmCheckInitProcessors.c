/*
 * XREFs of PpmCheckInitProcessors @ 0x140AC75E0
 * Callers:
 *     PopNewProcessorCallback @ 0x140748CF0 (PopNewProcessorCallback.c)
 *     PpmReapplyPerfPolicy @ 0x140AC77C4 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14029B69C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     PopExecuteOnTargetProcessors @ 0x1403529A4 (PopExecuteOnTargetProcessors.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140354CF8 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeIsEmptyAffinityEx @ 0x1403B55D0 (KeIsEmptyAffinityEx.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     KeEnumerateNextProcessor @ 0x14040D4F0 (KeEnumerateNextProcessor.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x140461060 (KeQueryActiveProcessorAffinity2.c)
 *     PpmCheckApplyParkConstraints @ 0x1404B38A4 (PpmCheckApplyParkConstraints.c)
 *     PpmParkRegisterParking @ 0x1405D9FB4 (PpmParkRegisterParking.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PpmAllocatePerfCheck @ 0x140758DE0 (PpmAllocatePerfCheck.c)
 *     PpmUpdateProcessorPolicy @ 0x140A5A6D8 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckReInit @ 0x140A72240 (PpmCheckReInit.c)
 *     PpmHvEnableQosEnlightenment @ 0x140ACB488 (PpmHvEnableQosEnlightenment.c)
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
