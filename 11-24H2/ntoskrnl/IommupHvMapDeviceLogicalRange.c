/*
 * XREFs of IommupHvMapDeviceLogicalRange @ 0x1403AC62C
 * Callers:
 *     HalpIommuDomainUnmapLogicalRange @ 0x1403AD858 (HalpIommuDomainUnmapLogicalRange.c)
 *     HalpIommuDomainMapLogicalRange @ 0x140553C24 (HalpIommuDomainMapLogicalRange.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvMapDeviceLogicalRange(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        ULONG_PTR a5)
{
  int v5; // eax
  ULONG_PTR BugCheckParameter4; // rbx
  int v8; // edi
  __int64 v9; // r9
  int v10; // eax
  int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+64h] [rbp+Ch]
  unsigned __int64 v14; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v5 = *(_DWORD *)(BugCheckParameter3 + 48);
  v13 = 0;
  BugCheckParameter4 = a5;
  v12 = v5;
  v14 = (unsigned __int64)(a4 + 4095) >> 12;
  v15 = a3 >> 12;
  v8 = guard_dispatch_icall_no_overrides(&v12, a2, a5, &v15);
  if ( v8 < 0 )
  {
    v10 = guard_dispatch_icall_no_overrides(&v12, BugCheckParameter4, &v14, v9);
    if ( v10 < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, v10, BugCheckParameter3, BugCheckParameter4);
  }
  return (unsigned int)v8;
}
