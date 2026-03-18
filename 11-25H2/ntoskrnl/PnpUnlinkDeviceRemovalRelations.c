/*
 * XREFs of PnpUnlinkDeviceRemovalRelations @ 0x1408313BC
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x14082F020 (PipRemoveDevicesInRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x140830314 (PiEventRemovalPostSurpriseRemove.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExConvertExclusiveToSharedLite @ 0x140280040 (ExConvertExclusiveToSharedLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140301360 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PpDevNodeRemoveFromTree @ 0x1404A3974 (PpDevNodeRemoveFromTree.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1404A6D88 (PnpSetDeviceInstanceRemovalEvent.c)
 *     IopRemoveCurrentRelationFromList @ 0x140727644 (IopRemoveCurrentRelationFromList.c)
 *     IopIsDescendantNode @ 0x140831640 (IopIsDescendantNode.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408366A8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     _PnpSetObjectProperty @ 0x1409558B8 (_PnpSetObjectProperty.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140A46AF4 (PnpCleanupDeviceRegistryValues.c)
 */

void __fastcall PnpUnlinkDeviceRemovalRelations(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG IsResourceAcquiredSharedLite; // ebx
  ULONG v5; // edi
  unsigned int v6; // ebx
  unsigned int v7; // r11d
  _QWORD *v8; // r14
  unsigned int *v9; // r8
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rdi
  struct _KTHREAD *v15; // rax
  __int64 v16; // r15
  char v17; // bl
  __int64 v18; // rdx
  __int64 v19; // r8
  bool v20; // zf
  __int64 v21; // rcx
  PVOID P; // [rsp+80h] [rbp+30h] BYREF
  int v23; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v24; // [rsp+8Ch] [rbp+3Ch]
  __int64 v25; // [rsp+98h] [rbp+48h] BYREF

  v25 = 0LL;
  CurrentThread = KeGetCurrentThread();
  P = 0LL;
  --CurrentThread->KernelApcDisable;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(&IopDeviceTreeLock);
  v5 = IsResourceAcquiredSharedLite;
  if ( IsResourceAcquiredSharedLite )
  {
    do
    {
      ExReleaseResourceLite(&IopDeviceTreeLock);
      --v5;
    }
    while ( v5 );
    do
    {
      ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
      --IsResourceAcquiredSharedLite;
    }
    while ( IsResourceAcquiredSharedLite );
  }
  if ( a2 && *(_BYTE *)(a2 + 8) )
  {
    v6 = 1;
    v7 = 0;
    v23 = 1;
    while ( 1 )
    {
      v8 = 0LL;
      if ( v6 )
      {
        if ( !*(_BYTE *)(a2 + 8) )
          break;
      }
      v9 = *(unsigned int **)a2;
      v10 = **(_DWORD **)a2;
      if ( v7 >= v10 )
        break;
      if ( v6 > 1 )
      {
        if ( v6 != 2 )
          break;
        v11 = v10 - v7 - 1;
      }
      else
      {
        v11 = v7;
      }
      if ( v9 && (unsigned int)v11 < v10 )
      {
        v12 = 3 * v11;
        v13 = 1;
        v8 = *(_QWORD **)&v9[2 * v12 + 4];
      }
      else
      {
        v13 = 0;
      }
      v24 = v7 + 1;
      if ( !v13 )
        break;
      v14 = *(_QWORD *)(v8[39] + 40LL);
      IopIsDescendantNode(a2);
      if ( (unsigned int)(*(_DWORD *)(v14 + 300) - 789) <= 1 )
      {
        v15 = KeGetCurrentThread();
        v16 = *(_QWORD *)(v14 + 16);
        --v15->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        PnpCleanupDeviceRegistryValues(v14 + 40);
        v17 = PpDevNodeRemoveFromTree((_QWORD *)v14);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        if ( v17 )
        {
          v20 = *(_QWORD *)(v14 + 48) == 0LL;
          *(_QWORD *)(v14 + 648) = v16;
          if ( !v20 )
          {
            PiPnpRtlBeginOperation(&P, v18, v19);
            v25 = MEMORY[0xFFFFF78000000014];
            PnpSetObjectProperty(
              PiPnpRtlCtx,
              *(_QWORD *)(v14 + 48),
              1,
              0LL,
              (__int64)&DEVPKEY_Device_LastRemovalDate,
              16,
              (__int64)&v25,
              8,
              0);
            PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v21, *(_QWORD *)(v14 + 48), 1LL);
            PnpSetDeviceInstanceRemovalEvent(v14);
            if ( P )
            {
              PiPnpRtlEndOperation(P);
              P = 0LL;
            }
          }
          if ( *(_DWORD *)(v14 + 300) == 790 )
            IopRemoveCurrentRelationFromList((_QWORD *)a2, (__int64)v8, &v23);
          ObfDereferenceObject(v8);
        }
        v7 = v24;
        v6 = v23;
      }
    }
  }
  ExConvertExclusiveToSharedLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
}
