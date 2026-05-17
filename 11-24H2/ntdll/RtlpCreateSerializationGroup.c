/*
 * XREFs of RtlpCreateSerializationGroup @ 0x180097970
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800991AC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpCreateSerializationGroup(int a1)
{
  __int64 *i; // rax
  __int64 *v3; // rbx
  __int64 result; // rax
  volatile signed __int32 **v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r14
  volatile signed __int32 *v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rbx
  __int64 **v13; // rax
  __int64 *v14; // rdx

  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_1801CE200 + 48));
  for ( i = *(__int64 **)(qword_1801CE200 + 32); i != (__int64 *)(qword_1801CE200 + 32); i = (__int64 *)*i )
  {
    v3 = i - 1;
    if ( *((_DWORD *)i + 8) == a1 )
    {
      if ( _InterlockedIncrement64(v3 + 4) <= 1 )
        __fastfail(0xEu);
      RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_1801CE200 + 48));
      return (__int64)v3;
    }
  }
  RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_1801CE200 + 48));
  result = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x30uLL);
  v7 = result;
  if ( result )
  {
    *(_QWORD *)(result + 4) = 0LL;
    *(_QWORD *)(result + 12) = 0LL;
    *(_DWORD *)(result + 20) = 0;
    *(_DWORD *)(result + 44) = 0;
    *(_DWORD *)result = 3148051;
    *(_QWORD *)(result + 24) = 0LL;
    v8 = (volatile signed __int32 *)(qword_1801CE200 + 48);
    *(_DWORD *)(result + 40) = a1;
    *(_QWORD *)(result + 32) = 1LL;
    RtlAcquireSRWLockExclusive(v8, v5, v6);
    v9 = qword_1801CE200;
    v10 = *(__int64 **)(qword_1801CE200 + 32);
    v11 = qword_1801CE200 + 32;
    while ( v10 != (__int64 *)v11 )
    {
      v12 = v10 - 1;
      if ( *((_DWORD *)v10 + 8) == a1 )
      {
        if ( _InterlockedIncrement64(v12 + 4) <= 1 )
          __fastfail(0xEu);
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801CE200 + 48));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
        return (__int64)v12;
      }
      v10 = (__int64 *)*v10;
    }
    v13 = *(__int64 ***)(qword_1801CE200 + 40);
    v14 = (__int64 *)(v7 + 8);
    if ( *v13 != (__int64 *)v11 )
      __fastfail(3u);
    *v14 = v11;
    *(_QWORD *)(v7 + 16) = v13;
    *v13 = v14;
    *(_QWORD *)(v11 + 8) = v14;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v9 + 48));
    return v7;
  }
  return result;
}
