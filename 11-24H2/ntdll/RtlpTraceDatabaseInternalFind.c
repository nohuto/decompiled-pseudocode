/*
 * XREFs of RtlpTraceDatabaseInternalFind @ 0x180146ACC
 * Callers:
 *     RtlTraceDatabaseFind @ 0x180146790 (RtlTraceDatabaseFind.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x18014691C (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall RtlpTraceDatabaseInternalFind(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v8; // eax
  __int64 i; // rdx
  unsigned int v10; // ecx
  _QWORD *v11; // r8

  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(a1 + 104))(a2, a3);
  ++*(_DWORD *)(a1 + 4LL * (v8 & 0xF) + 128);
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL * (v8 % *(_DWORD *)(a1 + 88))); i; i = *(_QWORD *)(i + 40) )
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
