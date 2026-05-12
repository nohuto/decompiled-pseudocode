/*
 * XREFs of StorInitializeMFND @ 0x1400C445C
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1400430C0 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaCallMiniportAdapterControlSafe @ 0x14003D3C0 (RaCallMiniportAdapterControlSafe.c)
 *     StorQueryAndUpdateCachedMFNDOperationInfo @ 0x1400C7268 (StorQueryAndUpdateCachedMFNDOperationInfo.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     StorInitMFNDAsyncEventHandling @ 0x14018E610 (StorInitMFNDAsyncEventHandling.c)
 */

__int64 __fastcall StorInitializeMFND(__int64 a1)
{
  __int64 Pool; // rax
  int updated; // eax
  char v5; // cl
  char v6; // dl
  char v7; // cl
  __int64 v8; // rcx

  if ( !*(_QWORD *)(a1 + 6160) )
  {
    Pool = RaidAllocatePool(64LL, 184LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 6160) = Pool;
    if ( !Pool )
      return 3221225626LL;
  }
  updated = StorQueryAndUpdateCachedMFNDOperationInfo(a1);
  v5 = *(_BYTE *)(a1 + 111);
  v6 = v5 | 2;
  v7 = v5 & 0xFD;
  if ( updated < 0 )
    v6 = v7;
  *(_BYTE *)(a1 + 111) = v6;
  if ( *(char *)(a1 + 110) >= 0 )
  {
    **(_WORD **)(a1 + 6160) = 1;
    *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 4LL) = 184;
    StorInitMFNDAsyncEventHandling(a1);
    KeInitializeEvent((PRKEVENT)(*(_QWORD *)(a1 + 6160) + 80LL), SynchronizationEvent, 0);
    v8 = *(_QWORD *)(a1 + 6160) + 128LL;
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_DWORD *)(v8 + 16) = 0;
    *(_DWORD *)v8 = 1;
    KeInitializeEvent((PRKEVENT)(v8 + 24), SynchronizationEvent, 0);
  }
  RaCallMiniportAdapterControlSafe(a1 + 376, 23);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 6160) + 112LL) )
    *(_QWORD *)(*(_QWORD *)(a1 + 6160) + 112LL) = RaidAllocatePool(64LL, 28LL, 1179476306LL, *(_QWORD *)(a1 + 8));
  return 0LL;
}
