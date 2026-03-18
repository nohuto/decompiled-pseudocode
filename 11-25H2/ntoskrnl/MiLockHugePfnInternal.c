/*
 * XREFs of MiLockHugePfnInternal @ 0x14020DE6C
 * Callers:
 *     MiLockMultipleZeroChunks @ 0x14020F970 (MiLockMultipleZeroChunks.c)
 *     MiDeleteVadAwePtes @ 0x1403FB8D8 (MiDeleteVadAwePtes.c)
 *     MiJoinHugeContext @ 0x14041C95C (MiJoinHugeContext.c)
 *     MiGetSingleHugeRangeToZero @ 0x14041CAF8 (MiGetSingleHugeRangeToZero.c)
 *     MiValidateAndLockAweMapCountPage @ 0x1404B3F90 (MiValidateAndLockAweMapCountPage.c)
 *     MiDereferenceHugeContext @ 0x1404CFC80 (MiDereferenceHugeContext.c)
 *     MiAddPartitionHugeRange @ 0x140663C58 (MiAddPartitionHugeRange.c)
 *     MiDereferenceIoHugeRange @ 0x140664048 (MiDereferenceIoHugeRange.c)
 *     MiGetHugeBadRangeFromNode @ 0x140664468 (MiGetHugeBadRangeFromNode.c)
 *     MiGetHugeRange @ 0x1406645A4 (MiGetHugeRange.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x1406648D0 (MiGetPerfectColorHeadHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x140664A98 (MiHotRemoveHugeRange.c)
 *     MiHugePurgeZeroList @ 0x140664DEC (MiHugePurgeZeroList.c)
 *     MiLockHugePfn @ 0x1406652D4 (MiLockHugePfn.c)
 *     MiSetHugeRangePartitionId @ 0x140666100 (MiSetHugeRangePartitionId.c)
 *     MiInitializeNewUltraHugeContext @ 0x1406841C4 (MiInitializeNewUltraHugeContext.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockHugePfnInternal(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  char v3; // si
  unsigned __int64 v4; // rbx
  signed __int32 v5; // edx
  bool v6; // zf
  signed __int32 v7; // eax
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  v1 = qword_140E2FD88;
  v2 = ((a1 - qword_140E2FD80) >> 3) & 0x3FFFFF;
  v3 = v2 & 0x1F;
  v4 = (unsigned __int64)(unsigned int)v2 >> 5;
LABEL_2:
  v5 = *(_DWORD *)(v1 + 4 * v4);
  do
  {
    if ( ((v5 >> v3) & 1) != 0 )
    {
      KeYieldProcessorEx(&v9);
      goto LABEL_2;
    }
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 4 * v4), v5 | (1 << v3), v5);
    v6 = v5 == v7;
    v5 = v7;
  }
  while ( !v6 );
  return 1LL;
}
