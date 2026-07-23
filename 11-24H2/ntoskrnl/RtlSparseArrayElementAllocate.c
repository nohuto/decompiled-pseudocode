/*
 * XREFs of RtlSparseArrayElementAllocate @ 0x14021A324
 * Callers:
 *     RtlpHpVaMgrRangeCreate @ 0x14021BBE4 (RtlpHpVaMgrRangeCreate.c)
 * Callees:
 *     RtlpCSparseBitmapUnlock @ 0x14021966C (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapPageCommit @ 0x1402197E0 (RtlpCSparseBitmapPageCommit.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

void *__fastcall RtlSparseArrayElementAllocate(__int64 a1, __int64 a2, const void *a3)
{
  int v3; // edi
  __int64 v4; // rdx
  void *v6; // rbx
  __int64 v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10[6]; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v4 = a2 << v3;
  *(_QWORD *)((char *)&v9 + 1) = 0LL;
  v6 = (void *)(v4 + *(_QWORD *)(a1 + 24));
  *(_QWORD *)&v9 = 0LL;
  *(_OWORD *)v10 = 0LL;
  if ( (int)RtlpCSparseBitmapPageCommit(a1 + 16, (unsigned __int64)(8 * v4) >> 15, (__int64)v10, &v9) < 0 )
    return 0LL;
  memmove(v6, a3, (unsigned int)(1 << v3));
  RtlpCSparseBitmapUnlock(v10);
  if ( *(_BYTE *)(*((_QWORD *)&v9 + 1) + 48LL) )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = v9;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    }
    __writecr8((unsigned __int8)v9);
  }
  else
  {
    KeLeaveGuardedRegion();
  }
  return v6;
}
