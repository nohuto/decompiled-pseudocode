/*
 * XREFs of PiQueryPowerDependencyRelations @ 0x140A87850
 * Callers:
 *     PiQueryPowerRelations @ 0x140A872C8 (PiQueryPowerRelations.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     PnpAcquirePowerRelationsQueueLock @ 0x1404ADEB8 (PnpAcquirePowerRelationsQueueLock.c)
 *     PnpReleasePowerRelationsQueueLock @ 0x1404B4A7C (PnpReleasePowerRelationsQueueLock.c)
 *     PiEnumerateProviderListEntry @ 0x140712264 (PiEnumerateProviderListEntry.c)
 *     PiGetProviderList @ 0x1408319BC (PiGetProviderList.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140832A80 (PnpReleaseDependencyRelationsLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiQueryPowerDependencyRelations(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *ProviderList; // r14
  _QWORD *v4; // r15
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx
  __int64 i; // r11
  __int64 *v8; // r11
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 *j; // r15

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
  ProviderList = PiGetProviderList(*(_QWORD *)(a1 + 32));
  v4 = (_QWORD *)(a1 + 192);
  v5 = *(_QWORD **)(a1 + 192);
  while ( v5 != v4 )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    if ( *((_BYTE *)v6 + 48) )
    {
      for ( i = *ProviderList; (__int64 *)i != ProviderList; i = *v8 )
        PiEnumerateProviderListEntry(i);
      PnpAcquirePowerRelationsQueueLock();
      v9 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6
        || (v10 = (_QWORD *)v6[1], (_QWORD *)*v10 != v6)
        || (*v10 = v9, *(_QWORD *)(v9 + 8) = v10, v11 = v6[3], *(_QWORD **)(v11 + 8) != v6 + 3)
        || (v12 = (_QWORD *)v6[4], (_QWORD *)*v12 != v6 + 3) )
      {
        __fastfail(3u);
      }
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      PnpReleasePowerRelationsQueueLock();
      ExFreePoolWithTag(v6, 0x72775044u);
    }
  }
  for ( j = (__int64 *)*ProviderList; j != ProviderList; j = (__int64 *)*j )
    PiEnumerateProviderListEntry((__int64)j);
  PnpReleaseDependencyRelationsLock();
  return 0LL;
}
