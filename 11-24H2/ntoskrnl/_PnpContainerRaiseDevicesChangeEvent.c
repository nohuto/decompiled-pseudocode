/*
 * XREFs of _PnpContainerRaiseDevicesChangeEvent @ 0x140A81DB8
 * Callers:
 *     _PnpObjectRaiseDevicesChangeEvent @ 0x140AB17A8 (_PnpObjectRaiseDevicesChangeEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpContainerRaiseDevicesChangeEvent(__int64 a1, __int64 a2)
{
  DEVPROPKEY **v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax

  guard_dispatch_icall_no_overrides(a1, a2, 5LL, 5LL);
  v4 = off_14000C250;
  v5 = 3LL;
  do
  {
    result = guard_dispatch_icall_no_overrides(a1, a2, 5LL, 4LL);
    ++v4;
    --v5;
  }
  while ( v5 );
  return result;
}
