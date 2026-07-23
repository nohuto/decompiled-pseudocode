/*
 * XREFs of RtlFreeUserFiberShadowStack @ 0x180107C90
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationProcess @ 0x1801603D0 (NtSetInformationProcess.c)
 */

NTSTATUS __fastcall RtlFreeUserFiberShadowStack(__int64 a1)
{
  __int64 ProcessInformation; // [rsp+30h] [rbp+8h] BYREF

  ProcessInformation = a1;
  return NtSetInformationProcess(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           ProcessFreeFiberShadowStackAllocation,
           &ProcessInformation,
           8u);
}
