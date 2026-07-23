/*
 * XREFs of MiFreeForkMaps @ 0x140AAB234
 * Callers:
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 * Callees:
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiFinishLastForkPageTable @ 0x1404A345C (MiFinishLastForkPageTable.c)
 */

void __fastcall MiFreeForkMaps(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  _QWORD *PteAddress; // rax
  ULONG_PTR v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 *v9; // rdi
  __int64 v10; // rsi

  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
  {
    PteAddress = (_QWORD *)MiGetPteAddress(v5);
    v7 = CLFS_LSN_NULL_EXT;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 192) )
      goto LABEL_7;
    v8 = *(_QWORD *)(a1 + 32);
    if ( !v8 )
      goto LABEL_7;
    PteAddress = (_QWORD *)MiGetPteAddress(v8);
  }
  *PteAddress = v7;
LABEL_7:
  v9 = (__int64 *)(a1 + 8);
  v10 = 3LL;
  do
  {
    if ( *v9 != -1 )
    {
      MiFinishLastForkPageTable(*(_KPROCESS **)a1, *v9, a3, a4);
      *v9 = -1LL;
    }
    ++v9;
    --v10;
  }
  while ( v10 );
}
