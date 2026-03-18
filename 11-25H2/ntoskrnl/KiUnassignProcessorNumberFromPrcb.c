/*
 * XREFs of KiUnassignProcessorNumberFromPrcb @ 0x1405B7C78
 * Callers:
 *     KiStartDynamicProcessor @ 0x14072F1E8 (KiStartDynamicProcessor.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall KiUnassignProcessorNumberFromPrcb(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r9
  PVOID result; // rax

  v1 = *(unsigned __int8 *)(a1 + 208);
  v2 = *(unsigned __int8 *)(a1 + 209);
  *((_DWORD *)KiGlobalState + *(unsigned int *)(a1 + 36)) = 0;
  result = qword_140F216A8;
  *((_DWORD *)qword_140F216A8 + 64 * (unsigned __int64)v1 + v2) = 0;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}
