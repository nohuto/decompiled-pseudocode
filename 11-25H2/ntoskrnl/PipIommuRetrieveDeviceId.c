/*
 * XREFs of PipIommuRetrieveDeviceId @ 0x140729E28
 * Callers:
 *     PiIommuAllocateExtension @ 0x140729B24 (PiIommuAllocateExtension.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IidValidateDeviceId @ 0x140807244 (IidValidateDeviceId.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipIommuRetrieveDeviceId(ULONG_PTR BugCheckParameter2, _QWORD *a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax

  if ( *(_QWORD *)(BugCheckParameter2 + 64) )
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter2 + 8));
    v3 = -1073741823;
  }
  else
  {
    v3 = -1073741637;
  }
  result = v3;
  *a2 = 0LL;
  return result;
}
