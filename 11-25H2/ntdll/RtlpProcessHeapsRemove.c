/*
 * XREFs of RtlpProcessHeapsRemove @ 0x1800B9024
 * Callers:
 *     RtlDestroyHeap @ 0x1800B8900 (RtlDestroyHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

int __fastcall RtlpProcessHeapsRemove(__int64 a1)
{
  struct _PEB *v1; // rax
  _QWORD *v3; // r8
  __int64 v4; // rcx
  _QWORD *v5; // rax

  v1 = NtCurrentPeb();
  if ( v1->ProcessHeap != (void *)a1 )
  {
    RtlEnterCriticalSection(&RtlpProcessHeapsLock);
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
    LODWORD(v1) = RtlLeaveCriticalSection(&RtlpProcessHeapsLock);
  }
  return (int)v1;
}
