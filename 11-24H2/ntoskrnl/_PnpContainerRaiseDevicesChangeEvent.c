/*
 * XREFs of _PnpContainerRaiseDevicesChangeEvent @ 0x140A7C6B0
 * Callers:
 *     _PnpObjectRaiseDevicesChangeEvent @ 0x140AAC718 (_PnpObjectRaiseDevicesChangeEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpContainerRaiseDevicesChangeEvent(__int64 a1, __int64 a2)
{
  DEVPROPKEY **v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax

  guard_dispatch_icall_no_overrides(a1, a2);
  v4 = off_14000C468;
  v5 = 3LL;
  do
  {
    result = guard_dispatch_icall_no_overrides(a1, a2);
    ++v4;
    --v5;
  }
  while ( v5 );
  return result;
}
