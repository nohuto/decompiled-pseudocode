/*
 * XREFs of RtlpHeapTrkTrackRemoveHeap @ 0x1800FB208
 * Callers:
 *     RtlpCallInterceptRoutine @ 0x1800280E0 (RtlpCallInterceptRoutine.c)
 *     RtlpHeapTrkInterceptor @ 0x18003CA10 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpHeapTrkDereferenceStack @ 0x18003CDF0 (RtlpHeapTrkDereferenceStack.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

_QWORD *__fastcall RtlpHeapTrkTrackRemoveHeap(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  unsigned int v4; // edi
  _QWORD **v5; // r9
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  bool v9; // zf
  _QWORD *v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  _QWORD *result; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int64 v16; // rcx
  _QWORD v17[3]; // [rsp+20h] [rbp-18h] BYREF

  v17[1] = v17;
  v4 = 0;
  v17[0] = v17;
  do
  {
    RtlAcquireSRWLockExclusive(*(volatile signed __int32 **)(qword_1801CE7E8 + 8LL * (v4 & 0xF)), a2, a3);
    v5 = (_QWORD **)(16LL * v4 + qword_1801CE280);
    v6 = *v5;
    while ( v6 != v5 )
    {
      v7 = *v6;
      v8 = v6;
      v9 = v6[2] == a1;
      v6 = (_QWORD *)*v6;
      if ( v9 )
      {
        if ( *(_QWORD **)(v7 + 8) != v8
          || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8)
          || (*v10 = v7, *(_QWORD *)(v7 + 8) = v10, v11 = v17[0], *(_QWORD **)(v17[0] + 8LL) != v17) )
        {
LABEL_13:
          __fastfail(3u);
        }
        *v8 = v17[0];
        v8[1] = v17;
        *(_QWORD *)(v11 + 8) = v8;
        v17[0] = v8;
      }
    }
    RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801CE7E8 + 8LL * (v4++ & 0xF)));
  }
  while ( v4 < 0x1EEF );
  while ( 1 )
  {
    v12 = v17[0];
    result = v17;
    if ( (_QWORD *)v17[0] == v17 )
      return result;
    v14 = *(_QWORD *)v17[0];
    if ( *(_QWORD *)(*(_QWORD *)v17[0] + 8LL) != v17[0] )
      goto LABEL_13;
    v15 = *(_QWORD **)(v17[0] + 8LL);
    if ( *v15 != v17[0] )
      goto LABEL_13;
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    v16 = *(_QWORD *)(v12 + 32);
    if ( v16 )
    {
      RtlpHeapTrkDereferenceStack(v16);
      *(_QWORD *)(v12 + 32) = 0LL;
    }
    RtlFreeHeap(qword_1801CE808, 0, v12);
  }
}
