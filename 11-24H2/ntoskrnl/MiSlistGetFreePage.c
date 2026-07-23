/*
 * XREFs of MiSlistGetFreePage @ 0x14033DDB0
 * Callers:
 *     MiRemovePageAnyColor @ 0x14033E6B4 (MiRemovePageAnyColor.c)
 *     MiGetPageSlist @ 0x14033F3D8 (MiGetPageSlist.c)
 * Callees:
 *     MiArePageContentsZero @ 0x1404C33B0 (MiArePageContentsZero.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiSlistGetFreePage(__int64 a1, int a2)
{
  unsigned __int64 v4; // rbp
  int i; // esi
  __int64 v6; // rbx
  PSLIST_ENTRY v7; // rdi
  unsigned __int64 v9; // rcx
  volatile signed __int32 *v10; // r8
  unsigned int v11; // eax
  _SLIST_ENTRY *Next; // rcx
  __int64 v13; // rax
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
      goto LABEL_18;
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
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    }
    LOBYTE(v9) = 1;
    v10 = (volatile signed __int32 *)(*(_QWORD *)(v6 + 14856) + 4 * (v4 >> 5));
    if ( (v4 & 0x1F) + 1 <= 0x20 )
    {
      v11 = ~(1 << (v4 & 0x1F));
LABEL_12:
      _InterlockedAnd(v10, v11);
      goto LABEL_13;
    }
    if ( (v4 & 0x1F) == 0 )
      goto LABEL_29;
    _InterlockedAnd(v10, ~(((1 << (32 - (v4 & 0x1F))) - 1) << (v4 & 0x1F)));
    v9 = 1LL - (32 - (unsigned int)(v4 & 0x1F));
    ++v10;
    if ( v9 >= 0x20 )
    {
      v20 = v9 >> 5;
      v9 += -32LL * (v9 >> 5);
      do
      {
        *v10++ = 0;
        --v20;
      }
      while ( v20 );
    }
    if ( v9 )
    {
LABEL_29:
      v11 = -1 << v9;
      goto LABEL_12;
    }
LABEL_13:
    v7 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v24 + 16 * v4));
    if ( v7 )
      break;
    if ( v23 != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
      __writecr8(v23);
    }
LABEL_18:
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
    goto LABEL_33;
  }
  if ( (v4 & 0x1F) == 0 )
    goto LABEL_39;
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
LABEL_39:
    v19 = (1 << v15) - 1;
LABEL_33:
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
    v13 = 128LL;
    if ( Next )
    {
      v13 = (unsigned __int64)Next & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    }
    else if ( qword_140E2DCC0 )
    {
      v13 = 144LL;
      if ( (qword_140E2DCC0 & 0x80u) == 0LL )
        v13 = qword_140E2DCC0 | 0x80;
    }
    v7[1].Next = (_SLIST_ENTRY *)v13;
  }
  else if ( (MiFlags & 0x80u) != 0LL && (++dword_140E302B0 & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)&v7[0x22000000000LL] >> 4));
  }
  v7->Next = 0LL;
  return v7;
}
