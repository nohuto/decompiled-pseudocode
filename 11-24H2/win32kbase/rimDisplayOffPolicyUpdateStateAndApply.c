/*
 * XREFs of rimDisplayOffPolicyUpdateStateAndApply @ 0x140180FF0
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x140180E58 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x140043C00 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ.c)
 *     ApiSetGetPowerTransitionsState @ 0x14005447C (ApiSetGetPowerTransitionsState.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EEEC8 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1400EFB70 (RIMCmRemoveContactSuppressionReasons.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1400F2C6C (RIMCmAddContactSuppressionReasons.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall rimDisplayOffPolicyUpdateStateAndApply(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rax
  _DWORD v6[16]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v7[48]; // [rsp+60h] [rbp-48h] BYREF

  memset(v6, 0, sizeof(v6));
  DomainShared<DLT_POWERTRANSITIONSSTATE>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v7);
  ApiSetGetPowerTransitionsState(v6);
  v4 = *(_DWORD *)(a2 + 8) & 0x80;
  if ( v6[0] )
  {
    if ( v4 && *(_DWORD *)(a1 + 24) == 7 && *(_DWORD *)(a1 + 1016) == 1 )
    {
      RIMCmRemoveContactSuppressionReasons(a1, (unsigned int *)a2, 0x80u);
      *(_DWORD *)(a2 + 2496) = *(_DWORD *)(a2 + 64);
      *(_QWORD *)(a2 + 2512) = *(_QWORD *)(a2 + 72);
      v5 = *(_QWORD *)(a2 + 80);
      *(_QWORD *)(a2 + 2472) = v5;
      *(_QWORD *)(a2 + 2488) = v5;
    }
  }
  else if ( !v4 )
  {
    RIMCmAddContactSuppressionReasons(a1, (unsigned int *)a2, 0x80u);
    *(_DWORD *)(a2 + 2444) |= 0x8000u;
  }
  DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>((__int64)v7);
}
