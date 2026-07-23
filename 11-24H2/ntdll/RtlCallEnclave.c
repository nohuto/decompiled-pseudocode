/*
 * XREFs of RtlCallEnclave @ 0x1801641F0
 * Callers:
 *     LdrInitializeEnclave @ 0x1800D3F10 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800D4020 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     ZwCallEnclave @ 0x1801612A0 (ZwCallEnclave.c)
 */

NTSTATUS __fastcall RtlCallEnclave(LPVOID (__cdecl *a1)(LPVOID), void *a2, ULONG a3, PVOID *a4)
{
  return ZwCallEnclave(a1, a2, a3, a4);
}
