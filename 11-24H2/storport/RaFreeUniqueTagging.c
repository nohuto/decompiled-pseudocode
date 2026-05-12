/*
 * XREFs of RaFreeUniqueTagging @ 0x1401B1DC4
 * Callers:
 *     RaidDeleteAdapter @ 0x1400437A8 (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall RaFreeUniqueTagging(__int64 a1)
{
  __int64 i; // rdi
  void *v3; // rcx

  *(_BYTE *)(a1 + 111) &= ~4u;
  if ( *(_QWORD *)(a1 + 6168) )
  {
    for ( i = 0LL; (unsigned int)i < g_MaximumProcessorCount; i = (unsigned int)(i + 1) )
    {
      v3 = *(void **)(*(_QWORD *)(a1 + 6168) + 8 * i);
      if ( v3 )
      {
        ExFreePoolWithTag(v3, 0x4D546152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 6168) + 8 * i) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 6168), 0x4D546152u);
    *(_QWORD *)(a1 + 6168) = 0LL;
  }
}
