/*
 * XREFs of MiRebaseDynamicRelocationRegions @ 0x140C43D10
 * Callers:
 *     MiInitializeSystemVa @ 0x140C555A8 (MiInitializeSystemVa.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     KeFlushEntireTb @ 0x1405B89A0 (KeFlushEntireTb.c)
 *     MiPrepareScpFixupsForNtAndHal @ 0x140C447F4 (MiPrepareScpFixupsForNtAndHal.c)
 *     MiApplyDynamicRelocations @ 0x140C4796C (MiApplyDynamicRelocations.c)
 */

__int64 __fastcall MiRebaseDynamicRelocationRegions(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rbp
  unsigned __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rbx
  int v9; // esi
  unsigned __int64 v10; // rbx
  unsigned __int64 i; // r13
  __int64 result; // rax

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0xFFFFF68000000000uLL;
  v4 = qword_140E38928;
  v5 = qword_140E38868[0];
  if ( (MiFlags & 0x4000) != 0 || qword_140E38928 != 0xFFFFF68000000000uLL )
  {
    v6 = ((unsigned __int64)qword_140E38928 >> 39) & 0x1FF;
    v7 = (_QWORD *)(8 * v6 - 0x90482413000LL);
    if ( 8 * v6 != 3944 )
    {
      v8 = MEMORY[0xFFFFF6FB7DBEDF68];
      if ( _bittest64(&MiFlags, 0x24u)
        && (MEMORY[0xFFFFF6FB7DBEDF68] & 0x20) == 0
        && (unsigned __int64)v7 >= 0xFFFFF6C000000000uLL )
      {
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v7, MEMORY[0xFFFFF6FB7DBEDF68], 128);
      }
      *v7 = v8;
      if ( (MiFlags & 0x100000) == 0 )
        MEMORY[0xFFFFF6FB7DBEDF68] = CLFS_LSN_NULL_EXT;
      KeFlushEntireTb();
    }
    v9 = 0;
    v10 = v4;
    for ( i = 39LL; ; i -= 9LL )
    {
      MiApplyDynamicRelocations(*(PVOID *)(v2 + 48), *(unsigned int *)(v2 + 64));
      if ( i >= 0xC )
        MiApplyDynamicRelocations(*(PVOID *)(v2 + 48), *(unsigned int *)(v2 + 64));
      if ( (unsigned int)++v9 > 4 )
        break;
      v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = v4 + ((v10 >> 9) & 0x7FFFFFFFF8LL);
    }
    v1 = a1;
  }
  if ( (MiFlags & 0x4000) != 0 || v5 != 0xFFFFDE0000000000uLL )
    MiApplyDynamicRelocations(*(PVOID *)(v2 + 48), *(unsigned int *)(v2 + 64));
  result = MiPrepareScpFixupsForNtAndHal(v1);
  MmPteBase = v4;
  qword_140E013A0 = v4;
  return result;
}
