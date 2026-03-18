/*
 * XREFs of KeCheckProcessorGroupAffinity @ 0x140458410
 * Callers:
 *     sub_14050A410 @ 0x14050A410 (sub_14050A410.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCheckProcessorGroupAffinity(__int64 a1, unsigned int a2)
{
  return (unsigned int)(*(_QWORD *)a1 >> (*((_BYTE *)KiGlobalState + 4 * a2) & 0x3F)) & (*((_DWORD *)KiGlobalState + a2) >> 6 == *(unsigned __int16 *)(a1 + 8));
}
