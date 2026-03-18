/*
 * XREFs of HalpIommuDomainUnmapIdentityRange @ 0x1403AC118
 * Callers:
 *     IommuUnmapIdentityRangeEx @ 0x1403AD580 (IommuUnmapIdentityRangeEx.c)
 *     IommuUnmapIdentityRange @ 0x140567200 (IommuUnmapIdentityRange.c)
 * Callees:
 *     HalpIommuUnmapLogicalRange @ 0x1403AC6FC (HalpIommuUnmapLogicalRange.c)
 *     HalpIommuFlushDomainTbs @ 0x1403AC8F8 (HalpIommuFlushDomainTbs.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuDomainUnmapIdentityRange(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 i; // rax
  __int64 v11; // rbp
  unsigned __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // r15
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  result = 0LL;
  if ( !HalpHvIommu || *(_BYTE *)(BugCheckParameter3 + 52) )
  {
    v8 = 0LL;
    if ( a3 )
    {
      do
      {
        v9 = v8 + 1;
        for ( i = *(_QWORD *)(a2 + 8 * v8); v9 < a3 && *(_QWORD *)(a2 + 8 * v9) == i + 1; i = *(_QWORD *)(a2 + 8 * v9++) )
          ;
        v11 = *(_QWORD *)(a2 + 8 * v8) << 12;
        v12 = v9 - v8;
        v13 = *(_QWORD *)(BugCheckParameter3 + 40);
        v15[0] = v12;
        v14 = v12 << 12;
        v16 = v14;
        result = HalpIommuUnmapLogicalRange(v13, &v16, v11);
        if ( (int)result < 0 )
          break;
        result = HalpIommuFlushDomainTbs(BugCheckParameter3, v11, v14);
        if ( (int)result < 0 )
          break;
        v8 = v9;
      }
      while ( v9 < a3 );
    }
  }
  else
  {
    v16 = 0LL;
    LODWORD(v16) = *(_DWORD *)(BugCheckParameter3 + 48);
    v15[0] = a3;
    result = guard_dispatch_icall_no_overrides(&v16, a2, v15, a4);
    if ( (int)result < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, (int)result, BugCheckParameter3, 0LL);
  }
  return result;
}
