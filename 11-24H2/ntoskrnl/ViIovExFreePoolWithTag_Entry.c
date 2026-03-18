/*
 * XREFs of ViIovExFreePoolWithTag_Entry @ 0x1406A4010
 * Callers:
 *     <none>
 * Callees:
 *     VfPoolCheckIncorrectFreeApi @ 0x140B9A3D8 (VfPoolCheckIncorrectFreeApi.c)
 */

__int64 __fastcall ViIovExFreePoolWithTag_Entry(__int64 a1)
{
  return VfPoolCheckIncorrectFreeApi(*(_QWORD *)(a1 + 16));
}
