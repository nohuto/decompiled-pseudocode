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

_QWORD *__fastcall RtlpHeapTrkTrackRemoveHeap(__int64 a1)
{
  unsigned int v2; // edi
  _QWORD **v3; // r9
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  bool v7; // zf
  _QWORD *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rbx
  _QWORD *result; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v16[1] = v16;
  v2 = 0;
  v16[0] = v16;
  do
  {
    RtlAcquireSRWLockExclusive(*(volatile signed __int32 **)(qword_1801D0820 + 8LL * (v2 & 0xF)));
    v3 = (_QWORD **)(16LL * v2 + qword_1801D0280);
    v4 = *v3;
    while ( v4 != v3 )
    {
      v5 = *v4;
      v6 = v4;
      v7 = v4[2] == a1;
      v4 = (_QWORD *)*v4;
      if ( v7 )
      {
        if ( *(_QWORD **)(v5 + 8) != v6
          || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6)
          || (*v8 = v5, *(_QWORD *)(v5 + 8) = v8, v9 = v16[0], *(_QWORD **)(v16[0] + 8LL) != v16) )
        {
LABEL_13:
          __fastfail(3u);
        }
        *v6 = v16[0];
        v6[1] = v16;
        *(_QWORD *)(v9 + 8) = v6;
        v16[0] = v6;
      }
    }
    RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801D0820 + 8LL * (v2++ & 0xF)));
  }
  while ( v2 < 0x1EEF );
  while ( 1 )
  {
    v11 = v16[0];
    result = v16;
    if ( (_QWORD *)v16[0] == v16 )
      return result;
    v13 = *(_QWORD *)v16[0];
    if ( *(_QWORD *)(*(_QWORD *)v16[0] + 8LL) != v16[0] )
      goto LABEL_13;
    v14 = *(_QWORD **)(v16[0] + 8LL);
    if ( *v14 != v16[0] )
      goto LABEL_13;
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    v15 = *(_QWORD *)(v11 + 32);
    if ( v15 )
    {
      RtlpHeapTrkDereferenceStack(v15);
      *(_QWORD *)(v11 + 32) = 0LL;
    }
    RtlFreeHeap(qword_1801D0840, 0, v11, v10);
  }
}
