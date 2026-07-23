/*
 * XREFs of PopAccumulateNonDripsIdleCpuTime @ 0x1404904E0
 * Callers:
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1403A5504 (PopUpdateNonAttributedCpuTimeReference.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmParkGetParkNode @ 0x14049067C (PpmParkGetParkNode.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x14049071C (PpmIdleSnapConcurrencyIdleTime.c)
 */

unsigned __int64 __fastcall PopAccumulateNonDripsIdleCpuTime(char a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v4; // r14
  unsigned __int64 result; // rax
  __int64 v10; // r12
  KIRQL v11; // r13
  __int64 ParkNode; // rax
  KSPIN_LOCK *v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx

  v4 = (unsigned int)dword_140E27F00;
  result = PpmPlatformStates;
  if ( PpmPlatformStates && dword_140E27F00 != -1 )
  {
    v10 = *(_QWORD *)(PpmPlatformStates + 48);
    v11 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
    ParkNode = PpmParkGetParkNode(0LL, 0LL);
    if ( ParkNode )
    {
      v13 = *(KSPIN_LOCK **)(ParkNode + 1104);
      if ( v13 )
        PpmIdleSnapConcurrencyIdleTime(v13);
    }
    KeReleaseSpinLock(&PpmParkStateLock, v11);
    result = v4 << 10;
    v14 = *(_QWORD *)((v4 << 10) + v10 + 72);
    if ( !a1 )
    {
      result = -*a2;
      v15 = v14 - *a3;
      if ( result > v15 )
      {
        result -= v15;
        *a4 += result;
      }
    }
    *a2 = 0LL;
    *a3 = v14;
  }
  return result;
}
