/*
 * XREFs of RtlpHpSegMgrVaCtxInsert @ 0x1402FA798
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x1402F93D0 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x1402FA31C (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpSegMgrUnlock @ 0x1402FA950 (RtlpHpSegMgrUnlock.c)
 *     RtlpHpSegMgrLock @ 0x1402FA978 (RtlpHpSegMgrLock.c)
 */

__int64 __fastcall RtlpHpSegMgrVaCtxInsert(__int64 a1, ULONG_PTR a2)
{
  unsigned __int16 *v3; // rsi
  int v4; // eax
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  char v7; // al
  unsigned __int16 *v8; // rdx
  __int64 v9; // r8
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  RtlpHpVaMgrCtxQuery((__int64)&unk_140E68098, a2, (__int64)&v11);
  v3 = (unsigned __int16 *)v12;
  v4 = *(unsigned __int16 *)v12;
  v5 = (unsigned int)(v4 + 1);
  LOWORD(v5) = v4 ^ (v4 ^ (v4 + 1)) & 0x7FF;
  *(_WORD *)v12 = v5;
  if ( (v5 & 0x8000u) != 0LL )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1));
    v3 = (unsigned __int16 *)v12;
  }
  v6 = (unsigned __int64)*v3 >> 15;
  v7 = RtlpHpSegMgrLock(a1, v5);
  v8 = v3 + 4;
  *((_QWORD *)v3 + 1) = *(_QWORD *)(a1 + 8 * v6 + 120);
  *(_QWORD *)(a1 + 8 * v6 + 120) = v3 + 4;
  LOBYTE(v8) = v7;
  return RtlpHpSegMgrUnlock(a1, v8, v9);
}
