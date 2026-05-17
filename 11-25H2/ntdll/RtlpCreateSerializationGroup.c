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

__int64 __fastcall RtlpCreateSerializationGroup(int a1)
{
  __int64 *i; // rax
  __int64 *v3; // rbx
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // rbx
  __int64 **v11; // rax
  __int64 *v12; // rdx

  RtlAcquireSRWLockShared(qword_1801D0200 + 48);
  for ( i = *(__int64 **)(qword_1801D0200 + 32); i != (__int64 *)(qword_1801D0200 + 32); i = (__int64 *)*i )
  {
    v3 = i - 1;
    if ( *((_DWORD *)i + 8) == a1 )
    {
      if ( _InterlockedIncrement64(v3 + 4) <= 1 )
        __fastfail(0xEu);
      RtlReleaseSRWLockShared(qword_1801D0200 + 48);
      return (__int64)v3;
    }
  }
  RtlReleaseSRWLockShared(qword_1801D0200 + 48);
  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
  v5 = result;
  if ( result )
  {
    *(_QWORD *)(result + 4) = 0LL;
    *(_QWORD *)(result + 12) = 0LL;
    *(_DWORD *)(result + 20) = 0;
    *(_DWORD *)(result + 44) = 0;
    *(_DWORD *)result = 3148051;
    *(_QWORD *)(result + 24) = 0LL;
    v6 = qword_1801D0200 + 48;
    *(_DWORD *)(result + 40) = a1;
    *(_QWORD *)(result + 32) = 1LL;
    RtlAcquireSRWLockExclusive(v6);
    v7 = qword_1801D0200;
    v8 = *(__int64 **)(qword_1801D0200 + 32);
    v9 = qword_1801D0200 + 32;
    while ( v8 != (__int64 *)v9 )
    {
      v10 = v8 - 1;
      if ( *((_DWORD *)v8 + 8) == a1 )
      {
        if ( _InterlockedIncrement64(v10 + 4) <= 1 )
          __fastfail(0xEu);
        RtlReleaseSRWLockExclusive(qword_1801D0200 + 48);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v5);
        return (__int64)v10;
      }
      v8 = (__int64 *)*v8;
    }
    v11 = *(__int64 ***)(qword_1801D0200 + 40);
    v12 = (__int64 *)(v5 + 8);
    if ( *v11 != (__int64 *)v9 )
      __fastfail(3u);
    *v12 = v9;
    *(_QWORD *)(v5 + 16) = v11;
    *v11 = v12;
    *(_QWORD *)(v9 + 8) = v12;
    RtlReleaseSRWLockExclusive(v7 + 48);
    return v5;
  }
  return result;
}
