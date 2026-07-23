/*
 * XREFs of MiDeleteSlabEntriesForIdentity @ 0x14067BCB0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFreeSlabEntry @ 0x1403B6480 (MiFreeSlabEntry.c)
 *     KeGenericCallDpcEx @ 0x140417AB0 (KeGenericCallDpcEx.c)
 *     MiRemoveSlabEntry @ 0x14045C66C (MiRemoveSlabEntry.c)
 *     MiUnlinkTransitionSlabPages @ 0x1404B32A0 (MiUnlinkTransitionSlabPages.c)
 *     MiRelinkTransitionSlabPages @ 0x1404CAA48 (MiRelinkTransitionSlabPages.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiChangeSlabEntryIdentity @ 0x14067ACD0 (MiChangeSlabEntryIdentity.c)
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
  __int64 v19; // r8
  __int64 v20; // rdx
  int v22; // [rsp+20h] [rbp-48h]
  char v23; // [rsp+78h] [rbp+10h]
  int v24; // [rsp+80h] [rbp+18h]
  int v25; // [rsp+88h] [rbp+20h]

  v3 = (volatile LONG *)(a2 + 16);
  v5 = 0;
  v6 = 0LL;
  v24 = 0;
  v8 = (volatile LONG *)(a2 + 16);
  v22 = MiPageSizes[(*(_DWORD *)(a2 + 136) >> 4) & 3];
  if ( (a3 & 1) != 0 )
  {
    v9 = 17;
    v25 = 1;
    v23 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v8);
  }
  else
  {
    v25 = 0;
    v9 = ExAcquireSpinLockExclusive(v8);
    v23 = v9;
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
      if ( *(_DWORD *)(v13 + 84) == v22 )
        break;
      if ( v25 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        v18 = MiUnlinkTransitionSlabPages(v17, v13);
        MiChangeSlabEntryIdentity(a2, v13);
        MiRelinkTransitionSlabPages(v18);
        ExAcquireSpinLockExclusiveAtDpcLevel(v3);
LABEL_23:
        v5 = v24;
        goto LABEL_24;
      }
      v5 = 1;
      v24 = 1;
LABEL_24:
      if ( !i )
      {
        v9 = v23;
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
    v20 = (__int64)v6;
    if ( !v6 )
      break;
    v6 = (_QWORD *)*v6;
    MiFreeSlabEntry(a2, v20, v19);
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
