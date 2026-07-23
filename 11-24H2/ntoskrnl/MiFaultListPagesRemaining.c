/*
 * XREFs of MiFaultListPagesRemaining @ 0x140406F80
 * Callers:
 *     MiComputeMaximumFaultCluster @ 0x140406D50 (MiComputeMaximumFaultCluster.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFaultListPagesRemaining(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // r8
  __int64 v3; // rdx
  unsigned __int64 v4; // r9
  unsigned __int64 *v5; // r8
  unsigned __int64 v6; // r10

  v1 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a1[2] & 1) == 0 || *(_BYTE *)v1 != 2 )
    return 1LL;
  v2 = *(_QWORD *)(v1 + 24);
  v3 = 1LL;
  if ( v2 < *(_QWORD *)(v1 + 16) )
  {
    v4 = *a1;
    v5 = (unsigned __int64 *)(*(_QWORD *)(v1 + 8) + 16 * v2);
    if ( *a1 >= *v5 )
    {
      v6 = v5[1];
      if ( v4 < v6 + *v5 )
        return ((v6 + (*v5 & 0xFFF) + 4095) >> 12)
             - (((v4 & 0xFFFFFFFFFFFFF000uLL) - (*v5 & 0xFFFFFFFFFFFFF000uLL)) >> 12);
    }
  }
  return v3;
}
