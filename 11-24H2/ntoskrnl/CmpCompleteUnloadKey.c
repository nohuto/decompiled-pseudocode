/*
 * XREFs of CmpCompleteUnloadKey @ 0x140965368
 * Callers:
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140964D00 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x1402BA854 (CmpDecrementAppHiveUnloadCount.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x14048BF4C (CmpRemoveHiveFromNamespace.c)
 *     CmpUnJoinClassOfTrust @ 0x14049267C (CmpUnJoinClassOfTrust.c)
 *     ZwDeleteValueKey @ 0x1406A8F90 (ZwDeleteValueKey.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086D654 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyUnbacked @ 0x14087F7A8 (CmpMarkKeyUnbacked.c)
 *     CmpCleanUpSubKeyInfo @ 0x140880020 (CmpCleanUpSubKeyInfo.c)
 *     HvHiveCleanup @ 0x140882B48 (HvHiveCleanup.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408E0740 (UNLOCK_HIVE_LOAD.c)
 *     HvMarkBaseBlockDirty @ 0x1409335C8 (HvMarkBaseBlockDirty.c)
 *     CmpVolumeContextDecrementRefCount @ 0x140964FB0 (CmpVolumeContextDecrementRefCount.c)
 *     CmpDiscardKcb @ 0x140965058 (CmpDiscardKcb.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x140965600 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpDestroySecurityCache @ 0x140965680 (CmpDestroySecurityCache.c)
 *     CmpTraceHiveUnloadStop @ 0x140965730 (CmpTraceHiveUnloadStop.c)
 *     CmpCmdHiveClose @ 0x1409657C0 (CmpCmdHiveClose.c)
 *     CmpTraceHiveUnloadStart @ 0x140965940 (CmpTraceHiveUnloadStart.c)
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x140965A58 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14096749C (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDoFileSetSizeEx @ 0x1409696C4 (CmpDoFileSetSizeEx.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpCompleteUnloadKey(ULONG_PTR a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbx
  int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v10; // eax
  int v11; // edi
  unsigned int v12; // esi
  struct _PRIVILEGE_SET *v13; // rcx
  __int64 v15; // rdx
  int v16; // ecx
  unsigned int v17; // ecx
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  signed __int32 v20[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v21[2]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v21[0] = 0LL;
  CmpInitializeDelayDerefContext(v21);
  v6 = *(_DWORD *)(v3 + 4112) & 0x20;
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 6;
  v7 = *(_QWORD *)(v3 + 4152);
  if ( v7 )
  {
    v15 = *(_QWORD *)(v3 + 64);
    v16 = *(_DWORD *)(v15 + 144);
    if ( *(_QWORD *)(v7 + 16) == v7 + 16 )
      v17 = v16 & 0xFFFFFFFE;
    else
      v17 = v16 | 1;
    *(_DWORD *)(v15 + 144) = v17;
    HvMarkBaseBlockDirty(v3);
  }
  *(_DWORD *)(v3 + 160) |= 0x40u;
  CmpTraceHiveUnloadStart(v3 + 1840, v3 + 1856);
  CmpRemoveHiveFromNamespace(v3, a1, (__int64)v21);
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 8;
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4768) = 1;
    CmpDecrementAppHiveUnloadCount();
  }
  CmpFlushNotifiesOnKeyBodyList(a1, 1, (__int64)v21, 0);
  CmpMarkKeyUnbacked(a1, (__int64)v21);
  CmpDiscardKcb(a1);
  CmpRemoveLayerLinkForDiscardedKcb(a1, v21);
  CmpCleanUpSubKeyInfo(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 72LL), 1);
  CmpDrainDelayDerefContext((_QWORD **)v21);
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
    v18 = *(_QWORD *)(v3 + 1624);
    if ( *(_QWORD *)(v18 + 8) != v3 + 1624 || (v19 = *(_QWORD **)(v3 + 1632), *v19 != v3 + 1624) )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
  }
  CmpVERemoveHiveFromSIDMappingTable(v3);
  CmpDestroySecurityCache(v3);
  v10 = CmpFlushHive(v3, 44LL);
  v11 = 0;
  if ( v10 != -1073741811 )
    v11 = v10;
  v12 = *(_DWORD *)(v3 + 280) + 4096;
  HvHiveCleanup(v3);
  if ( v11 >= 0 && (*(_DWORD *)(v3 + 160) & 0x8000) == 0 && (__int64)(*(_QWORD *)(v3 + 1800) - v12) > 0x100000 )
    CmpDoFileSetSizeEx(v3, 0LL, v12, 0LL);
  CmpCmdHiveClose(v3);
  v13 = *(struct _PRIVILEGE_SET **)(v3 + 4792);
  if ( v13 )
    CmpVolumeContextDecrementRefCount(v13);
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4768) = 0;
    _InterlockedOr(v20, 0);
    if ( *(_QWORD *)(v3 + 4776) )
      ExfUnblockPushLock(v3 + 4776, 0LL);
  }
  CmpSignalUnloadEventArrayForHive(v3);
  return CmpTraceHiveUnloadStop((unsigned int)v11);
}
