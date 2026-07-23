/*
 * XREFs of IommupHvMapDeviceIdentityRange @ 0x14039AB90
 * Callers:
 *     HalpIommuDomainMapIdentityRange @ 0x14039AB14 (HalpIommuDomainMapIdentityRange.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvMapDeviceIdentityRange(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // esi
  int v9; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( *(_BYTE *)(BugCheckParameter3 + 52) )
    return 3221225485LL;
  LODWORD(v10) = *(_DWORD *)(BugCheckParameter3 + 48);
  BYTE4(v10) = 0;
  v7 = guard_dispatch_icall_no_overrides(&v10, a2);
  if ( v7 < 0 )
  {
    v9 = guard_dispatch_icall_no_overrides(&v10, a3);
    if ( v9 < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, v9, BugCheckParameter3, 0LL);
    *a4 = 0LL;
  }
  return (unsigned int)v7;
}
