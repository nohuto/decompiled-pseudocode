/*
 * XREFs of RtlpProcessHeapsRemove @ 0x1800B9024
 * Callers:
 *     RtlDestroyHeap @ 0x1800B8900 (RtlDestroyHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

struct _PEB *__fastcall RtlpProcessHeapsRemove(__int64 a1)
{
  struct _PEB *result; // rax
  __int64 v3; // r9
  _QWORD *v4; // r8
  __int64 v5; // rcx
  _QWORD *v6; // rax

  result = NtCurrentPeb();
  if ( result->ProcessHeap != (void *)a1 )
  {
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
    if ( *(_DWORD *)(a1 + 16) == -571548178 )
      v4 = *(_QWORD **)(a1 + 56);
    else
      v4 = *(_QWORD **)(a1 + 392);
    if ( v4 )
    {
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      if ( *(_DWORD *)(a1 + 16) == -571548178 )
        *(_QWORD *)(a1 + 56) = 0LL;
      else
        *(_QWORD *)(a1 + 392) = 0LL;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v4, v3);
    }
    return (struct _PEB *)RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
  }
  return result;
}
