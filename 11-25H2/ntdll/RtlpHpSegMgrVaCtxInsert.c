/*
 * XREFs of RtlpHpSegMgrVaCtxInsert @ 0x180159940
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x1800BA9E0 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpQueryVA @ 0x1800BCC64 (RtlpHpQueryVA.c)
 *     RtlpHpSegMgrLock @ 0x180115830 (RtlpHpSegMgrLock.c)
 */

void __fastcall RtlpHpSegMgrVaCtxInsert(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // rsi
  __int16 v4; // ax
  bool v5; // sf
  unsigned __int64 v6; // rbx
  unsigned __int16 *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  RtlpHpQueryVA(a2, a2, &v7, 0LL);
  v3 = v7;
  v4 = (*v7 ^ (*v7 + 1)) & 0x7FF;
  v5 = ((v4 ^ *v7) & 0x8000u) != 0;
  *v7 ^= v4;
  if ( v5 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1));
    v3 = v7;
  }
  v6 = (unsigned __int64)*v3 >> 15;
  RtlpHpSegMgrLock((_RTL_SRWLOCK *)a1);
  *((_QWORD *)v3 + 1) = *(_QWORD *)(a1 + 8 * v6 + 120);
  *(_QWORD *)(a1 + 8 * v6 + 120) = v3 + 4;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 112));
}
