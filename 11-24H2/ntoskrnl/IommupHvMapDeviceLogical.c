/*
 * XREFs of IommupHvMapDeviceLogical @ 0x1403ADF14
 * Callers:
 *     HalpIommuDomainMapLogical @ 0x1403ADEBC (HalpIommuDomainMapLogical.c)
 * Callees:
 *     HvlDmaMapDeviceLogicalRange @ 0x1403ADFF0 (HvlDmaMapDeviceLogicalRange.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvMapDeviceLogical(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        ULONG_PTR a5)
{
  ULONG_PTR BugCheckParameter4; // rsi
  int v8; // eax
  __int64 v9; // r9
  unsigned int v10; // edi
  int v12; // eax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  if ( *(_BYTE *)(BugCheckParameter3 + 52) )
    return 3221225485LL;
  BugCheckParameter4 = a5;
  LODWORD(v13) = *(_DWORD *)(BugCheckParameter3 + 48);
  BYTE4(v13) = 0;
  if ( (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, char))qword_140FC1068 == HvlDmaMapDeviceLogicalRange )
    v8 = HvlDmaMapDeviceLogicalRange((unsigned int)&v13, a2, a5, a3, (__int64)a4, 0);
  else
    v8 = guard_dispatch_icall_no_overrides(&v13, a2, a5, a3);
  v10 = v8;
  if ( v8 < 0 )
  {
    v12 = guard_dispatch_icall_no_overrides(&v13, BugCheckParameter4, a4, v9);
    if ( v12 < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, v12, BugCheckParameter3, BugCheckParameter4);
    *a4 = 0LL;
  }
  return v10;
}
