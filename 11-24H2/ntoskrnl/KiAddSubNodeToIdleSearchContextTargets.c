/*
 * XREFs of KiAddSubNodeToIdleSearchContextTargets @ 0x1405B2B70
 * Callers:
 *     KiConfigureCooperativeIdleSearchContextTargets @ 0x1405B3B28 (KiConfigureCooperativeIdleSearchContextTargets.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAddSubNodeToIdleSearchContextTargets(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 result; // rax

  v2 = *(unsigned __int16 *)(a1 + 1058);
  v3 = *(unsigned __int16 *)(a1 + 1056);
  *(_WORD *)(a1 + 2 * (v2 + 16 * v3) + 1064) = *(_WORD *)(a2 + 140);
  v4 = 2 * (v2 + v3);
  *(_QWORD *)(a1 + 8 * v4 + 1064) = *(_QWORD *)(a2 + 128);
  result = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 8 * v4 + 1072) = result;
  ++*(_WORD *)(a1 + 1058);
  return result;
}
