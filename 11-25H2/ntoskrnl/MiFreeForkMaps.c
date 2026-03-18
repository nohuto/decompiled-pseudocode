/*
 * XREFs of MiFreeForkMaps @ 0x140AAB334
 * Callers:
 *     MiCloneVads @ 0x1402CC944 (MiCloneVads.c)
 * Callees:
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MiFinishLastForkPageTable @ 0x1404AEE2C (MiFinishLastForkPageTable.c)
 */

void __fastcall MiFreeForkMaps(__int64 a1)
{
  unsigned __int64 v2; // rcx
  _QWORD *PteAddress; // rax
  ULONG_PTR v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 *v6; // rdi
  __int64 v7; // rsi

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    PteAddress = (_QWORD *)MiGetPteAddress(v2);
    v4 = CLFS_LSN_NULL_EXT;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 192) )
      goto LABEL_7;
    v5 = *(_QWORD *)(a1 + 32);
    if ( !v5 )
      goto LABEL_7;
    PteAddress = (_QWORD *)MiGetPteAddress(v5);
  }
  *PteAddress = v4;
LABEL_7:
  v6 = (__int64 *)(a1 + 8);
  v7 = 3LL;
  do
  {
    if ( *v6 != -1 )
    {
      MiFinishLastForkPageTable(*(_KPROCESS **)a1, *v6);
      *v6 = -1LL;
    }
    ++v6;
    --v7;
  }
  while ( v7 );
}
