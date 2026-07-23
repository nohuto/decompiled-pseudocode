/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x1403F7C80
 * Callers:
 *     PnpActivatingDeviceNodeFromThread @ 0x140726DD0 (PnpActivatingDeviceNodeFromThread.c)
 *     PiSwFindBusRelations @ 0x1408355B4 (PiSwFindBusRelations.c)
 *     PiPnpRtlObjectEventWorker @ 0x140836F20 (PiPnpRtlObjectEventWorker.c)
 *     PiDqQueryApplyObjectEvent @ 0x14083856C (PiDqQueryApplyObjectEvent.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CBF70 (PiPnpRtlObjectActionCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CD7B0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408CDEA0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiControlGetSetDeviceStatus @ 0x1408CEC60 (PiControlGetSetDeviceStatus.c)
 *     PiDmGetObject @ 0x1408D1680 (PiDmGetObject.c)
 *     PiGetRelatedDevice @ 0x1409349F8 (PiGetRelatedDevice.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140934F70 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiDmLookupObject @ 0x140968F10 (PiDmLookupObject.c)
 *     PiSwFindSwDevice @ 0x1409A1B58 (PiSwFindSwDevice.c)
 *     PiLookupInDDBCache @ 0x1409AF4C4 (PiLookupInDDBCache.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409E2E48 (IopCleanupFileObjectIosbRange.c)
 *     SshpCacheLookupBlocker @ 0x140A1A09C (SshpCacheLookupBlocker.c)
 *     PiDcHandleDeviceEvent @ 0x140A45E74 (PiDcHandleDeviceEvent.c)
 *     PopPowerRequestTableLookupEntry @ 0x140A5F1B4 (PopPowerRequestTableLookupEntry.c)
 *     PiUpdateDriverDBCache @ 0x140A706C4 (PiUpdateDriverDBCache.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140AB2BEC (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PiDmCompareObjects @ 0x14099C640 (PiDmCompareObjects.c)
 *     PnpCompareInstancePath @ 0x1409B9560 (PnpCompareInstancePath.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x140A01800 (PiPnpRtlObjectEventCompareObjects.c)
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
