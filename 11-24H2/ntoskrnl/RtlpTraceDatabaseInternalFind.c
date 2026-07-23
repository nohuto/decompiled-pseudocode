/*
 * XREFs of RtlpTraceDatabaseInternalFind @ 0x1405EDD34
 * Callers:
 *     RtlTraceDatabaseFind @ 0x1405EDA30 (RtlTraceDatabaseFind.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1405EDB70 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall RtlpTraceDatabaseInternalFind(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v8; // eax
  __int64 i; // rdx
  unsigned int v10; // ecx
  _QWORD *v11; // r8

  v8 = guard_dispatch_icall_no_overrides(a2, a3);
  ++*(_DWORD *)(a1 + 4LL * (v8 & 0xF) + 152);
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (v8 % *(_DWORD *)(a1 + 112))); i; i = *(_QWORD *)(i + 40) )
  {
    if ( a2 == *(_DWORD *)(i + 8) )
    {
      v10 = 0;
      if ( a2 )
      {
        v11 = a3;
        do
        {
          if ( *(_QWORD *)((char *)v11 + *(_QWORD *)(i + 48) - (_QWORD)a3) != *v11 )
            break;
          ++v10;
          ++v11;
        }
        while ( v10 < a2 );
      }
      if ( v10 == a2 )
      {
        if ( a4 )
          *a4 = i;
        return 1;
      }
    }
  }
  if ( a4 )
    *a4 = 0LL;
  return 0;
}
