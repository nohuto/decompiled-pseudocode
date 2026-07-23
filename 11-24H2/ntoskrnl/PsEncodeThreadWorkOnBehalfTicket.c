/*
 * XREFs of PsEncodeThreadWorkOnBehalfTicket @ 0x14043D5A0
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14073F800 (NtAlpcImpersonateClientContainerOfPort.c)
 *     NtQueryInformationThread @ 0x1409910D0 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1409C1630 (AlpcpCaptureWorkOnBehalfAttribute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsEncodeThreadWorkOnBehalfTicket(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  *a2 = *(_DWORD *)(a1 + 1296);
  a2[1] = *(_DWORD *)(a1 + 1216);
  result = PspWorkOnBehalfEncodingKey;
  *(_QWORD *)a2 ^= PspWorkOnBehalfEncodingKey;
  return result;
}
