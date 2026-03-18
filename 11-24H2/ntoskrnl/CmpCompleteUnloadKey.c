/*
 * XREFs of CmpCompleteUnloadKey @ 0x14097CB58
 * Callers:
 *     CmpPerformUnloadKey @ 0x14097B52C (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14097C4F0 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x1402C8200 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpDrainDelayDerefContext @ 0x14041AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140424470 (CmpInitializeDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x140491454 (CmpRemoveHiveFromNamespace.c)
 *     CmpUnJoinClassOfTrust @ 0x140497B6C (CmpUnJoinClassOfTrust.c)
 *     ZwDeleteValueKey @ 0x1406A7FF0 (ZwDeleteValueKey.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140869324 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyUnbacked @ 0x14087B8F8 (CmpMarkKeyUnbacked.c)
 *     CmpCleanUpSubKeyInfo @ 0x14087C170 (CmpCleanUpSubKeyInfo.c)
 *     HvHiveCleanup @ 0x14087EC98 (HvHiveCleanup.c)
 *     UNLOCK_HIVE_LOAD @ 0x140909020 (UNLOCK_HIVE_LOAD.c)
 *     HvMarkBaseBlockDirty @ 0x140931488 (HvMarkBaseBlockDirty.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14097C7A0 (CmpVolumeContextDecrementRefCount.c)
 *     CmpDiscardKcb @ 0x14097C848 (CmpDiscardKcb.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x14097CDF0 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpDestroySecurityCache @ 0x14097CE70 (CmpDestroySecurityCache.c)
 *     CmpTraceHiveUnloadStop @ 0x14097CF20 (CmpTraceHiveUnloadStop.c)
 *     CmpCmdHiveClose @ 0x14097CFB0 (CmpCmdHiveClose.c)
 *     CmpTraceHiveUnloadStart @ 0x14097D130 (CmpTraceHiveUnloadStart.c)
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x14097D248 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14097EC8C (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDoFileSetSizeEx @ 0x140980EB4 (CmpDoFileSetSizeEx.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpCompleteUnloadKey(ULONG_PTR a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbx
  int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edi
  unsigned int v15; // esi
  struct _PRIVILEGE_SET *v16; // rcx
  __int64 v18; // rdx
  int v19; // ecx
  unsigned int v20; // ecx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  signed __int32 v23[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v24[2]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v24[0] = 0LL;
  CmpInitializeDelayDerefContext(v24);
  v6 = *(_DWORD *)(v3 + 4112) & 0x20;
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 6;
  v7 = *(_QWORD *)(v3 + 4152);
  if ( v7 )
  {
    v18 = *(_QWORD *)(v3 + 64);
    v19 = *(_DWORD *)(v18 + 144);
    if ( *(_QWORD *)(v7 + 16) == v7 + 16 )
      v20 = v19 & 0xFFFFFFFE;
    else
      v20 = v19 | 1;
    *(_DWORD *)(v18 + 144) = v20;
    HvMarkBaseBlockDirty(v3);
  }
  *(_DWORD *)(v3 + 160) |= 0x40u;
  CmpTraceHiveUnloadStart(v3 + 1840, v3 + 1856);
  CmpRemoveHiveFromNamespace(v3, a1, (__int64)v24);
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 8;
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4768) = 1;
    CmpDecrementAppHiveUnloadCount();
  }
  CmpFlushNotifiesOnKeyBodyList(a1, 1, (__int64)v24, 0);
  CmpMarkKeyUnbacked(a1, (__int64)v24);
  CmpDiscardKcb(a1);
  CmpRemoveLayerLinkForDiscardedKcb(a1, v24);
  CmpCleanUpSubKeyInfo(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 72LL), 1);
  CmpDrainDelayDerefContext((_QWORD **)v24);
  CmpUnlockRegistry(v8);
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
    v21 = *(_QWORD *)(v3 + 1624);
    if ( *(_QWORD *)(v21 + 8) != v3 + 1624 || (v22 = *(_QWORD **)(v3 + 1632), *v22 != v3 + 1624) )
      __fastfail(3u);
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
  }
  CmpVERemoveHiveFromSIDMappingTable(v3);
  CmpDestroySecurityCache(v3);
  v10 = CmpFlushHive(v3, 44LL);
  v14 = 0;
  if ( v10 != -1073741811 )
    v14 = v10;
  v15 = *(_DWORD *)(v3 + 280) + 4096;
  HvHiveCleanup(v3, v11, v12, v13);
  if ( v14 >= 0 && (*(_DWORD *)(v3 + 160) & 0x8000) == 0 && (__int64)(*(_QWORD *)(v3 + 1800) - v15) > 0x100000 )
    CmpDoFileSetSizeEx(v3, 0LL, v15, 0LL);
  CmpCmdHiveClose(v3);
  v16 = *(struct _PRIVILEGE_SET **)(v3 + 4792);
  if ( v16 )
    CmpVolumeContextDecrementRefCount(v16);
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4768) = 0;
    _InterlockedOr(v23, 0);
    if ( *(_QWORD *)(v3 + 4776) )
      ExfUnblockPushLock(v3 + 4776, 0LL);
  }
  CmpSignalUnloadEventArrayForHive(v3);
  return CmpTraceHiveUnloadStop((unsigned int)v14);
}
