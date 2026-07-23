/*
 * XREFs of RtlpProcessHeapsRemove @ 0x180028028
 * Callers:
 *     RtlDestroyHeap @ 0x1800280C0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpReleaseHeapListLock @ 0x18002AA6C (RtlpReleaseHeapListLock.c)
 *     RtlpAcquireHeapListLock @ 0x18002AAB4 (RtlpAcquireHeapListLock.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 */

struct _PEB *__fastcall RtlpProcessHeapsRemove(__int64 a1)
{
  struct _PEB *result; // rax
  _QWORD *v3; // r8
  __int64 v4; // rcx
  _QWORD *v5; // rax

  result = NtCurrentPeb();
  if ( result->ProcessHeap != (void *)a1 )
  {
    RtlpAcquireHeapListLock();
    if ( *(_DWORD *)(a1 + 16) == -571548178 )
      v3 = *(_QWORD **)(a1 + 56);
    else
      v3 = *(_QWORD **)(a1 + 392);
    if ( v3 )
    {
      v4 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      if ( *(_DWORD *)(a1 + 16) == -571548178 )
        *(_QWORD *)(a1 + 56) = 0LL;
      else
        *(_QWORD *)(a1 + 392) = 0LL;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
    }
    return (struct _PEB *)RtlpReleaseHeapListLock(0LL);
  }
  return result;
}
