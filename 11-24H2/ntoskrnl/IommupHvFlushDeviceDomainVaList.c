/*
 * XREFs of IommupHvFlushDeviceDomainVaList @ 0x140563A84
 * Callers:
 *     IommuFlushDomainVaList @ 0x1407018D0 (IommuFlushDomainVaList.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvFlushDeviceDomainVaList(int a1, __int64 a2)
{
  __int64 v3; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( !(_BYTE)a2 )
    return 3221225659LL;
  LODWORD(v3) = a1;
  BYTE4(v3) = a2;
  return guard_dispatch_icall_no_overrides(&v3, a2);
}
