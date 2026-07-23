/*
 * XREFs of PnpUnlinkDeviceRemovalRelations @ 0x1409BD1E4
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x1409BADE0 (PipRemoveDevicesInRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x1409BC778 (PiEventRemovalPostSurpriseRemove.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14022A090 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExConvertExclusiveToSharedLite @ 0x1402F1430 (ExConvertExclusiveToSharedLite.c)
 *     PpDevNodeRemoveFromTree @ 0x14049E834 (PpDevNodeRemoveFromTree.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1404A22A8 (PnpSetDeviceInstanceRemovalEvent.c)
 *     IopRemoveCurrentRelationFromList @ 0x140731810 (IopRemoveCurrentRelationFromList.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B6E6C (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1409BB950 (PnpCleanupDeviceRegistryValues.c)
 *     IopIsDescendantNode @ 0x1409BD468 (IopIsDescendantNode.c)
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
  bool v18; // zf
  __int64 v19; // rcx
  PVOID P; // [rsp+80h] [rbp+30h] BYREF
  int v21; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v22; // [rsp+8Ch] [rbp+3Ch]
  __int64 v23; // [rsp+98h] [rbp+48h] BYREF

  v23 = 0LL;
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
    v21 = 1;
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
      v22 = v7 + 1;
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
        PnpCleanupDeviceRegistryValues((unsigned __int16 *)(v14 + 40));
        v17 = PpDevNodeRemoveFromTree((_QWORD *)v14);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        if ( v17 )
        {
          v18 = *(_QWORD *)(v14 + 48) == 0LL;
          *(_QWORD *)(v14 + 648) = v16;
          if ( !v18 )
          {
            PiPnpRtlBeginOperation(&P);
            v23 = MEMORY[0xFFFFF78000000014];
            PnpSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(v14 + 48),
              1,
              0LL,
              0LL,
              (__int64)&DEVPKEY_Device_LastRemovalDate,
              16,
              (__int64)&v23,
              8u,
              0);
            PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v19, *(_QWORD *)(v14 + 48), 1);
            PnpSetDeviceInstanceRemovalEvent(v14);
            if ( P )
            {
              PiPnpRtlEndOperation((PVOID **)P);
              P = 0LL;
            }
          }
          if ( *(_DWORD *)(v14 + 300) == 790 )
            IopRemoveCurrentRelationFromList((_QWORD *)a2, (__int64)v8, &v21);
          ObfDereferenceObject(v8);
        }
        v7 = v22;
        v6 = v21;
      }
    }
  }
  ExConvertExclusiveToSharedLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
}
