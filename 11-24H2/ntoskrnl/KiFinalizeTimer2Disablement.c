/*
 * XREFs of KiFinalizeTimer2Disablement @ 0x1403AF288
 * Callers:
 *     KiUpdateTimer2Flags @ 0x1403AF1F0 (KiUpdateTimer2Flags.c)
 *     KiExpireTimer2 @ 0x1403AF650 (KiExpireTimer2.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x14039F830 (EtwTraceTimedEvent.c)
 *     ExpFinalizeTimerDeletion @ 0x1403ADE00 (ExpFinalizeTimerDeletion.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall KiFinalizeTimer2Disablement(unsigned __int64 a1)
{
  __int64 v1; // r15
  char v3; // bp
  int result; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  void (__fastcall *v8)(unsigned __int64); // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx
  _QWORD v12[3]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v13[2]; // [rsp+48h] [rbp-40h] BYREF

  v1 = 0LL;
  memset(v13, 0, sizeof(v13));
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 96);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  result = KiWaitNever;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 112) ^ KiWaitNever;
  v7 = (unsigned int)KiWaitNever;
  v8 = (void (__fastcall *)(unsigned __int64))(KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v6, KiWaitNever)));
  if ( v8 )
  {
    v5 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(*(_QWORD *)(a1 + 120) ^ KiWaitNever, KiWaitNever));
    CurrentIrql = KeGetCurrentIrql();
    v10 = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v7, 2LL);
    }
    if ( v3 )
      EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v13, 0x40020000u);
    if ( v8 == ExpFinalizeTimerDeletion )
      ExpFinalizeTimerDeletion(v5);
    else
      guard_dispatch_icall_no_overrides(v5, v10);
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( v3 )
  {
    v12[1] = v8;
    v12[0] = 0x7E35C6C7F3DD7277LL
           * (KiWaitNever ^ __ROR8__(
                              KiWaitAlways ^ _byteswap_uint64(KiWaitAlways ^ a1) ^ _byteswap_uint64(a1 ^ __ROL8__(v1 ^ KiWaitNever, KiWaitNever)),
                              KiWaitNever));
    v12[2] = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ v5), KiWaitNever));
    if ( !v8 )
      EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v13, 0x40020000u);
    return EtwTraceTimedEvent(3948, 0x40020000u, (__int64)v12, 24, 0x500E02u, (__int64)v13);
  }
  return result;
}
