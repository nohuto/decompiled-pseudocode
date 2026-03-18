/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x1403FFF00
 * Callers:
 *     PnpActivatingDeviceNodeFromThreadV1 @ 0x140732FE0 (PnpActivatingDeviceNodeFromThreadV1.c)
 *     PiDmLookupObject @ 0x1408B5470 (PiDmLookupObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B9D40 (PiPnpRtlObjectEventWorker.c)
 *     PiSwFindBusRelations @ 0x1408BAF68 (PiSwFindBusRelations.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BDDF0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiGetRelatedDevice @ 0x1408BEE58 (PiGetRelatedDevice.c)
 *     PiDmGetObject @ 0x1408CBB70 (PiDmGetObject.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CE6A0 (PiPnpRtlObjectActionCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CFC60 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408D0350 (PiDmObjectGetCachedObjectProperty.c)
 *     PiControlGetSetDeviceStatus @ 0x1408D1350 (PiControlGetSetDeviceStatus.c)
 *     PiDqQueryApplyObjectEvent @ 0x1408D327C (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryIsObjectInResultSet @ 0x1408D3F10 (PiDqQueryIsObjectInResultSet.c)
 *     PiUpdateDriverDBCache @ 0x1409C5084 (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x1409C7CE8 (PiLookupInDDBCache.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409E2728 (IopCleanupFileObjectIosbRange.c)
 *     PiSwStopDestroy @ 0x140A102F4 (PiSwStopDestroy.c)
 *     PiSwFindSwDevice @ 0x140A11150 (PiSwFindSwDevice.c)
 *     SshpCacheLookupBlocker @ 0x140A2537C (SshpCacheLookupBlocker.c)
 *     PiDcHandleDeviceEvent @ 0x140A424AC (PiDcHandleDeviceEvent.c)
 *     PopPowerRequestTableLookupEntry @ 0x140A60F5C (PopPowerRequestTableLookupEntry.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140AB7798 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PiDmCompareObjects @ 0x14099F010 (PiDmCompareObjects.c)
 *     PnpCompareInstancePath @ 0x1409AB010 (PnpCompareInstancePath.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1409FF8B0 (PiPnpRtlObjectEventCompareObjects.c)
 */

PVOID __stdcall RtlLookupElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  __int64 v2; // r9
  void *v3; // rsi
  _RTL_BALANCED_LINKS *i; // rbx
  _RTL_GENERIC_COMPARE_RESULTS (__fastcall *CompareRoutine)(_RTL_AVL_TABLE *, void *, void *); // rax
  _RTL_BALANCED_LINKS *v8; // r8
  RTL_GENERIC_COMPARE_RESULTS v9; // eax
  int v10; // eax
  _RTL_BALANCED_LINKS *v11; // rbx

  v3 = 0LL;
  i = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = i->LeftChild )
    {
      while ( 1 )
      {
        CompareRoutine = Table->CompareRoutine;
        v8 = i + 1;
        if ( (char *)CompareRoutine == (char *)PiDmCompareObjects )
        {
          v9 = PiDmCompareObjects(Table, Buffer, v8);
        }
        else if ( (char *)CompareRoutine == (char *)PnpCompareInstancePath )
        {
          v9 = (unsigned int)PnpCompareInstancePath(Table, Buffer, v8);
        }
        else
        {
          v9 = (char *)CompareRoutine == (char *)PiPnpRtlObjectEventCompareObjects
             ? PiPnpRtlObjectEventCompareObjects(Table, Buffer, v8)
             : (unsigned int)guard_dispatch_icall_no_overrides(Table, Buffer, v8, v2);
        }
        if ( v9 == GenericLessThan )
          break;
        if ( v9 != GenericGreaterThan )
        {
          v10 = 1;
          goto LABEL_14;
        }
        if ( !i->RightChild )
        {
          v10 = 3;
          goto LABEL_14;
        }
        i = i->RightChild;
      }
      if ( !i->LeftChild )
        break;
    }
    v10 = 2;
  }
  else
  {
    v10 = 0;
  }
LABEL_14:
  v11 = i + 1;
  if ( v10 == 1 )
    return v11;
  return v3;
}
