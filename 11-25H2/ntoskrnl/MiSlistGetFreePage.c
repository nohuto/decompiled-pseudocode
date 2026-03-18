/*
 * XREFs of MiSlistGetFreePage @ 0x14022AF60
 * Callers:
 *     MiGetPageSlist @ 0x14022AC58 (MiGetPageSlist.c)
 *     MiRemovePageAnyColor @ 0x14022B30C (MiRemovePageAnyColor.c)
 * Callees:
 *     MiArePageContentsZero @ 0x1404C9D90 (MiArePageContentsZero.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiSlistGetFreePage(__int64 a1, int a2)
{
  unsigned __int64 v4; // rbp
  int i; // esi
  __int64 v6; // rbx
  PSLIST_ENTRY v7; // rdi
  _SLIST_ENTRY *Next; // rcx
  __int64 v9; // rax
  unsigned __int64 v11; // rcx
  volatile signed __int32 *v12; // r8
  unsigned int v13; // eax
  __int64 CurrentIrql; // rcx
  unsigned __int64 v15; // r9
  char v16; // r8
  volatile signed __int32 *v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned __int64 v20; // rdx
  int v21; // ebp
  unsigned __int64 v22; // rcx
  unsigned __int8 v23; // [rsp+60h] [rbp+8h]
  __int64 v24; // [rsp+70h] [rbp+18h]

  v4 = (unsigned __int8)*(_DWORD *)(a1 + 28);
  for ( i = **(_DWORD **)(a1 + 16); ; i = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL) )
  {
    v6 = *(_QWORD *)a1 + 16LL * i;
    if ( !a2 && !_bittest64(*(const signed __int64 **)(v6 + 14856), v4) )
      goto LABEL_22;
    v24 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * i + 14944);
    v7 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v24 + 16 * v4));
    if ( v7 )
      goto LABEL_5;
    if ( *(_DWORD *)(a1 + 32) & 1 | ((*(_DWORD *)(a1 + 32) & 2) != 0) )
    {
      v23 = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      v23 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    }
    LOBYTE(v11) = 1;
    v12 = (volatile signed __int32 *)(*(_QWORD *)(v6 + 14856) + 4 * (v4 >> 5));
    if ( (v4 & 0x1F) + 1 <= 0x20 )
    {
      v13 = ~(1 << (v4 & 0x1F));
LABEL_16:
      _InterlockedAnd(v12, v13);
      goto LABEL_17;
    }
    if ( (v4 & 0x1F) == 0 )
      goto LABEL_31;
    _InterlockedAnd(v12, ~(((1 << (32 - (v4 & 0x1F))) - 1) << (v4 & 0x1F)));
    v11 = 1LL - (32 - (unsigned int)(v4 & 0x1F));
    ++v12;
    if ( v11 >= 0x20 )
    {
      v20 = v11 >> 5;
      v11 += -32LL * (v11 >> 5);
      do
      {
        *v12++ = 0;
        --v20;
      }
      while ( v20 );
    }
    if ( v11 )
    {
LABEL_31:
      v13 = -1 << v11;
      goto LABEL_16;
    }
LABEL_17:
    v7 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v24 + 16 * v4));
    if ( v7 )
      break;
    if ( v23 != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
      __writecr8(v23);
    }
LABEL_22:
    if ( i == *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL) )
      return 0LL;
  }
  LOBYTE(v15) = 1;
  v16 = v4;
  v17 = (volatile signed __int32 *)(*(_QWORD *)(v6 + 14856) + 4 * (v4 >> 5));
  v18 = v4 & 0x1F;
  if ( v18 + 1 <= 0x20 )
  {
    v19 = 1 << v18;
    goto LABEL_35;
  }
  if ( (v4 & 0x1F) == 0 )
    goto LABEL_41;
  v21 = v4 & 0x1F;
  _InterlockedOr(v17++, ((1 << (32 - v21)) - 1) << (v16 & 0x1F));
  v15 = 1LL - (unsigned int)(32 - v21);
  if ( v15 >= 0x20 )
  {
    v22 = v15 >> 5;
    v15 += -32LL * (v15 >> 5);
    do
    {
      *v17++ = -1;
      --v22;
    }
    while ( v22 );
  }
  if ( v15 )
  {
LABEL_41:
    v19 = (1 << v15) - 1;
LABEL_35:
    _InterlockedOr(v17, v19);
  }
  if ( v23 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
    __writecr8(v23);
  }
LABEL_5:
  v7[1].Next = (_SLIST_ENTRY *)CLFS_LSN_NULL_EXT;
  if ( i )
  {
    Next = v7[1].Next;
    v9 = 128LL;
    if ( Next )
    {
      v9 = (unsigned __int64)Next & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    }
    else if ( qword_140E2D940 )
    {
      v9 = 144LL;
      if ( (qword_140E2D940 & 0x80u) == 0LL )
        v9 = qword_140E2D940 | 0x80;
    }
    v7[1].Next = (_SLIST_ENTRY *)v9;
  }
  else if ( (MiFlags & 0x80u) != 0LL && (++dword_140E2FF28 & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)&v7[0x22000000000LL] >> 4));
  }
  v7->Next = 0LL;
  return v7;
}
