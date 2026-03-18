/*
 * XREFs of RtlpHpVsContextMultiAlloc @ 0x1402C0B14
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14020D900 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1402BB160 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsSlotAllocate @ 0x1402C00DC (RtlpHpVsSlotAllocate.c)
 *     RtlpHpVsContextAllocateFinalize @ 0x1402C0C4C (RtlpHpVsContextAllocateFinalize.c)
 */

__int64 __fastcall RtlpHpVsContextMultiAlloc(
        _BYTE *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  unsigned int v6; // r13d
  __int64 v9; // r14
  bool v10; // zf
  _QWORD *v11; // rbp
  _QWORD *v12; // rdi
  unsigned int i; // esi
  _DWORD *v14; // rax
  _QWORD *Finalize; // rax
  __int64 result; // rax
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h]

  v6 = ((a2 + 15) >> 4) + (a1[4] & 1);
  v9 = (__int64)&a1[64
                  * (unsigned __int64)*(unsigned __int16 *)&a1[64 * *(unsigned __int16 *)a1
                                                             + 4
                                                             * (unsigned __int8)(a1[2] & KeGetCurrentThread()[1].SchedulerApcFill3[45])]];
  v10 = (a1[5] & 1) == 0;
  v17 = 0LL;
  v18 = 0LL;
  if ( v10 )
    RtlpHpAcquireQueuedLockExclusive((int *)(v9 + 8), (unsigned __int8)a1[3], (__int64)&v17);
  v11 = 0LL;
  v12 = 0LL;
  for ( i = 0; i < a3; ++i )
  {
    v14 = RtlpHpVsSlotAllocate((__int64)a1, v9, v6 + 1, (v6 + 1) << 16, (__int64)&v17);
    if ( !v14 )
      goto LABEL_11;
    Finalize = (_QWORD *)RtlpHpVsContextAllocateFinalize(a1, v14, a2, 0LL);
    if ( !v12 )
      v12 = Finalize;
    *Finalize = v11;
    v11 = Finalize;
  }
  if ( (a1[5] & 1) == 0 )
    RtlpHpReleaseQueuedLockExclusive((unsigned __int8)a1[3], (__int64)&v17);
LABEL_11:
  result = i;
  *a5 = v11;
  *a6 = v12;
  return result;
}
