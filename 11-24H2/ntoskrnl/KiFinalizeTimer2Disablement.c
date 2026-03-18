/*
 * XREFs of KiFinalizeTimer2Disablement @ 0x1403C06C8
 * Callers:
 *     KiUpdateTimer2Flags @ 0x1403C0630 (KiUpdateTimer2Flags.c)
 *     KiExpireTimer2 @ 0x1403C0A90 (KiExpireTimer2.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x1403B1020 (EtwTraceTimedEvent.c)
 *     ExpFinalizeTimerDeletion @ 0x1403BF240 (ExpFinalizeTimerDeletion.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall KiFinalizeTimer2Disablement(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  char v6; // bp
  int result; // eax
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  void (__fastcall *v11)(unsigned __int64); // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 v13; // rdx
  __int64 v14; // rdx
  _QWORD v15[3]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v16[2]; // [rsp+48h] [rbp-40h] BYREF

  v4 = 0LL;
  memset(v16, 0, sizeof(v16));
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 96);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  result = KiWaitNever;
  v8 = 0LL;
  v9 = *(_QWORD *)(a1 + 112) ^ KiWaitNever;
  v10 = (unsigned int)KiWaitNever;
  v11 = (void (__fastcall *)(unsigned __int64))(KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v9, KiWaitNever)));
  if ( v11 )
  {
    v8 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(*(_QWORD *)(a1 + 120) ^ KiWaitNever, KiWaitNever));
    CurrentIrql = KeGetCurrentIrql();
    v13 = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v10, 2LL);
    }
    if ( v6 )
      EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v16, 0x40020000u);
    if ( v11 == ExpFinalizeTimerDeletion )
      ExpFinalizeTimerDeletion(v8);
    else
      guard_dispatch_icall_no_overrides(v8, v13, a3, a4);
    if ( KiIrqlFlags )
    {
      LOBYTE(v14) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( v6 )
  {
    v15[1] = v11;
    v15[0] = 0x7E35C6C7F3DD7277LL
           * (KiWaitNever ^ __ROR8__(
                              KiWaitAlways ^ _byteswap_uint64(KiWaitAlways ^ a1) ^ _byteswap_uint64(a1 ^ __ROL8__(v4 ^ KiWaitNever, KiWaitNever)),
                              KiWaitNever));
    v15[2] = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ v8), KiWaitNever));
    if ( !v11 )
      EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v16, 0x40020000u);
    return EtwTraceTimedEvent(3948, 0x40020000u, (__int64)v15, 24, 0x500E02u, (__int64)v16);
  }
  return result;
}
