/*
 * XREFs of RtlFlsGetValue2 @ 0x1800D5BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlFlsGetValue2(ULONG FlsIndex)
{
  _QWORD *FlsData; // rdx
  ULONG v2; // r8d
  PVOID result; // rax
  __int64 v4; // r9
  __int64 v5; // rcx

  FlsData = NtCurrentTeb()->FlsData;
  if ( FlsIndex - 1 > 0xFEE || !FlsData )
    return 0LL;
  v2 = FlsIndex + 16;
  _BitScanReverse(&FlsIndex, FlsIndex + 16);
  result = 0LL;
  v4 = v2 ^ (1 << FlsIndex);
  v5 = FlsData[FlsIndex - 2];
  if ( v5 )
    return *(PVOID *)(v5 + 8 * v4 + 8);
  return result;
}
