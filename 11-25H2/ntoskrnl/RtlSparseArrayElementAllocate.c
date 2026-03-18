/*
 * XREFs of RtlSparseArrayElementAllocate @ 0x14035EB20
 * Callers:
 *     RtlpHpVaMgrRangeCreate @ 0x1403CC128 (RtlpHpVaMgrRangeCreate.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14035E0AC (RtlpCSparseBitmapPageCommit.c)
 *     RtlpCSparseBitmapUnlock @ 0x14035E2E4 (RtlpCSparseBitmapUnlock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     memmove @ 0x1406B4940 (memmove.c)
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
