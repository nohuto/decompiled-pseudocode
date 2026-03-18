/*
 * XREFs of PfpPrefetchVolumesCleanup @ 0x1408EB2A0
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1408EAE18 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpOpenHandleClose @ 0x1408C2D04 (PfpOpenHandleClose.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PfpPrefetchVolumesCleanup(__int64 a1)
{
  unsigned int v2; // esi
  __int64 *v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 v5; // rbp
  __int64 v6; // rcx

  if ( *(_QWORD *)(a1 + 16) )
  {
    v2 = 0;
    if ( *(_DWORD *)(*(_QWORD *)a1 + 8LL) )
    {
      v3 = (__int64 *)(a1 + 40);
      do
      {
        v4 = *(_QWORD *)(a1 + 16);
        v5 = (unsigned __int64)v2 << 6;
        if ( _bittest64((const signed __int64 *)(v4 + v5 + 56), 0x22u) )
        {
          v3 = (__int64 *)(a1 + 40);
          PfpOpenHandleClose(v5 + v4 + 32, *(_QWORD *)(a1 + 40));
        }
        v6 = v5 + *(_QWORD *)(a1 + 16);
        if ( _bittest64((const signed __int64 *)(v6 + 24), 0x22u) )
          PfpOpenHandleClose(v6, *v3);
        else
          v3 = (__int64 *)(a1 + 40);
        ++v2;
      }
      while ( v2 < *(_DWORD *)(*(_QWORD *)a1 + 8LL) );
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
