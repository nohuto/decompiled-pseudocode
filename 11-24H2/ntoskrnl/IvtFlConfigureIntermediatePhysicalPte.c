/*
 * XREFs of IvtFlConfigureIntermediatePhysicalPte @ 0x140571780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall IvtFlConfigureIntermediatePhysicalPte(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = *a1;
  if ( *a1 )
    return 0;
  if ( !HalpIommuPageTableCacheCoherent )
    v3 = 96LL;
  *a1 = a3 & 0xFFFFFFFFFF000LL ^ (v3 & 0x7FF0000000000FF8LL | 0x8000000000000007uLL) | 1;
  return 1;
}
