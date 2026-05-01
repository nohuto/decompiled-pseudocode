/*
 * XREFs of CrmActivityTelemetryUpdate @ 0x18002F8D8
 * Callers:
 *     CrmRegistrationNotify @ 0x18002F2C0 (CrmRegistrationNotify.c)
 *     CrmRegistrationReadyQueueRemove @ 0x18002F6F8 (CrmRegistrationReadyQueueRemove.c)
 *     CrmActivityTelemetryUpdateCurrentStates @ 0x18002FE80 (CrmActivityTelemetryUpdateCurrentStates.c)
 *     CrmActivityCleanup @ 0x180032E80 (CrmActivityCleanup.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C79C (CempQueryUnbiasedInterruptTimeMs64.c)
 */

void __fastcall CrmActivityTelemetryUpdate(__int64 a1, int a2)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 UnbiasedInterruptTimeMs64; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 v10; // rbx
  unsigned __int64 v11; // rax

  if ( *(_DWORD *)(a1 + 64) == 1301 )
  {
    v3 = a2;
    v4 = *(_QWORD *)(a1 + 8LL * a2 + 248);
    v5 = *(_QWORD *)(a1 + 8LL * a2 + 272);
    UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
    v7 = *(_QWORD *)(a1 + 8 * v3 + 320);
    v8 = UnbiasedInterruptTimeMs64 - v4;
    v9 = UnbiasedInterruptTimeMs64;
    v10 = UnbiasedInterruptTimeMs64 - v5;
    *(_QWORD *)(a1 + 8 * v3 + 296) += UnbiasedInterruptTimeMs64 - v5;
    if ( v7 <= v8 )
      v7 = v8;
    *(_QWORD *)(a1 + 8 * v3 + 320) = v7;
    CempLockAcquireExclusive((__int64)&unk_1800E9AF0);
    v11 = *((_QWORD *)&CrmGlobals + v3 + 86);
    *((_QWORD *)&CrmGlobals + v3 + 83) += v10;
    if ( v11 <= v8 )
      v11 = v8;
    *((_QWORD *)&CrmGlobals + v3 + 86) = v11;
    dword_1800E9AF8 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800E9AF0);
    *(_QWORD *)(a1 + 8 * v3 + 272) = v9;
  }
}
