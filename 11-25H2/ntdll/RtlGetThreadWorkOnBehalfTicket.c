/*
 * XREFs of RtlGetThreadWorkOnBehalfTicket @ 0x1800DEB60
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlGetThreadWorkOnBehalfTicket(_QWORD *a1, int a2)
{
  char v2; // bl
  __int64 result; // rax
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v2 = a2;
  v5 = 0LL;
  if ( (a2 & 0xFFFFFFF8) != 0 || (a2 & 3) == 3 )
    return 3221225712LL;
  if ( (a2 & 2) != 0 )
  {
    result = ZwQueryInformationThread(-2LL, 44LL, &v5);
    if ( (int)result >= 0 )
    {
      if ( (v2 & 4) != 0 || (BYTE8(v5) & 1) == 0 )
      {
        *a1 = v5;
        return (unsigned int)result;
      }
      else
      {
        *a1 = 0LL;
        return (unsigned int)result;
      }
    }
  }
  else
  {
    result = 0LL;
    *a1 = *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket;
  }
  return result;
}
