/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x1403FA3F0
 * Callers:
 *     PiDmLookupObject @ 0x1408B2D60 (PiDmLookupObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B76F0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwFindBusRelations @ 0x1408B8918 (PiSwFindBusRelations.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiGetRelatedDevice @ 0x1408BC818 (PiGetRelatedDevice.c)
 *     PiDmGetObject @ 0x1408C95A0 (PiDmGetObject.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CD650 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408CDD40 (PiDmObjectGetCachedObjectProperty.c)
 *     PiControlGetSetDeviceStatus @ 0x1408CED40 (PiControlGetSetDeviceStatus.c)
 *     PiDqQueryApplyObjectEvent @ 0x1408D0C6C (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryIsObjectInResultSet @ 0x1408D1900 (PiDqQueryIsObjectInResultSet.c)
 *     PiLookupInDDBCache @ 0x1409B8B68 (PiLookupInDDBCache.c)
 *     PiSwStopDestroy @ 0x1409BE704 (PiSwStopDestroy.c)
 *     PiSwFindSwDevice @ 0x1409BF560 (PiSwFindSwDevice.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409DC4D8 (IopCleanupFileObjectIosbRange.c)
 *     SshpCacheLookupBlocker @ 0x140A1936C (SshpCacheLookupBlocker.c)
 *     PiDcHandleDeviceEvent @ 0x140A37CEC (PiDcHandleDeviceEvent.c)
 *     PopPowerRequestTableLookupEntry @ 0x140A5963C (PopPowerRequestTableLookupEntry.c)
 *     PiUpdateDriverDBCache @ 0x140A6C434 (PiUpdateDriverDBCache.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140AB1B4C (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PiDmCompareObjects @ 0x140987790 (PiDmCompareObjects.c)
 *     PnpCompareInstancePath @ 0x140994780 (PnpCompareInstancePath.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1409F8800 (PiPnpRtlObjectEventCompareObjects.c)
 */

PVOID __stdcall RtlLookupElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  void *v2; // rsi
  _RTL_BALANCED_LINKS *i; // rbx
  RTL_GENERIC_COMPARE_RESULTS (__cdecl *CompareRoutine)(_RTL_AVL_TABLE *, PVOID, PVOID); // rax
  _RTL_BALANCED_LINKS *v7; // r8
  RTL_GENERIC_COMPARE_RESULTS v8; // eax
  int v9; // eax
  _RTL_BALANCED_LINKS *v10; // rbx

  v2 = 0LL;
  i = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = i->LeftChild )
    {
      while ( 1 )
      {
        CompareRoutine = (RTL_GENERIC_COMPARE_RESULTS (__cdecl *)(_RTL_AVL_TABLE *, PVOID, PVOID))Table->CompareRoutine;
        v7 = i + 1;
        if ( CompareRoutine == PiDmCompareObjects )
        {
          v8 = PiDmCompareObjects(Table, Buffer, v7);
        }
        else if ( (char *)CompareRoutine == (char *)PnpCompareInstancePath )
        {
          v8 = (unsigned int)PnpCompareInstancePath(Table, Buffer, v7);
        }
        else
        {
          v8 = CompareRoutine == PiPnpRtlObjectEventCompareObjects
             ? PiPnpRtlObjectEventCompareObjects(Table, Buffer, v7)
             : (unsigned int)guard_dispatch_icall_no_overrides(Table, Buffer);
        }
        if ( v8 == GenericLessThan )
          break;
        if ( v8 != GenericGreaterThan )
        {
          v9 = 1;
          goto LABEL_14;
        }
        if ( !i->RightChild )
        {
          v9 = 3;
          goto LABEL_14;
        }
        i = i->RightChild;
      }
      if ( !i->LeftChild )
        break;
    }
    v9 = 2;
  }
  else
  {
    v9 = 0;
  }
LABEL_14:
  v10 = i + 1;
  if ( v9 == 1 )
    return v10;
  return v2;
}
