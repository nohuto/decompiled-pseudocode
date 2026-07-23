/*
 * XREFs of RtlpHeapTrkTrackRemoveHeap @ 0x1800FD438
 * Callers:
 *     RtlpCallInterceptRoutine @ 0x18004F6D0 (RtlpCallInterceptRoutine.c)
 *     RtlpHeapTrkInterceptor @ 0x180090400 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800907E0 (RtlpHeapTrkDereferenceStack.c)
 */

PVOID *__fastcall RtlpHeapTrkTrackRemoveHeap(__int64 a1)
{
  unsigned int v2; // edi
  _QWORD **v3; // r9
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx
  bool v7; // zf
  void **v8; // r8
  _QWORD *v9; // rdx
  _QWORD *v10; // rbx
  PVOID *result; // rax
  _QWORD *v12; // rcx
  PVOID *v13; // rax
  _DWORD *v14; // rcx
  PVOID BaseAddress[3]; // [rsp+20h] [rbp-18h] BYREF

  BaseAddress[1] = BaseAddress;
  v2 = 0;
  BaseAddress[0] = BaseAddress;
  do
  {
    RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801D0820 + 8LL * (v2 & 0xF)));
    v3 = (_QWORD **)(16LL * v2 + qword_1801D0280);
    v4 = *v3;
    while ( v4 != v3 )
    {
      v5 = (_QWORD *)*v4;
      v6 = v4;
      v7 = v4[2] == a1;
      v4 = (_QWORD *)*v4;
      if ( v7 )
      {
        if ( (_QWORD *)v5[1] != v6
          || (v8 = (void **)v6[1], *v8 != v6)
          || (*v8 = v5, v5[1] = v8, v9 = BaseAddress[0], *((PVOID **)BaseAddress[0] + 1) != BaseAddress) )
        {
LABEL_13:
          __fastfail(3u);
        }
        *v6 = BaseAddress[0];
        v6[1] = BaseAddress;
        v9[1] = v6;
        BaseAddress[0] = v6;
      }
    }
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801D0820 + 8LL * (v2++ & 0xF)));
  }
  while ( v2 < 0x1EEF );
  while ( 1 )
  {
    v10 = BaseAddress[0];
    result = BaseAddress;
    if ( BaseAddress[0] == BaseAddress )
      return result;
    v12 = *(_QWORD **)BaseAddress[0];
    if ( *(PVOID *)(*(_QWORD *)BaseAddress[0] + 8LL) != BaseAddress[0] )
      goto LABEL_13;
    v13 = (PVOID *)*((_QWORD *)BaseAddress[0] + 1);
    if ( *v13 != BaseAddress[0] )
      goto LABEL_13;
    *v13 = v12;
    v12[1] = v13;
    v14 = (_DWORD *)v10[4];
    if ( v14 )
    {
      RtlpHeapTrkDereferenceStack(v14);
      v10[4] = 0LL;
    }
    RtlFreeHeap(HeapHandle, 0, v10);
  }
}
