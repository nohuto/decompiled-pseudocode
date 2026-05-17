/*
 * XREFs of RtlEnclaveCallDispatcher @ 0x180165DC0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpIssueEnclaveCall @ 0x1800D8CB0 (LdrpIssueEnclaveCall.c)
 *     ZwCallEnclave @ 0x180162EE0 (ZwCallEnclave.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall RtlEnclaveCallDispatcher(__int64 a1, __int64 (__fastcall *a2)(_QWORD), unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD *v5; // [rsp-20h] [rbp-20h]
  __int64 v6; // [rsp-18h] [rbp-18h] BYREF
  void *v7; // [rsp-10h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]

  if ( a2 )
  {
    v6 = a4;
    LdrpIssueEnclaveCall(a2, a3, &v6);
    while ( 1 )
    {
      result = ZwCallEnclave();
      a4 = v6;
      if ( v7 )
        break;
      v6 = 0LL;
    }
  }
  else
  {
    result = a3;
  }
  *v5 = a4;
  retaddr = v7;
  return result;
}
