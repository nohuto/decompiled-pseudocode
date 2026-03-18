/*
 * XREFs of PopPowerRequestSpecialRequestClear @ 0x140A150A4
 * Callers:
 *     PopPowerRequestActionInfo @ 0x140A14DA0 (PopPowerRequestActionInfo.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PsReleaseProcessWakeCounter @ 0x14088E750 (PsReleaseProcessWakeCounter.c)
 */

__int64 __fastcall PopPowerRequestSpecialRequestClear(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  void *v5; // rbp
  __int64 v6; // rsi
  char v7; // r14
  void *v8; // rax

  if ( a2 == 3 && *(_BYTE *)(a1 + 152) )
  {
    v5 = 0LL;
    v6 = 0LL;
    v7 = 0;
    PopAcquireRwLockExclusive(&PopPowerRequestLock);
    v8 = *(void **)(a1 + 136);
    if ( v8 )
    {
      v6 = *(_QWORD *)(a1 + 144);
      v7 = 1;
      *(_QWORD *)(a1 + 144) = 0LL;
      v5 = v8;
      *(_QWORD *)(a1 + 136) = 0LL;
      v3 = 0;
    }
    else
    {
      v3 = -1073741811;
    }
    PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
    if ( v7 )
    {
      if ( v6 )
        PsReleaseProcessWakeCounter(v6);
      ObfDereferenceObjectWithTag(v5, 0x72506F50u);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
