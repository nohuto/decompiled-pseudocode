/*
 * XREFs of MiLockHugePfnInternal @ 0x1403EFAE4
 * Callers:
 *     MiLockMultipleZeroChunks @ 0x140332A40 (MiLockMultipleZeroChunks.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403EF7D8 (MiInitializeNewUltraHugeContext.c)
 *     MiJoinHugeContext @ 0x140482B0C (MiJoinHugeContext.c)
 *     MiValidateAndLockAweMapCountPage @ 0x1404AE114 (MiValidateAndLockAweMapCountPage.c)
 *     MiDeleteVadAwePtes @ 0x1404B4D2C (MiDeleteVadAwePtes.c)
 *     MiDereferenceHugeContext @ 0x1404C8E3C (MiDereferenceHugeContext.c)
 *     MiGetSingleHugeRangeToZero @ 0x1404EE3F4 (MiGetSingleHugeRangeToZero.c)
 *     MiAddPartitionHugeRange @ 0x140670948 (MiAddPartitionHugeRange.c)
 *     MiDereferenceIoHugeRange @ 0x140670D38 (MiDereferenceIoHugeRange.c)
 *     MiGetHugeBadRangeFromNode @ 0x140671158 (MiGetHugeBadRangeFromNode.c)
 *     MiGetHugeRange @ 0x140671294 (MiGetHugeRange.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x140671548 (MiGetPerfectColorHeadHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x140671710 (MiHotRemoveHugeRange.c)
 *     MiHugePurgeZeroList @ 0x140671A64 (MiHugePurgeZeroList.c)
 *     MiLockHugePfn @ 0x140671F4C (MiLockHugePfn.c)
 *     MiSetHugeRangePartitionId @ 0x140672D78 (MiSetHugeRangePartitionId.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
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
  v1 = qword_140E30108;
  v2 = ((a1 - qword_140E30100) >> 3) & 0x3FFFFF;
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
