/*
 * XREFs of CmpCompleteUnloadKey @ 0x14088523C
 * Callers:
 *     CmpPerformUnloadKey @ 0x140864C24 (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140A42470 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x14036D618 (CmpDecrementAppHiveUnloadCount.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     CmpDrainDelayDerefContext @ 0x14041D8F0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14042A740 (CmpInitializeDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x140492108 (CmpRemoveHiveFromNamespace.c)
 *     CmpUnJoinClassOfTrust @ 0x140498D80 (CmpUnJoinClassOfTrust.c)
 *     ZwDeleteValueKey @ 0x14069CD20 (ZwDeleteValueKey.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086DF70 (CmpFlushNotifiesOnKeyBodyList.c)
 *     HvHiveCleanup @ 0x14087E098 (HvHiveCleanup.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408839E4 (UNLOCK_HIVE_LOAD.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     CmpMarkKeyUnbacked @ 0x140885038 (CmpMarkKeyUnbacked.c)
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x1408850B8 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpTraceHiveUnloadStart @ 0x140885124 (CmpTraceHiveUnloadStart.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x1408854D4 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpDestroySecurityCache @ 0x140885554 (CmpDestroySecurityCache.c)
 *     CmpTraceHiveUnloadStop @ 0x140885604 (CmpTraceHiveUnloadStop.c)
 *     CmpCmdHiveClose @ 0x140885694 (CmpCmdHiveClose.c)
 *     CmpCleanUpSubKeyInfo @ 0x1408860F8 (CmpCleanUpSubKeyInfo.c)
 *     CmpDiscardKcb @ 0x1409DAB50 (CmpDiscardKcb.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1409F4C34 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1409F4CEC (CmpVolumeContextDecrementRefCount.c)
 *     CmpDoFileSetSizeEx @ 0x1409F8288 (CmpDoFileSetSizeEx.c)
 *     HvMarkBaseBlockDirty @ 0x140A4B658 (HvMarkBaseBlockDirty.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpCompleteUnloadKey(ULONG_PTR a1, __int64 a2, _DWORD *a3)
{
  ULONG_PTR v3; // rbx
  int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v11; // eax
  int v12; // edi
  unsigned int v13; // esi
  struct _PRIVILEGE_SET *v14; // rcx
  __int64 v16; // rdx
  int v17; // ecx
  unsigned int v18; // ecx
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  signed __int32 v21[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v22[2]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v22[0] = 0LL;
  CmpInitializeDelayDerefContext(v22);
  v6 = *(_DWORD *)(v3 + 4112) & 0x20;
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 6;
  v7 = *(_QWORD *)(v3 + 4152);
  if ( v7 )
  {
    v16 = *(_QWORD *)(v3 + 64);
    v17 = *(_DWORD *)(v16 + 144);
    if ( *(_QWORD *)(v7 + 16) == v7 + 16 )
      v18 = v17 & 0xFFFFFFFE;
    else
      v18 = v17 | 1;
    *(_DWORD *)(v16 + 144) = v18;
    HvMarkBaseBlockDirty(v3);
  }
  *(_DWORD *)(v3 + 160) |= 0x40u;
  CmpTraceHiveUnloadStart((unsigned __int16 *)(v3 + 1840), (unsigned __int16 *)(v3 + 1856));
  CmpRemoveHiveFromNamespace(v3, a1, (__int64)v22);
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 8;
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4768) = 1;
    CmpDecrementAppHiveUnloadCount();
  }
  CmpFlushNotifiesOnKeyBodyList(a1, 1LL, (__int64)v22, 0);
  CmpMarkKeyUnbacked(a1, (__int64)v22);
  CmpDiscardKcb(a1);
  CmpRemoveLayerLinkForDiscardedKcb(a1, (__int64)v22);
  LOBYTE(v8) = 1;
  CmpCleanUpSubKeyInfo(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 72LL), v8);
  CmpDrainDelayDerefContext((_QWORD **)v22);
  CmpUnlockRegistry(v9);
  *a3 &= ~2u;
  if ( (*a3 & 4) != 0 )
  {
    UNLOCK_HIVE_LOAD();
    *a3 &= ~4u;
  }
  ZwDeleteValueKey(CmpHiveFileListHandle, (PUNICODE_STRING)(v3 + 1856));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  CmpUnJoinClassOfTrust(v3);
  KeLeaveCriticalRegion();
  if ( (*(_DWORD *)(v3 + 160) & 0x400) != 0 )
  {
    v19 = *(_QWORD *)(v3 + 1624);
    if ( *(_QWORD *)(v19 + 8) != v3 + 1624 || (v20 = *(_QWORD **)(v3 + 1632), *v20 != v3 + 1624) )
      __fastfail(3u);
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
  }
  CmpVERemoveHiveFromSIDMappingTable(v3);
  CmpDestroySecurityCache(v3);
  v11 = CmpFlushHive(v3, 0x2Cu);
  v12 = 0;
  if ( v11 != -1073741811 )
    v12 = v11;
  v13 = *(_DWORD *)(v3 + 280) + 4096;
  HvHiveCleanup(v3);
  if ( v12 >= 0 && (*(_DWORD *)(v3 + 160) & 0x8000) == 0 && (__int64)(*(_QWORD *)(v3 + 1800) - v13) > 0x100000 )
    CmpDoFileSetSizeEx(v3, 0LL, v13, 0LL);
  CmpCmdHiveClose(v3);
  v14 = *(struct _PRIVILEGE_SET **)(v3 + 4792);
  if ( v14 )
    CmpVolumeContextDecrementRefCount(v14);
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4768) = 0;
    _InterlockedOr(v21, 0);
    if ( *(_QWORD *)(v3 + 4776) )
      ExfUnblockPushLock(v3 + 4776, 0LL);
  }
  CmpSignalUnloadEventArrayForHive(v3);
  return CmpTraceHiveUnloadStop((unsigned int)v12);
}
