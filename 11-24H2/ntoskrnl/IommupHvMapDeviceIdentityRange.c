/*
 * XREFs of IommupHvMapDeviceIdentityRange @ 0x1403AC384
 * Callers:
 *     HalpIommuDomainMapIdentityRange @ 0x1403AC308 (HalpIommuDomainMapIdentityRange.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvMapDeviceIdentityRange(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // esi
  __int64 v8; // r9
  int v10; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  if ( *(_BYTE *)(BugCheckParameter3 + 52) )
    return 3221225485LL;
  LODWORD(v11) = *(_DWORD *)(BugCheckParameter3 + 48);
  BYTE4(v11) = 0;
  v7 = guard_dispatch_icall_no_overrides(&v11, a2, a3, a4);
  if ( v7 < 0 )
  {
    v10 = guard_dispatch_icall_no_overrides(&v11, a3, a4, v8);
    if ( v10 < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, v10, BugCheckParameter3, 0LL);
    *a4 = 0LL;
  }
  return (unsigned int)v7;
}
