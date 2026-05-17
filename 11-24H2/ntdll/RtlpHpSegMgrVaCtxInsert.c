/*
 * XREFs of RtlpHpSegMgrVaCtxInsert @ 0x180158390
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x180091660 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpQueryVA @ 0x180093EA8 (RtlpHpQueryVA.c)
 *     RtlpHpSegMgrLock @ 0x180112AF0 (RtlpHpSegMgrLock.c)
 */

__int64 __fastcall RtlpHpSegMgrVaCtxInsert(__int64 a1, __int64 a2)
{
  volatile signed __int32 **v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int16 *v5; // rsi
  __int16 v6; // ax
  bool v7; // sf
  unsigned __int64 v8; // rbx
  unsigned __int16 *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  RtlpHpQueryVA(a2, a2, &v10, 0LL);
  v5 = v10;
  v6 = (*v10 ^ (*v10 + 1)) & 0x7FF;
  v7 = ((v6 ^ *v10) & 0x8000u) != 0;
  *v10 ^= v6;
  if ( v7 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1));
    v5 = v10;
  }
  v8 = (unsigned __int64)*v5 >> 15;
  RtlpHpSegMgrLock(a1, v3, v4);
  *((_QWORD *)v5 + 1) = *(_QWORD *)(a1 + 8 * v8 + 120);
  *(_QWORD *)(a1 + 8 * v8 + 120) = v5 + 4;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 112));
}
