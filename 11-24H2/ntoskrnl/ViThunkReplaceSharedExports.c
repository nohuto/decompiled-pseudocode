/*
 * XREFs of ViThunkReplaceSharedExports @ 0x140B99D70
 * Callers:
 *     VfThunkApplyThunksCurrentSession @ 0x140B991AC (VfThunkApplyThunksCurrentSession.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x14066D618 (MmReplaceImportEntry.c)
 */

void __fastcall ViThunkReplaceSharedExports(ULONG_PTR a1, ULONG_PTR *a2, unsigned int a3)
{
  ULONG_PTR *v3; // rbx
  __int64 v5; // rdi
  ULONG_PTR v6; // rax
  int v7; // ecx
  ULONG_PTR v8; // r8

  if ( a2 )
  {
    v3 = a2;
    if ( a3 )
    {
      v5 = a3;
      do
      {
        if ( *v3 )
        {
          v6 = v3[2];
          if ( v6 )
          {
            v7 = *(_DWORD *)(v6 + 32);
            if ( (v7 & 1) != 0 )
            {
              if ( (v7 & 4) != 0 )
                v8 = *(_QWORD *)(v6 + 8);
              else
                v8 = **(_QWORD **)(v6 + 40);
              if ( v8 )
                MmReplaceImportEntry(a1, *v3, v8);
            }
          }
        }
        v3 += 3;
        --v5;
      }
      while ( v5 );
    }
  }
}
