/*
 * XREFs of TpWorkOnBehalfSetTicket @ 0x1800D7B80
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 */

__int64 __fastcall TpWorkOnBehalfSetTicket(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edx
  __int64 result; // rax

  if ( !a2 )
    return 3221225485LL;
  if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket == *a2 )
  {
    v4 = 0;
LABEL_4:
    *(_QWORD *)(a1 + 248) = *a2;
    return v4;
  }
  result = NtSetInformationThread(-2LL, 44LL, a2);
  v4 = result;
  if ( (int)result >= 0 )
  {
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *a2;
    goto LABEL_4;
  }
  return result;
}
