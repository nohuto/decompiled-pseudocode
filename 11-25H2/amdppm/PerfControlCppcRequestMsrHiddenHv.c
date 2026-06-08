/*
 * XREFs of PerfControlCppcRequestMsrHiddenHv @ 0x140004390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 */

void __fastcall PerfControlCppcRequestMsrHiddenHv(__int64 *a1, _QWORD *a2, char a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  if ( a3 || a4 )
  {
    if ( !*((_BYTE *)a1 + 137) || a4 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD *))qword_140014970)(
        *(unsigned int *)(*a1 + 84),
        *((unsigned int *)a1 + 39),
        v9);
      v6 = v9[0];
      *((_BYTE *)a1 + 137) = 1;
    }
    else
    {
      v6 = a1[22];
    }
    v7 = *((unsigned int *)a1 + 39);
    v8 = *a1;
    v9[0] = v6 & ~a1[23] | a1[23] & *a2;
    ((void (__fastcall *)(_QWORD, __int64))qword_140014978)(*(unsigned int *)(v8 + 84), v7);
    a1[22] = v9[0];
  }
}
