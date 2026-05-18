/*
 * XREFs of sub_18002A310 @ 0x18002A310
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800403F0 @ 0x1800403F0 (sub_1800403F0.c)
 *     sub_180095E68 @ 0x180095E68 (sub_180095E68.c)
 */

__int64 __fastcall sub_18002A310(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = sub_1800403F0(*(_QWORD *)(a1 + 392) + 184LL);
  if ( (_BYTE)result )
    result = sub_180095E68(v3, *(_QWORD *)(v3 + 192));
  ++*(_QWORD *)(a1 + 432);
  return result;
}
