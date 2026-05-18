/*
 * XREFs of sub_180082788 @ 0x180082788
 * Callers:
 *     sub_1800827E8 @ 0x1800827E8 (sub_1800827E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180082788(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  result = *(unsigned int *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
