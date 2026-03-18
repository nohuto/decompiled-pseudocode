/*
 * XREFs of MiUpdatePageFileBlockOwner @ 0x1402CF4D0
 * Callers:
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiTransferPageFileOwnership @ 0x1402CE0EC (MiTransferPageFileOwnership.c)
 *     MiDemoteCombinedPte @ 0x14037EFEC (MiDemoteCombinedPte.c)
 * Callees:
 *     MiWriteEntirePageHashEntry @ 0x140227080 (MiWriteEntirePageHashEntry.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPageHashBugCheck @ 0x140685E58 (MiPageHashBugCheck.c)
 */

void __fastcall MiUpdatePageFileBlockOwner(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  volatile LONG *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned int v14; // r10d
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF

  v15 = 0LL;
  if ( dword_140E37050 )
  {
    v8 = (volatile LONG *)(a1 + 200);
    v9 = a4 | 1;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
    v10 = *(_QWORD *)(a1 + 184);
    if ( !v10 )
      goto LABEL_14;
    v11 = v10 + dword_140E3704C * a2;
    if ( (*(_QWORD *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) == 0 )
      goto LABEL_14;
    v12 = *(_QWORD *)(v11 + 8);
    if ( !v12 )
      goto LABEL_14;
    if ( *(_DWORD *)v11 == 1 )
    {
      if ( a5 )
      {
LABEL_14:
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
        return;
      }
    }
    else if ( v12 == v9 && *(_DWORD *)(v11 + 4) == a2 )
    {
LABEL_13:
      LODWORD(v15) = *(_DWORD *)v11;
      *((_QWORD *)&v15 + 1) = a3 | 1;
      DWORD1(v15) = a2;
      MiWriteEntirePageHashEntry(v11, (unsigned int *)&v15);
      goto LABEL_14;
    }
    ++dword_140E2FF18;
    if ( !dword_140E2FF0C )
    {
      MiWriteEntirePageHashEntry((__int64)&v15, (unsigned int *)v11);
      DWORD1(v15) = *(_DWORD *)(v13 + 4);
      *((_QWORD *)&v15 + 1) = v9;
      MiPageHashBugCheck(v14, a2, v13);
    }
    v8 = (volatile LONG *)(a1 + 200);
    goto LABEL_13;
  }
}
