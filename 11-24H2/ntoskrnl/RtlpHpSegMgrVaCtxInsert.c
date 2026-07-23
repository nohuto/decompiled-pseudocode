/*
 * XREFs of RtlpHpSegMgrVaCtxInsert @ 0x14035D4AC
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x14035D548 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpSegMgrLock @ 0x14035CE14 (RtlpHpSegMgrLock.c)
 *     RtlpHpSegMgrUnlock @ 0x14035CE38 (RtlpHpSegMgrUnlock.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14035D9AC (RtlpHpVaMgrCtxQuery.c)
 */

__int64 __fastcall RtlpHpSegMgrVaCtxInsert(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // rsi
  __int16 v4; // ax
  unsigned __int64 v5; // rbx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  RtlpHpVaMgrCtxQuery(&unk_140E68558, a2, &v7);
  v3 = (unsigned __int16 *)v8;
  v4 = *(_WORD *)v8;
  *(_WORD *)v8 ^= (*(_WORD *)v8 ^ (*(_WORD *)v8 + 1)) & 0x7FF;
  if ( (v4 ^ (v4 ^ (v4 + 1)) & 0x7FF) < 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1));
    v3 = (unsigned __int16 *)v8;
  }
  v5 = (unsigned __int64)*v3 >> 15;
  RtlpHpSegMgrLock(a1);
  *((_QWORD *)v3 + 1) = *(_QWORD *)(a1 + 8 * v5 + 120);
  *(_QWORD *)(a1 + 8 * v5 + 120) = v3 + 4;
  return RtlpHpSegMgrUnlock(a1);
}
