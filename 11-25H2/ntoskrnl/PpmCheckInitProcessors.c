/*
 * XREFs of PpmCheckInitProcessors @ 0x140AC1BF8
 * Callers:
 *     PopNewProcessorCallback @ 0x14073CCE0 (PopNewProcessorCallback.c)
 *     PpmReapplyPerfPolicy @ 0x140A3EE58 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140272B6C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1403ADE18 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     PopExecuteOnTargetProcessors @ 0x1403B2EE8 (PopExecuteOnTargetProcessors.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x140462440 (KeQueryActiveProcessorAffinity2.c)
 *     PpmCheckApplyParkConstraints @ 0x1404B3F74 (PpmCheckApplyParkConstraints.c)
 *     PpmParkRegisterParking @ 0x1405D55E0 (PpmParkRegisterParking.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PpmAllocatePerfCheck @ 0x14074CB80 (PpmAllocatePerfCheck.c)
 *     PpmCheckReInit @ 0x140A4D648 (PpmCheckReInit.c)
 *     PpmUpdateProcessorPolicy @ 0x140A56B1C (PpmUpdateProcessorPolicy.c)
 *     PpmHvEnableQosEnlightenment @ 0x140AC46CC (PpmHvEnableQosEnlightenment.c)
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
