/*
 * XREFs of PspRemoveQuotaBlock @ 0x1409C59F0
 * Callers:
 *     ObpFreeObject @ 0x140842C80 (ObpFreeObject.c)
 *     PsReturnSharedPoolQuota @ 0x140856970 (PsReturnSharedPoolQuota.c)
 *     PspDereferenceQuotaBlock @ 0x1409C57F0 (PspDereferenceQuotaBlock.c)
 * Callees:
 *     PspLockQuotaListExclusive @ 0x1404C78E4 (PspLockQuotaListExclusive.c)
 *     PspUnlockQuotaListExclusive @ 0x1404C91A0 (PspUnlockQuotaListExclusive.c)
 */

__int64 __fastcall PspRemoveQuotaBlock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v2; // rdi
  volatile signed __int64 *v3; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 **v7; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = (__int64 *)(a1 + 520);
  v3 = (volatile signed __int64 *)PspQuotaBlockTable;
  v5 = *(_QWORD *)(a1 + 520);
  PspLockQuotaListExclusive((__int64)CurrentThread, (unsigned __int64 *)PspQuotaBlockTable);
  if ( v5 == 1 )
  {
    if ( a1 == PspDefaultQuotaBlock )
      PspDefaultQuotaBlock = 0LL;
  }
  else
  {
    v6 = *v2;
    if ( *v2 )
    {
      if ( *(__int64 **)(v6 + 8) != v2 || (v7 = (__int64 **)v2[1], *v7 != v2) )
        __fastfail(3u);
      *v7 = (__int64 *)v6;
      *(_QWORD *)(v6 + 8) = v7;
    }
  }
  return PspUnlockQuotaListExclusive((__int64)CurrentThread, v3);
}
