/*
 * XREFs of ExQueryPoolBlockSize @ 0x140652E50
 * Callers:
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     ExpRemoveTagForBigPages @ 0x14021B1B0 (ExpRemoveTagForBigPages.c)
 *     MmDeterminePoolType @ 0x14035B710 (MmDeterminePoolType.c)
 *     ExpGetEntryBilledProcess @ 0x140403330 (ExpGetEntryBilledProcess.c)
 *     ExIsSpecialPoolAddress @ 0x14048BD64 (ExIsSpecialPoolAddress.c)
 */

SIZE_T __stdcall ExQueryPoolBlockSize(PVOID PoolBlock, PBOOLEAN QuotaCharged)
{
  SIZE_T result; // rax
  ULONG_PTR v5; // rax
  unsigned __int64 v6; // rax
  bool v7; // cf
  bool v8; // zf
  __int64 v9; // r8
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+48h] [rbp-10h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0LL;
  v13 = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( (unsigned int)ExIsSpecialPoolAddress((ULONG_PTR)PoolBlock) )
  {
    *QuotaCharged = 0;
    return *(_DWORD *)((unsigned __int64)PoolBlock & 0xFFFFFFFFFFFFF000uLL) & 0xFFF;
  }
  else if ( ((unsigned __int16)PoolBlock & 0xFFF) != 0 )
  {
    v6 = ExpGetEntryBilledProcess((__int64)PoolBlock - 16) - 1;
    v7 = v6 < 0xFFFFFFFFFFFFFFFDuLL;
    v8 = v6 == -3LL;
    result = v9 - 16;
    *QuotaCharged = v7 || v8;
  }
  else
  {
    v5 = MmDeterminePoolType((unsigned __int64)PoolBlock);
    ExpRemoveTagForBigPages((ULONG_PTR)PoolBlock, v5, 0LL, &v12, &v11, &v10, (ULONG_PTR *)&v13);
    *QuotaCharged = (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL;
    return 4096LL;
  }
  return result;
}
