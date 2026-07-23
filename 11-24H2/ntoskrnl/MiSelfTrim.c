/*
 * XREFs of MiSelfTrim @ 0x140243008
 * Callers:
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 * Callees:
 *     MiReduceWs @ 0x1402430A0 (MiReduceWs.c)
 *     MiForcedTrim @ 0x1402F4A18 (MiForcedTrim.c)
 */

unsigned __int64 __fastcall MiSelfTrim(__int64 a1, char a2)
{
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // r8

  _m_prefetchw((const void *)(a1 + 188));
  result = (unsigned int)_InterlockedAnd((volatile signed __int32 *)(a1 + 188), 0xFFFFFFFE);
  if ( (result & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
    MiForcedTrim();
    result = *(unsigned int *)(a1 + 184);
    if ( (result & 0x40) != 0 )
    {
      result = *(_QWORD *)(a1 + 128);
      v7 = *(_QWORD *)(a1 + 120);
      if ( result > v7 )
      {
        LOBYTE(v6) = a2;
        result = MiReduceWs(a1, v6, v7 - 24);
      }
    }
    _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
  }
  return result;
}
