/*
 * XREFs of IommupHvFlushDeviceDomainVaList @ 0x140565D80
 * Callers:
 *     IommuFlushDomainVaList @ 0x140703D10 (IommuFlushDomainVaList.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvFlushDeviceDomainVaList(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  if ( !(_BYTE)a2 )
    return 3221225659LL;
  LODWORD(v5) = a1;
  BYTE4(v5) = a2;
  return guard_dispatch_icall_no_overrides(&v5, a2, a3, a4);
}
