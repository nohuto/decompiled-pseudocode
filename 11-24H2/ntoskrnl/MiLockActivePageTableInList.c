/*
 * XREFs of MiLockActivePageTableInList @ 0x1403CF89C
 * Callers:
 *     MiFastTrimWorkingSet @ 0x1403CF450 (MiFastTrimWorkingSet.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiTryLockPageTableUnordered @ 0x1402D4830 (MiTryLockPageTableUnordered.c)
 *     MiSetPfnOldestWsleLeafAge @ 0x1402E3C1C (MiSetPfnOldestWsleLeafAge.c)
 */

unsigned __int64 __fastcall MiLockActivePageTableInList(__int64 a1, unsigned __int8 a2)
{
  __int64 i; // rdi
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 v7; // rax

  for ( i = *(_QWORD *)(a1 + 16) + 8 * (3LL * a2 + 8); ; ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)i) )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)i);
    v4 = *(_QWORD **)(i + 8);
    if ( !v4 )
      break;
    while ( v4 )
    {
      v5 = v4[1] | 0x8000000000000000uLL;
      if ( (unsigned int)MiTryLockPageTableUnordered(a1, v5) )
      {
        MiSetPfnOldestWsleLeafAge(a1, (__int64)v4, (*v4 >> 55) & 7, (*v4 >> 45) & 0x3FF, 1);
        goto LABEL_6;
      }
      v7 = v4[2] & 0xFFFFFFFFFFLL;
      if ( v7 == 0x3FFFFFFFFFLL )
        goto LABEL_7;
      v4 = (_QWORD *)(48 * v7 - 0x220000000000LL);
    }
  }
LABEL_7:
  v5 = 0LL;
LABEL_6:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)i);
  return v5;
}
