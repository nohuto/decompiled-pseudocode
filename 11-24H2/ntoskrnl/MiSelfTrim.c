/*
 * XREFs of MiSelfTrim @ 0x1402E1728
 * Callers:
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 * Callees:
 *     MiForcedTrim @ 0x1402D0EB8 (MiForcedTrim.c)
 *     MiReduceWs @ 0x1402E17C0 (MiReduceWs.c)
 */

unsigned __int64 __fastcall MiSelfTrim(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  unsigned __int64 result; // rax
  __int64 v7; // r8
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v9; // rdx
  unsigned __int64 v10; // r8

  v4 = a2;
  _m_prefetchw((const void *)(a1 + 188));
  v7 = *(_DWORD *)(a1 + 188) & 0xFFFFFFFE;
  result = (unsigned int)_InterlockedAnd((volatile signed __int32 *)(a1 + 188), 0xFFFFFFFE);
  if ( (result & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
    MiForcedTrim(a1, a2, v7, a4);
    result = *(unsigned int *)(a1 + 184);
    if ( (result & 0x40) != 0 )
    {
      result = *(_QWORD *)(a1 + 128);
      v10 = *(_QWORD *)(a1 + 120);
      if ( result > v10 )
      {
        LOBYTE(v9) = v4;
        result = MiReduceWs(a1, v9, v10 - 24);
      }
    }
    _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
  }
  return result;
}
