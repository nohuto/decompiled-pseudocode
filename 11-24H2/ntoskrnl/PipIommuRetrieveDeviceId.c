/*
 * XREFs of PipIommuRetrieveDeviceId @ 0x140733FE8
 * Callers:
 *     PiIommuAllocateExtension @ 0x140733CE4 (PiIommuAllocateExtension.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IidValidateDeviceId @ 0x140817884 (IidValidateDeviceId.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipIommuRetrieveDeviceId(ULONG_PTR BugCheckParameter2, _QWORD *a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax

  if ( *(_QWORD *)(BugCheckParameter2 + 64) )
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter2 + 8), 0LL);
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
