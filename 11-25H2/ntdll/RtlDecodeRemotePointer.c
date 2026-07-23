/*
 * XREFs of RtlDecodeRemotePointer @ 0x180160DA0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationProcess @ 0x180163540 (NtQueryInformationProcess.c)
 */

NTSTATUS __cdecl RtlDecodeRemotePointer(HANDLE ProcessHandle, PVOID Pointer, PVOID *DecodedPointer)
{
  NTSTATUS v3; // ebx
  NTSTATUS v6; // eax
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v8 = 0;
  v6 = NtQueryInformationProcess(ProcessHandle, ProcessCookie, &v8, 4u, 0LL);
  if ( v6 < 0 )
    return v6 | 0x10000000;
  *DecodedPointer = (PVOID)(v8 ^ __ROR8__(Pointer, 64 - (v8 & 0x3F)));
  return v3;
}
