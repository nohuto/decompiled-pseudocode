/*
 * XREFs of IommupHvFlushDeviceDomainVaList @ 0x140563570
 * Callers:
 *     IommuFlushDomainVaList @ 0x1406F7E30 (IommuFlushDomainVaList.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvFlushDeviceDomainVaList(int a1, char a2)
{
  __int64 v3; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( !a2 )
    return 3221225659LL;
  LODWORD(v3) = a1;
  BYTE4(v3) = a2;
  return guard_dispatch_icall_no_overrides(&v3);
}
