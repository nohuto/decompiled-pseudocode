/*
 * XREFs of IopLoadUnloadDriver @ 0x1409C7700
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1403F2590 (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriverImage @ 0x1404E691C (IopLoadDriverImage.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     IopInterlockedRemoveHeadList @ 0x1404AB360 (IopInterlockedRemoveHeadList.c)
 *     VfIsVerifierEnabled @ 0x1404BC290 (VfIsVerifierEnabled.c)
 *     VfDriverProcessUnload @ 0x14061105C (VfDriverProcessUnload.c)
 *     DifIsPluginRunningWithoutReboot @ 0x1406188DC (DifIsPluginRunningWithoutReboot.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

LONG __fastcall IopLoadUnloadDriver(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  UNICODE_STRING *v6; // rax
  NTSTATUS Driver; // ebx
  PVOID *v9; // rax
  __int64 v10; // r9
  PVOID *v11; // rsi
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+28h] BYREF

  v5 = *(_QWORD *)(a1 + 56);
  KeyHandle = 0LL;
  if ( v5 )
  {
    guard_dispatch_icall_no_overrides(v5, a2, a3, a4);
    if ( (unsigned int)VfIsVerifierEnabled() || DifIsPluginRunningWithoutReboot() )
      VfDriverProcessUnload(*(_QWORD *)(a1 + 56));
    Driver = 0;
  }
  else
  {
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = 0LL;
    v6 = *(UNICODE_STRING **)(a1 + 64);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = v6;
    Driver = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( Driver >= 0 )
    {
      Driver = IopLoadDriver(KeyHandle);
      if ( Driver == -1073740955 )
      {
        Driver = 0;
      }
      else if ( Driver == -1073740914 )
      {
        Driver = -1073741772;
      }
      if ( IopInitSystemCompletedEnoughForReInitRoutines )
      {
        while ( 1 )
        {
          v9 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopDriverReinitializeQueueHead);
          v11 = v9;
          if ( !v9 )
            break;
          ++*(_DWORD *)(*((_QWORD *)v9[2] + 6) + 16LL);
          *((_DWORD *)v9[2] + 4) &= ~8u;
          guard_dispatch_icall_no_overrides(v9[2], v9[4], *(unsigned int *)(*((_QWORD *)v9[2] + 6) + 16LL), v10);
          ObfDereferenceObject(v11[2]);
          ExFreePoolWithTag(v11, 0);
        }
      }
    }
  }
  *(_DWORD *)(a1 + 72) = Driver;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
