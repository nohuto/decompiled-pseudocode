/*
 * XREFs of MiDeleteSlabEntriesForIdentity @ 0x140688670
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpcEx @ 0x140270AE8 (KeGenericCallDpcEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiFreeSlabEntry @ 0x1403533C8 (MiFreeSlabEntry.c)
 *     MiRemoveSlabEntry @ 0x14043C298 (MiRemoveSlabEntry.c)
 *     MiRelinkTransitionSlabPages @ 0x14043C4D4 (MiRelinkTransitionSlabPages.c)
 *     MiUnlinkTransitionSlabPages @ 0x14043C5B4 (MiUnlinkTransitionSlabPages.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiChangeSlabEntryIdentity @ 0x140687690 (MiChangeSlabEntryIdentity.c)
 */

__int64 __fastcall MiDeleteSlabEntriesForIdentity(__int64 a1, __int64 a2, char a3)
{
  volatile LONG *v3; // r12
  int v5; // edi
  _QWORD *v6; // rbx
  volatile LONG *v8; // rcx
  KIRQL v9; // r15
  __int64 v10; // rcx
  _QWORD *i; // rsi
  _QWORD **v12; // rax
  __int64 v13; // r14
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  __int64 v19; // rdx
  int v21; // [rsp+20h] [rbp-48h]
  char v22; // [rsp+78h] [rbp+10h]
  int v23; // [rsp+80h] [rbp+18h]
  int v24; // [rsp+88h] [rbp+20h]

  v3 = (volatile LONG *)(a2 + 16);
  v5 = 0;
  v6 = 0LL;
  v23 = 0;
  v8 = (volatile LONG *)(a2 + 16);
  v21 = MiPageSizes[(*(_DWORD *)(a2 + 136) >> 4) & 3];
  if ( (a3 & 1) != 0 )
  {
    v9 = 17;
    v24 = 1;
    v22 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v8);
  }
  else
  {
    v24 = 0;
    v9 = ExAcquireSpinLockExclusive(v8);
    v22 = v9;
  }
  v10 = *(_QWORD *)(a2 + 8);
  if ( (v10 & 1) != 0 )
  {
    if ( v10 == 1 )
      goto LABEL_26;
    i = (_QWORD *)(v10 ^ (a2 | 1));
  }
  else
  {
    i = *(_QWORD **)(a2 + 8);
  }
  if ( i )
  {
    while ( 1 )
    {
      v12 = (_QWORD **)i[1];
      v13 = (__int64)i;
      v14 = i;
      if ( v12 )
      {
        v15 = *v12;
        for ( i = (_QWORD *)i[1]; v15; v15 = (_QWORD *)*v15 )
          i = v15;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v14 )
            break;
          v14 = i;
        }
      }
      v16 = *(unsigned int *)(v13 + 92);
      if ( (v16 & 4) != 0 && *(_QWORD *)(a1 + 8 * ((v16 >> 3) & 0x3F) + 17752) )
        goto LABEL_23;
      if ( *(_DWORD *)(v13 + 84) == v21 )
        break;
      if ( v24 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        v18 = MiUnlinkTransitionSlabPages(v17, v13);
        MiChangeSlabEntryIdentity(a2, v13);
        MiRelinkTransitionSlabPages(v18);
        ExAcquireSpinLockExclusiveAtDpcLevel(v3);
LABEL_23:
        v5 = v23;
        goto LABEL_24;
      }
      v5 = 1;
      v23 = 1;
LABEL_24:
      if ( !i )
      {
        v9 = v22;
        goto LABEL_26;
      }
    }
    MiRemoveSlabEntry(a1, a2, v13);
    *(_QWORD *)v13 = v6;
    v6 = (_QWORD *)v13;
    goto LABEL_23;
  }
LABEL_26:
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  while ( 1 )
  {
    v19 = (__int64)v6;
    if ( !v6 )
      break;
    v6 = (_QWORD *)*v6;
    MiFreeSlabEntry(a2, v19);
  }
  if ( v9 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
    __writecr8(v9);
  }
  if ( v5 )
    KeGenericCallDpcEx((__int64)MiChangeSlabIdentitiesDpc, a1);
  return 0LL;
}
