/*
 * XREFs of IopLoadUnloadDriver @ 0x140A66EE0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1403E62B0 (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriverImage @ 0x1404DD018 (IopLoadDriverImage.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IopInterlockedRemoveHeadList @ 0x1404A5984 (IopInterlockedRemoveHeadList.c)
 *     VfIsVerifierEnabled @ 0x1404B71A0 (VfIsVerifierEnabled.c)
 *     VfDriverProcessUnload @ 0x14060F61C (VfDriverProcessUnload.c)
 *     DifIsPluginRunningWithoutReboot @ 0x140616E9C (DifIsPluginRunningWithoutReboot.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

LONG __fastcall IopLoadUnloadDriver(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  UNICODE_STRING *v4; // rax
  int v5; // ebx
  PVOID *v7; // rax
  PVOID *v8; // rsi
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  int v10; // [rsp+70h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+28h] BYREF

  v10 = 0;
  v3 = *(_QWORD *)(a1 + 56);
  KeyHandle = 0LL;
  if ( v3 )
  {
    guard_dispatch_icall_no_overrides(v3, a2);
    if ( (unsigned int)VfIsVerifierEnabled() || DifIsPluginRunningWithoutReboot() )
      VfDriverProcessUnload(*(_QWORD *)(a1 + 56));
    v5 = 0;
  }
  else
  {
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = 0LL;
    v4 = *(UNICODE_STRING **)(a1 + 64);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = v4;
    v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v5 >= 0 )
    {
      v5 = IopLoadDriver(KeyHandle, 1, 0, &v10);
      if ( v5 == -1073740955 )
      {
        v5 = v10;
      }
      else if ( v5 == -1073740914 )
      {
        v5 = -1073741772;
      }
      if ( IopInitSystemCompletedEnoughForReInitRoutines )
      {
        while ( 1 )
        {
          v7 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopDriverReinitializeQueueHead);
          v8 = v7;
          if ( !v7 )
            break;
          ++*(_DWORD *)(*((_QWORD *)v7[2] + 6) + 16LL);
          *((_DWORD *)v7[2] + 4) &= ~8u;
          guard_dispatch_icall_no_overrides(v7[2], v7[4]);
          ObfDereferenceObject(v8[2]);
          ExFreePoolWithTag(v8, 0);
        }
      }
    }
  }
  *(_DWORD *)(a1 + 72) = v5;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
