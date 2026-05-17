/*
 * XREFs of RtlGetSessionProperties @ 0x180139040
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     NtQueryInformationJobObject @ 0x180164740 (NtQueryInformationJobObject.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlGetSessionProperties(int a1, _DWORD *a2)
{
  unsigned int v4; // ebx
  _BYTE *SharedData; // rcx
  _BYTE v7[624]; // [rsp+30h] [rbp-288h] BYREF

  memset_thunk_772440563353939046(v7, 0, 0x270uLL);
  if ( a1 == -1 )
    return (unsigned int)-1073741811;
  v4 = 0;
  if ( !a2 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a2 = 0;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      SharedData = NtCurrentPeb()->SharedData;
    }
    else
    {
      NtQueryInformationJobObject(0LL, 39LL, v7);
      SharedData = v7;
    }
    *a2 = *((_DWORD *)SharedData + 6) == a1;
  }
  return v4;
}
