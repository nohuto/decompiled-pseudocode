/*
 * XREFs of RtlpCallSecureMemoryCallbacks @ 0x1800B8EAC
 * Callers:
 *     RtlpSecMemFreeVirtualMemory @ 0x1800B8DC0 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlFlushSecureMemoryCache @ 0x1800E15A0 (RtlFlushSecureMemoryCache.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall RtlpCallSecureMemoryCallbacks(__int64 a1, __int64 a2)
{
  char v4; // r14
  char *v5; // rsi
  _DWORD *v6; // rbx
  __int64 *v7; // rdi
  bool v8; // zf
  __int64 **v9; // rax
  __int64 *v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v16; // [rsp+28h] [rbp-8h]

  v16 = &v15;
  v15 = (__int64)&v15;
  v4 = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpSecMemLock);
  v5 = (char *)RtlpSecMemListHead;
  if ( RtlpSecMemListHead != (_UNKNOWN *)&RtlpSecMemListHead )
  {
    do
    {
      v6 = v5 + 16;
      v7 = (__int64 *)v5;
      ++*((_DWORD *)v5 + 4);
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      if ( (*((unsigned __int8 (__fastcall **)(__int64, __int64))v5 + 3))(a1, a2) )
        v4 = 1;
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpSecMemLock);
      v8 = (*v6)-- == 1;
      v5 = *(char **)v5;
      if ( v8 )
      {
        if ( *((__int64 **)v5 + 1) != v7
          || (v9 = (__int64 **)v7[1], *v9 != v7)
          || (*v9 = (__int64 *)v5, *((_QWORD *)v5 + 1) = v9, v10 = v16, (__int64 *)*v16 != &v15) )
        {
LABEL_15:
          __fastfail(3u);
        }
        v7[1] = (__int64)v16;
        *v7 = (__int64)&v15;
        *v10 = (__int64)v7;
        v16 = v7;
      }
    }
    while ( v5 != (char *)&RtlpSecMemListHead );
  }
  RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
  while ( 1 )
  {
    v12 = v15;
    if ( (__int64 *)v15 == &v15 )
      return v4;
    if ( *(__int64 **)(v15 + 8) != &v15 )
      goto LABEL_15;
    v13 = *(_QWORD *)v15;
    if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 )
      goto LABEL_15;
    v15 = *(_QWORD *)v15;
    *(_QWORD *)(v13 + 8) = &v15;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12, v11);
  }
}
