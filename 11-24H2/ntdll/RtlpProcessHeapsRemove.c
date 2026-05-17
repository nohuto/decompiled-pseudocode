/*
 * XREFs of RtlpProcessHeapsRemove @ 0x18008FCA4
 * Callers:
 *     RtlDestroyHeap @ 0x18008F580 (RtlDestroyHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
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
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
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
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v3);
    }
    return (struct _PEB *)RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
  }
  return result;
}
