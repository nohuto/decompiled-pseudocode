/*
 * XREFs of ArbBuildAssignmentOrdering @ 0x1407028FC
 * Callers:
 *     ArbInitializeArbiterInstance @ 0x140703174 (ArbInitializeArbiterInstance.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ArbAddOrdering @ 0x140702644 (ArbAddOrdering.c)
 *     ArbFreeOrderingList @ 0x140702FB8 (ArbFreeOrderingList.c)
 *     ArbInitializeOrderingList @ 0x1407034E4 (ArbInitializeOrderingList.c)
 *     ArbPruneOrdering @ 0x14070372C (ArbPruneOrdering.c)
 *     ArbpGetRegistryValue @ 0x1407045E4 (ArbpGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbBuildAssignmentOrdering(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS RegistryValue; // edi
  void *v4; // rcx
  void *v5; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-71h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-69h] BYREF
  __int128 v9; // [rsp+58h] [rbp-61h] BYREF
  __int64 v10; // [rsp+68h] [rbp-51h]
  __int64 v11; // [rsp+70h] [rbp-49h]
  __int64 v12; // [rsp+78h] [rbp-41h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-39h] BYREF
  __int128 v14; // [rsp+B0h] [rbp-9h]
  __int128 v15; // [rsp+C0h] [rbp+7h]

  KeyHandle = 0LL;
  Handle = 0LL;
  v9 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v14 = 0LL;
  v15 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  ArbFreeOrderingList(a1 + 56);
  ArbFreeOrderingList(a1 + 72);
  RegistryValue = ArbInitializeOrderingList(a1 + 56);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = ArbInitializeOrderingList(a1 + 72);
    if ( RegistryValue >= 0 )
    {
      LODWORD(v9) = 7733366;
      *((_QWORD *)&v9 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      RegistryValue = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( RegistryValue >= 0 )
      {
        LODWORD(v9) = 1966110;
        *((_QWORD *)&v9 + 1) = L"AllocationOrder";
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        RegistryValue = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
        if ( RegistryValue >= 0 )
          RegistryValue = ArbpGetRegistryValue(Handle);
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  v4 = *(void **)(a1 + 64);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_DWORD *)(a1 + 56) = 0;
  }
  v5 = *(void **)(a1 + 80);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_DWORD *)(a1 + 72) = 0;
  }
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)RegistryValue;
}
