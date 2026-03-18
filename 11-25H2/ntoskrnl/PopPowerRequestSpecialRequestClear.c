/*
 * XREFs of PopPowerRequestSpecialRequestClear @ 0x140862D30
 * Callers:
 *     PopPowerRequestActionInfo @ 0x140862028 (PopPowerRequestActionInfo.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PsReleaseProcessWakeCounter @ 0x1408B0AE0 (PsReleaseProcessWakeCounter.c)
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
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerRequestLock);
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
    PopReleaseRwLock(&PopPowerRequestLock);
    if ( v7 )
    {
      if ( v6 )
        PsReleaseProcessWakeCounter(v6, a1);
      ObfDereferenceObjectWithTag(v5, 0x72506F50u);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
