/*
 * XREFs of IommupHvMapDeviceLogical @ 0x14039C724
 * Callers:
 *     HalpIommuDomainMapLogical @ 0x14039C6CC (HalpIommuDomainMapLogical.c)
 * Callees:
 *     HvlDmaMapDeviceLogicalRange @ 0x14039C800 (HvlDmaMapDeviceLogicalRange.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvMapDeviceLogical(ULONG_PTR BugCheckParameter3, __int64 a2, int a3, _QWORD *a4, ULONG_PTR a5)
{
  ULONG_PTR BugCheckParameter4; // rsi
  int v8; // eax
  unsigned int v9; // edi
  int v11; // eax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  if ( *(_BYTE *)(BugCheckParameter3 + 52) )
    return 3221225485LL;
  BugCheckParameter4 = a5;
  LODWORD(v12) = *(_DWORD *)(BugCheckParameter3 + 48);
  BYTE4(v12) = 0;
  if ( (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, char))qword_140FC12C8 == HvlDmaMapDeviceLogicalRange )
    v8 = HvlDmaMapDeviceLogicalRange((unsigned int)&v12, a2, a5, a3, (__int64)a4, 0);
  else
    v8 = guard_dispatch_icall_no_overrides(&v12, a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = guard_dispatch_icall_no_overrides(&v12, BugCheckParameter4);
    if ( v11 < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, v11, BugCheckParameter3, BugCheckParameter4);
    *a4 = 0LL;
  }
  return v9;
}
