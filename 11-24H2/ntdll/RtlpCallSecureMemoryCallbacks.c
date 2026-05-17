/*
 * XREFs of RtlpCallSecureMemoryCallbacks @ 0x18008FB2C
 * Callers:
 *     RtlpSecMemFreeVirtualMemory @ 0x18008FA40 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlFlushSecureMemoryCache @ 0x1800E44E0 (RtlFlushSecureMemoryCache.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall RtlpCallSecureMemoryCallbacks(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  char v5; // r14
  char *v6; // rsi
  _DWORD *v7; // rbx
  unsigned __int64 *v8; // rdi
  volatile signed __int32 **v9; // rdx
  unsigned __int64 v10; // r8
  bool v11; // zf
  unsigned __int64 **v12; // rax
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 *v18; // [rsp+28h] [rbp-8h]

  v18 = &v17;
  v17 = (unsigned __int64)&v17;
  v5 = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpSecMemLock, a2, a3);
  v6 = (char *)RtlpSecMemListHead;
  if ( RtlpSecMemListHead != (_UNKNOWN *)&RtlpSecMemListHead )
  {
    do
    {
      v7 = v6 + 16;
      v8 = (unsigned __int64 *)v6;
      ++*((_DWORD *)v6 + 4);
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      if ( (*((unsigned __int8 (__fastcall **)(__int64, volatile signed __int32 **))v6 + 3))(a1, a2) )
        v5 = 1;
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpSecMemLock, v9, v10);
      v11 = (*v7)-- == 1;
      v6 = *(char **)v6;
      if ( v11 )
      {
        if ( *((unsigned __int64 **)v6 + 1) != v8
          || (v12 = (unsigned __int64 **)v8[1], *v12 != v8)
          || (*v12 = (unsigned __int64 *)v6, *((_QWORD *)v6 + 1) = v12, v13 = v18, (unsigned __int64 *)*v18 != &v17) )
        {
LABEL_15:
          __fastfail(3u);
        }
        v8[1] = (unsigned __int64)v18;
        *v8 = (unsigned __int64)&v17;
        *v13 = (unsigned __int64)v8;
        v18 = v8;
      }
    }
    while ( v6 != (char *)&RtlpSecMemListHead );
  }
  RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
  while ( 1 )
  {
    v14 = v17;
    if ( (unsigned __int64 *)v17 == &v17 )
      return v5;
    if ( *(unsigned __int64 **)(v17 + 8) != &v17 )
      goto LABEL_15;
    v15 = *(_QWORD *)v17;
    if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 )
      goto LABEL_15;
    v17 = *(_QWORD *)v17;
    *(_QWORD *)(v15 + 8) = &v17;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
  }
}
