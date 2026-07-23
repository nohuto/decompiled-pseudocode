/*
 * XREFs of PopFxNotifyPreDIrpIssue @ 0x1403A7CC8
 * Callers:
 *     PopRequestPowerIrp @ 0x1403A7FD0 (PopRequestPowerIrp.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponent @ 0x1402AE4EC (PopFxActivateComponent.c)
 *     PopFxNextParentRelationSafe @ 0x1403A6340 (PopFxNextParentRelationSafe.c)
 */

bool __fastcall PopFxNotifyPreDIrpIssue(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  KIRQL v4; // al
  KSPIN_LOCK *v6; // rbp
  KIRQL v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 72LL * *(char *)(a2 + 66) + 200) + 192LL) == 1 )
  {
    v6 = (KSPIN_LOCK *)(a1 + 1280);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1280));
    v10 = 0LL;
    v8 = 0LL;
    while ( PopFxNextParentRelationSafe((_QWORD **)(a1 + 1304), v8, &v10) )
    {
      v8 = v10;
      if ( (*(_DWORD *)(v10 + 16) & 2) == 0 )
      {
        v9 = *(_QWORD *)(v10 + 24);
        PopFxActivateComponent(*(_QWORD *)(v9 + 80), v9, 10LL, 0);
        v8 = v10;
        if ( *(int *)(v9 + 88) < 0 )
        {
          *(_DWORD *)(v10 + 16) |= 2u;
        }
        else
        {
          *(_DWORD *)(v10 + 16) |= 1u;
          ++*(_DWORD *)(a1 + 1288);
        }
      }
    }
    if ( *(_DWORD *)(a1 + 1288) )
    {
      *(_QWORD *)(a1 + 1296) = v2;
      v2 = 0LL;
    }
    KeReleaseSpinLock(v6, v7);
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 864), 0, 0) & 0x20) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 32), 0) & 0x2000) != 0 )
    {
      v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1192));
      *(_DWORD *)(a1 + 1220) |= 1u;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 1200));
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 1192), v4);
    }
  }
  return v2 != 0;
}
