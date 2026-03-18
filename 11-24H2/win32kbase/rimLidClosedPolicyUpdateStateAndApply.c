/*
 * XREFs of rimLidClosedPolicyUpdateStateAndApply @ 0x1400F0E64
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x140180E58 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x140043C00 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ.c)
 *     ApiSetGetPowerTransitionsState @ 0x14005447C (ApiSetGetPowerTransitionsState.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EEEC8 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1400F2C6C (RIMCmAddContactSuppressionReasons.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall rimLidClosedPolicyUpdateStateAndApply(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  _DWORD v6[16]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v7[48]; // [rsp+60h] [rbp-48h] BYREF

  memset(v6, 0, sizeof(v6));
  v4 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(W32GetUserSessionState(v5) + 171) && !*(_DWORD *)(v4 + 2136) )
  {
    DomainShared<DLT_POWERTRANSITIONSSTATE>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v7);
    ApiSetGetPowerTransitionsState(v6);
    if ( !v6[13] && (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
    {
      RIMCmAddContactSuppressionReasons(a1, a2, 256LL);
      *(_DWORD *)(a2 + 2444) |= 0x8000u;
    }
    DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>((__int64)v7);
  }
}
