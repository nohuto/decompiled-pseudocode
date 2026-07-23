/*
 * XREFs of IopSortRelationListForRemove @ 0x1409BDA40
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x1409BADE0 (PipRemoveDevicesInRelationList.c)
 *     PnpBuildRemovalRelationList @ 0x1409BC6DC (PnpBuildRemovalRelationList.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     PiEnumerateProviderListEntry @ 0x14071BEF4 (PiEnumerateProviderListEntry.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409BDC24 (PnpReleaseDependencyRelationsLock.c)
 *     PipSortDeviceObjectList @ 0x1409BDCEC (PipSortDeviceObjectList.c)
 *     PipIsDeviceInDeviceObjectList @ 0x1409BDEE0 (PipIsDeviceInDeviceObjectList.c)
 *     PiGetProviderList @ 0x1409BDF50 (PiGetProviderList.c)
 */

__int64 __fastcall IopSortRelationListForRemove(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _DWORD *v6; // r11
  int v7; // r12d
  __int64 v8; // rbp
  int v9; // ebx
  __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  char IsDeviceInDeviceObjectList; // r14
  __int64 v15; // r11
  _QWORD **ProviderList; // r13
  _QWORD *i; // rsi

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
    v6 = *(_DWORD **)a1;
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
      if ( v13 || (v13 = *(_QWORD *)(v12 + 648) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        IsDeviceInDeviceObjectList = PipIsDeviceInDeviceObjectList(v6, *(_QWORD *)(v13 + 32), 0LL);
      else
        IsDeviceInDeviceObjectList = 0;
      ProviderList = (_QWORD **)PiGetProviderList(v11);
      for ( i = *ProviderList; i != ProviderList; i = (_QWORD *)*i )
      {
        PiEnumerateProviderListEntry((__int64)i);
        v3 = 0LL;
      }
      if ( IsDeviceInDeviceObjectList )
      {
        *(_DWORD *)(v15 + 24 * v8 + 32) &= ~4u;
      }
      else
      {
        *(_DWORD *)(v15 + 24 * v8 + 32) |= 4u;
        ++v7;
      }
      v6 = *(_DWORD **)a1;
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < **(_DWORD **)a1 );
    if ( v7 )
    {
      v9 = PipSortDeviceObjectList(a1);
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
