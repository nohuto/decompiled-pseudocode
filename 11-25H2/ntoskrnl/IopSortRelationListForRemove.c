/*
 * XREFs of IopSortRelationListForRemove @ 0x140832318
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x14082F020 (PipRemoveDevicesInRelationList.c)
 *     PnpBuildRemovalRelationList @ 0x140830278 (PnpBuildRemovalRelationList.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     PiEnumerateProviderListEntry @ 0x140712264 (PiEnumerateProviderListEntry.c)
 *     PiGetProviderList @ 0x1408319BC (PiGetProviderList.c)
 *     PipIsDeviceInDeviceObjectList @ 0x1408319F0 (PipIsDeviceInDeviceObjectList.c)
 *     PipSortDeviceObjectList @ 0x1408321BC (PipSortDeviceObjectList.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140832A80 (PnpReleaseDependencyRelationsLock.c)
 */

__int64 __fastcall IopSortRelationListForRemove(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int *v6; // r11
  int v7; // r12d
  __int64 v8; // rbp
  int v9; // ebx
  __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  bool v14; // r14
  __int64 v15; // r11
  __int64 *ProviderList; // r13
  __int64 *i; // rsi

  if ( *(_BYTE *)(a1 + 8) )
  {
    return 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
    ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
    v6 = *(unsigned int **)a1;
    v7 = 0;
    v8 = 0LL;
    if ( !**(_DWORD **)a1 )
      goto LABEL_3;
    do
    {
      v11 = *(_QWORD *)&v6[6 * v8 + 4];
      if ( v11 )
        v12 = *(_QWORD *)(*(_QWORD *)(v11 + 312) + 40LL);
      else
        v12 = 0LL;
      v13 = *(_QWORD *)(v12 + 16);
      v14 = (v13 || (v13 = *(_QWORD *)(v12 + 648) & 0xFFFFFFFFFFFFFFFEuLL) != 0)
         && PipIsDeviceInDeviceObjectList(v6, *(_QWORD *)(v13 + 32), 0LL);
      ProviderList = PiGetProviderList(v11);
      for ( i = (__int64 *)*ProviderList; i != ProviderList; i = (__int64 *)*i )
      {
        PiEnumerateProviderListEntry((__int64)i);
        v3 = 0LL;
      }
      if ( v14 )
      {
        *(_DWORD *)(v15 + 24 * v8 + 32) &= ~4u;
      }
      else
      {
        *(_DWORD *)(v15 + 24 * v8 + 32) |= 4u;
        ++v7;
      }
      v6 = *(unsigned int **)a1;
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < **(_DWORD **)a1 );
    if ( v7 )
    {
      v9 = PipSortDeviceObjectList((unsigned int **)a1);
      if ( v9 >= 0 )
        *(_BYTE *)(a1 + 8) = 1;
    }
    else
    {
LABEL_3:
      v9 = -1073741823;
    }
    PnpReleaseDependencyRelationsLock(v4, v3, v5);
  }
  return (unsigned int)v9;
}
