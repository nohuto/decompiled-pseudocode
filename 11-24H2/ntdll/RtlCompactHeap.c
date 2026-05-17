/*
 * XREFs of RtlCompactHeap @ 0x180043EC0
 * Callers:
 *     RtlDebugCompactHeap @ 0x18011EBF8 (RtlDebugCompactHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpCoalesceHeap @ 0x180044000 (RtlpCoalesceHeap.c)
 *     RtlpHpHeapCompact @ 0x180050D34 (RtlpHpHeapCompact.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHeapExceptionFilter @ 0x18010A4D0 (RtlpHeapExceptionFilter.c)
 *     RtlDebugCompactHeap @ 0x18011EBF8 (RtlDebugCompactHeap.c)
 */

__int64 __fastcall RtlCompactHeap(char *Src, int a2)
{
  int v3; // edx
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  struct _TEB *v8; // rbx
  char v9; // [rsp+20h] [rbp-18h]
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v9 = 0;
  if ( *((_DWORD *)Src + 4) == -571548178 )
  {
    RtlpHpHeapCompact(Src, 0LL);
    return 16LL;
  }
  else
  {
    v3 = *((_DWORD *)Src + 29) | a2;
    if ( (v3 & 0x61000000) != 0 && (v3 & 0x10000000) == 0 )
    {
      return RtlDebugCompactHeap(Src);
    }
    else
    {
      v5 = 0LL;
      v10 = 0LL;
      if ( (v3 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((_QWORD *)Src + 44));
        v9 = 1;
      }
      v6 = RtlpCoalesceHeap(Src);
      if ( v6 )
      {
        v5 = 16LL * *(unsigned __int16 *)(v6 + 8);
        v10 = v5;
        if ( *((_DWORD *)Src + 31) )
        {
          *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
          *(_DWORD *)(v6 + 8) ^= *((_DWORD *)Src + 34);
        }
      }
      if ( *((char **)Src + 30) != Src + 240 )
      {
        v7 = *((_QWORD *)Src + 31);
        if ( *(_QWORD *)(v7 + 40) > v5 )
          v5 = *(_QWORD *)(v7 + 40);
        v10 = v5;
      }
      if ( !v5 )
      {
        v8 = NtCurrentTeb();
        v8->LastStatusValue = 0;
        v8->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0LL);
        v5 = v10;
      }
      if ( v9 )
        RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
      return v5;
    }
  }
}
