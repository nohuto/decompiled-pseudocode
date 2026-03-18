/*
 * XREFs of RtlpHpSegMgrVaCtxInitialize @ 0x1402C2BFC
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x1402C11C4 (RtlpHpSegMgrReserve.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x1402C27C8 (RtlpHpVaMgrCtxQuery.c)
 */

__int64 __fastcall RtlpHpSegMgrVaCtxInitialize(__int64 a1, ULONG_PTR a2, unsigned int a3, unsigned int a4)
{
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  RtlpHpVaMgrCtxQuery((__int64)&unk_140E68358, a2, (__int64)&v7);
  result = v8;
  *(_WORD *)(v8 + 2) = (1 << (a4 / a3)) - 2;
  *(_QWORD *)(result + 8) = -1LL;
  return result;
}
