/*
 * XREFs of RtlFlsGetValue @ 0x1800D9840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlFlsGetValue(ULONG FlsIndex, PVOID *FlsData)
{
  _QWORD *v2; // rax
  ULONG v4; // edx
  __int64 v5; // r8
  __int64 v6; // rcx
  void *v7; // rax

  v2 = NtCurrentTeb()->FlsData;
  if ( FlsIndex - 1 > 0xFEE )
    return -1073741811;
  if ( !v2 )
    return -1073741664;
  v4 = FlsIndex + 16;
  _BitScanReverse(&FlsIndex, FlsIndex + 16);
  v5 = v4 ^ (1 << FlsIndex);
  v6 = v2[FlsIndex - 2];
  if ( v6 )
    v7 = *(void **)(v6 + 8 * v5 + 8);
  else
    v7 = 0LL;
  *FlsData = v7;
  return 0;
}
