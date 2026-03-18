/*
 * XREFs of ExQueryPoolBlockSize @ 0x140654750
 * Callers:
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 * Callees:
 *     MmDeterminePoolType @ 0x1402B2B50 (MmDeterminePoolType.c)
 *     ExIsSpecialPoolAddress @ 0x1402B4928 (ExIsSpecialPoolAddress.c)
 *     ExpRemoveTagForBigPages @ 0x1402C3EB0 (ExpRemoveTagForBigPages.c)
 *     ExpGetEntryBilledProcess @ 0x14040AE50 (ExpGetEntryBilledProcess.c)
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
    ExpRemoveTagForBigPages((ULONG_PTR)PoolBlock, v5, 0, &v12, &v11, &v10, (ULONG_PTR *)&v13);
    *QuotaCharged = (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL;
    return 4096LL;
  }
  return result;
}
