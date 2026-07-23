/*
 * XREFs of HalpIommuDomainUnmapIdentityRange @ 0x14039A828
 * Callers:
 *     IommuUnmapIdentityRangeEx @ 0x14039BD90 (IommuUnmapIdentityRangeEx.c)
 *     IommuUnmapIdentityRange @ 0x140564D90 (IommuUnmapIdentityRange.c)
 * Callees:
 *     HalpIommuUnmapLogicalRange @ 0x14039AF08 (HalpIommuUnmapLogicalRange.c)
 *     HalpIommuFlushDomainTbs @ 0x14039B104 (HalpIommuFlushDomainTbs.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuDomainUnmapIdentityRange(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 i; // rax
  __int64 v10; // rbp
  unsigned __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  result = 0LL;
  if ( !HalpHvIommu || *(_BYTE *)(BugCheckParameter3 + 52) )
  {
    v7 = 0LL;
    if ( a3 )
    {
      do
      {
        v8 = v7 + 1;
        for ( i = *(_QWORD *)(a2 + 8 * v7); v8 < a3 && *(_QWORD *)(a2 + 8 * v8) == i + 1; i = *(_QWORD *)(a2 + 8 * v8++) )
          ;
        v10 = *(_QWORD *)(a2 + 8 * v7) << 12;
        v11 = v8 - v7;
        v12 = *(_QWORD *)(BugCheckParameter3 + 40);
        v13 = v11 << 12;
        v14 = v13;
        result = HalpIommuUnmapLogicalRange(v12, &v14, v10);
        if ( (int)result < 0 )
          break;
        result = HalpIommuFlushDomainTbs(BugCheckParameter3, v10, v13);
        if ( (int)result < 0 )
          break;
        v7 = v8;
      }
      while ( v8 < a3 );
    }
  }
  else
  {
    v14 = 0LL;
    LODWORD(v14) = *(_DWORD *)(BugCheckParameter3 + 48);
    result = guard_dispatch_icall_no_overrides(&v14, a2);
    if ( (int)result < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, (int)result, BugCheckParameter3, 0LL);
  }
  return result;
}
