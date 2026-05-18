/*
 * XREFs of sub_18007A9C4 @ 0x18007A9C4
 * Callers:
 *     sub_1800424B8 @ 0x1800424B8 (sub_1800424B8.c)
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 * Callees:
 *     sub_18007A010 @ 0x18007A010 (sub_18007A010.c)
 */

__int64 __fastcall sub_18007A9C4(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdx
  __int64 result; // rax

  v5 = *(unsigned int *)(56LL * *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)sub_18007A010(a1, a2) + 128)
                       + *(_QWORD *)(a1 + 56)
                       + 40);
  result = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(result + 40 * v5 + 32) = a3;
  return result;
}
