/*
 * XREFs of RtlpHpSegMgrVaCtxInsert @ 0x1402C2AA8
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x1402C1104 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpSegMgrLock @ 0x1402C0D1C (RtlpHpSegMgrLock.c)
 *     RtlpHpSegMgrUnlock @ 0x1402C0D40 (RtlpHpSegMgrUnlock.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1402C27C8 (RtlpHpVaMgrCtxQuery.c)
 */

void __fastcall RtlpHpSegMgrVaCtxInsert(__int64 a1, ULONG_PTR a2)
{
  __int64 v3; // r8
  unsigned __int16 *v4; // rsi
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  char v8; // al
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  RtlpHpVaMgrCtxQuery((__int64)&unk_140E68358, a2, (__int64)&v9);
  v4 = (unsigned __int16 *)v10;
  v5 = *(unsigned __int16 *)v10;
  v6 = (unsigned int)(v5 + 1);
  LOWORD(v6) = v5 ^ (v5 ^ (v5 + 1)) & 0x7FF;
  *(_WORD *)v10 = v6;
  if ( (v6 & 0x8000u) != 0LL )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1));
    v4 = (unsigned __int16 *)v10;
  }
  v7 = (unsigned __int64)*v4 >> 15;
  v8 = RtlpHpSegMgrLock(a1, v6, v3);
  *((_QWORD *)v4 + 1) = *(_QWORD *)(a1 + 8 * v7 + 120);
  *(_QWORD *)(a1 + 8 * v7 + 120) = v4 + 4;
  RtlpHpSegMgrUnlock(a1, v8);
}
