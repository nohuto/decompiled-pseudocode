/*
 * XREFs of RmSubscriptionRundown @ 0x1800052AC
 * Callers:
 *     RmpClientWnfDestroySubscription @ 0x180004DD0 (RmpClientWnfDestroySubscription.c)
 * Callees:
 *     CempListRemoveHeadAndClear @ 0x1800053B0 (CempListRemoveHeadAndClear.c)
 */

__int64 __fastcall RmSubscriptionRundown(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rdx
  __int64 result; // rax
  __int64 v5; // rcx
  void *v6; // rax
  __int64 *v7; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v8; // [rsp+28h] [rbp-8h]

  v7 = 0LL;
  v2 = *a1;
  if ( v2 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
  RtlAcquireSRWLockExclusive(a1 + 4);
  *((_DWORD *)a1 + 16) |= 4u;
  v3 = (__int64 *)a1[2];
  if ( v3 == a1 + 2 )
  {
    v8 = &v7;
    v7 = (__int64 *)&v7;
  }
  else
  {
    v8 = (_QWORD *)a1[3];
    v7 = v3;
    v3[1] = (__int64)&v7;
    *v8 = &v7;
    a1[3] = (__int64)(a1 + 2);
    a1[2] = (__int64)(a1 + 2);
  }
  while ( v7 != (__int64 *)&v7 )
  {
    v6 = (void *)CempListRemoveHeadAndClear(&v7);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  }
  result = RtlReleaseSRWLockExclusive(a1 + 4);
  v5 = a1[7];
  if ( v5 )
    return TpWaitForWork(v5, 0LL);
  return result;
}
