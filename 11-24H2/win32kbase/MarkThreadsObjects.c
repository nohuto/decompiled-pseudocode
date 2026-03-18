/*
 * XREFs of MarkThreadsObjects @ 0x14009E070
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMChangeOwnerThreadWorker @ 0x1401B6138 (HMChangeOwnerThreadWorker.c)
 */

__int64 __fastcall MarkThreadsObjects(__int64 a1)
{
  __int64 UserSessionState; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  unsigned __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // rbx
  _QWORD *i; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx

  UserSessionState = W32GetUserSessionState(a1);
  v3 = *(_QWORD *)(UserSessionState + 19944);
  v5 = v3 + 32LL * *(unsigned int *)(W32GetUserSessionState(v4) + 19872);
  result = W32GetUserSessionState(v6);
  v8 = *(_QWORD *)(UserSessionState + 19944);
  for ( i = *(_QWORD **)(result + 19888); v8 <= v5; i += 5 )
  {
    v10 = *(unsigned __int8 *)(v8 + 24);
    if ( (_BYTE)v10 )
    {
      result = 3 * v10;
      if ( (*((_BYTE *)&unk_1402437BC + 24 * v10) & 2) == 0 && i[1] == a1 )
      {
        if ( (_BYTE)v10 == 23 )
          v11 = *(_QWORD *)(W32GetUserSessionState(v10) + 36440);
        else
          v11 = *(_QWORD *)(W32GetUserSessionState(v10) + 18704);
        result = HMChangeOwnerThreadWorker(*i, v11);
      }
    }
    v8 += 32LL;
  }
  return result;
}
