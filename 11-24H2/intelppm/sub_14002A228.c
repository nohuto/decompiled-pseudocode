/*
 * XREFs of sub_14002A228 @ 0x14002A228
 * Callers:
 *     sub_14002D524 @ 0x14002D524 (sub_14002D524.c)
 *     sub_1400310F0 @ 0x1400310F0 (sub_1400310F0.c)
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 *     sub_14004599C @ 0x14004599C (sub_14004599C.c)
 *     sub_140047274 @ 0x140047274 (sub_140047274.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14002A228(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 120))(*(_QWORD *)(a1 + 72));
  *(_DWORD *)(a1 + 144) &= ~1u;
  return result;
}
