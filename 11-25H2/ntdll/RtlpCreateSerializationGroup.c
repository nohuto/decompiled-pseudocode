/*
 * XREFs of RtlpCreateSerializationGroup @ 0x180002FE0
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18000481C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 *__fastcall RtlpCreateSerializationGroup(int a1)
{
  __int64 *i; // rax
  __int64 *v3; // rbx
  __int64 *result; // rax
  __int64 *v5; // r14
  _RTL_SRWLOCK *v6; // rcx
  _RTL_SRWLOCK *v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // rbx
  __int64 **v11; // rax
  __int64 *v12; // rdx

  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_1801D0200 + 48));
  for ( i = *(__int64 **)(qword_1801D0200 + 32); i != (__int64 *)(qword_1801D0200 + 32); i = (__int64 *)*i )
  {
    v3 = i - 1;
    if ( *((_DWORD *)i + 8) == a1 )
    {
      if ( _InterlockedIncrement64(v3 + 4) <= 1 )
        __fastfail(0xEu);
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_1801D0200 + 48));
      return v3;
    }
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_1801D0200 + 48));
  result = (__int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x30uLL);
  v5 = result;
  if ( result )
  {
    *(__int64 *)((char *)result + 4) = 0LL;
    *(__int64 *)((char *)result + 12) = 0LL;
    *((_DWORD *)result + 5) = 0;
    *((_DWORD *)result + 11) = 0;
    *(_DWORD *)result = 3148051;
    result[3] = 0LL;
    v6 = (_RTL_SRWLOCK *)(qword_1801D0200 + 48);
    *((_DWORD *)result + 10) = a1;
    result[4] = 1LL;
    RtlAcquireSRWLockExclusive(v6);
    v7 = (_RTL_SRWLOCK *)qword_1801D0200;
    v8 = *(__int64 **)(qword_1801D0200 + 32);
    v9 = qword_1801D0200 + 32;
    while ( v8 != (__int64 *)v9 )
    {
      v10 = v8 - 1;
      if ( *((_DWORD *)v8 + 8) == a1 )
      {
        if ( _InterlockedIncrement64(v10 + 4) <= 1 )
          __fastfail(0xEu);
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_1801D0200 + 48));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
        return v10;
      }
      v8 = (__int64 *)*v8;
    }
    v11 = *(__int64 ***)(qword_1801D0200 + 40);
    v12 = v5 + 1;
    if ( *v11 != (__int64 *)v9 )
      __fastfail(3u);
    *v12 = v9;
    v5[2] = (__int64)v11;
    *v11 = v12;
    *(_QWORD *)(v9 + 8) = v12;
    RtlReleaseSRWLockExclusive(v7 + 6);
    return v5;
  }
  return result;
}
