/*
 * XREFs of MiReplaceActivePageTableLinks @ 0x1403F37B8
 * Callers:
 *     MiReplacePageTablePage @ 0x1403F2DE8 (MiReplacePageTablePage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiReplaceActivePageTableLinks(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // r14
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx

  v5 = *(_QWORD *)(a1 + 16) + 24 * ((*(_QWORD *)a2 >> 55) & 7LL);
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
  v7 = *(_DWORD *)(a3 + 36);
  v8 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 16) = v8;
  v9 = v8 & 0xFFFFFFFFFFLL;
  *(_DWORD *)(a2 + 36) = v7 ^ (v7 ^ *(_DWORD *)(a2 + 36)) & 0xFFFF0000;
  if ( v9 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)(v5 + 80) = a2;
  }
  else
  {
    v10 = 48 * v9 - 0x220000000000LL;
    *(_QWORD *)(v10 + 16) ^= (*(_QWORD *)(v10 + 16) ^ (0xAAAAAAAAAB000000uLL * ((a2 + 0x220000000000LL) >> 4))) & 0xFFFFFF0000000000uLL;
    *(_DWORD *)(v10 + 36) = v6 ^ (*(_DWORD *)(v10 + 36) ^ v6) & 0xFFFF0000;
  }
  v11 = (*(_QWORD *)(a3 + 16) >> 24) & 0x3FFFFF0000LL | (unsigned __int16)v7;
  if ( v11 == 0x3FFFFFFFFFLL )
    *(_QWORD *)(v5 + 72) = a2;
  else
    *(_QWORD *)(48 * v11 - 0x220000000000LL + 16) = v6 ^ (*(_QWORD *)(48 * v11 - 0x220000000000LL + 16) ^ v6) & 0xFFFFFF0000000000uLL;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
  *(_DWORD *)(a3 + 36) = v7 & 0xFBFFFFFF;
}
