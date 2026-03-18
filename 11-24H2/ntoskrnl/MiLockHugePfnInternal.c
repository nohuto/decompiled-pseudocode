/*
 * XREFs of MiLockHugePfnInternal @ 0x1403F9BD8
 * Callers:
 *     MiLockMultipleZeroChunks @ 0x14020AC60 (MiLockMultipleZeroChunks.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403F98CC (MiInitializeNewUltraHugeContext.c)
 *     MiJoinHugeContext @ 0x140487A9C (MiJoinHugeContext.c)
 *     MiValidateAndLockAweMapCountPage @ 0x1404B38C0 (MiValidateAndLockAweMapCountPage.c)
 *     MiDeleteVadAwePtes @ 0x1404B9E8C (MiDeleteVadAwePtes.c)
 *     MiDereferenceHugeContext @ 0x1404CFD8C (MiDereferenceHugeContext.c)
 *     MiGetSingleHugeRangeToZero @ 0x1404F0954 (MiGetSingleHugeRangeToZero.c)
 *     MiAddPartitionHugeRange @ 0x14066F778 (MiAddPartitionHugeRange.c)
 *     MiDereferenceIoHugeRange @ 0x14066FB68 (MiDereferenceIoHugeRange.c)
 *     MiGetHugeBadRangeFromNode @ 0x14066FF88 (MiGetHugeBadRangeFromNode.c)
 *     MiGetHugeRange @ 0x1406700C4 (MiGetHugeRange.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x140670378 (MiGetPerfectColorHeadHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x140670540 (MiHotRemoveHugeRange.c)
 *     MiHugePurgeZeroList @ 0x140670894 (MiHugePurgeZeroList.c)
 *     MiLockHugePfn @ 0x140670D7C (MiLockHugePfn.c)
 *     MiSetHugeRangePartitionId @ 0x140671BA8 (MiSetHugeRangePartitionId.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
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
  v1 = qword_140E2FFC8;
  v2 = ((a1 - qword_140E2FFC0) >> 3) & 0x3FFFFF;
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
