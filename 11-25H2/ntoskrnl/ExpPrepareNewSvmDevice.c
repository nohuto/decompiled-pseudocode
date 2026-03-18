/*
 * XREFs of ExpPrepareNewSvmDevice @ 0x14064CE98
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x14064D138 (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpPrepareNewSvmDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int v5; // eax
  unsigned int v6; // ebx

  *a5 = 0LL;
  v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a3 + 8));
  v6 = v5;
  if ( v5 == -1073741789 || v5 >= 0 )
    return (unsigned int)-1073741823;
  return v6;
}
