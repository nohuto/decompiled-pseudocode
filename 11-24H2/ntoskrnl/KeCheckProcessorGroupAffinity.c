/*
 * XREFs of KeCheckProcessorGroupAffinity @ 0x14044D720
 * Callers:
 *     sub_140507CD0 @ 0x140507CD0 (sub_140507CD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCheckProcessorGroupAffinity(__int64 a1, unsigned int a2)
{
  return (unsigned int)(*(_QWORD *)a1 >> (*((_BYTE *)KiGlobalState + 4 * a2) & 0x3F)) & (*((_DWORD *)KiGlobalState + a2) >> 6 == *(unsigned __int16 *)(a1 + 8));
}
