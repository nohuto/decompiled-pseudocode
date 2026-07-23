/*
 * XREFs of PspGetNewSessionId @ 0x14077BADC
 * Callers:
 *     PsSessionCreate @ 0x1406F53F8 (PsSessionCreate.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14027BEE0 (RtlFindClearBitsAndSet.c)
 *     PspUnlockProcessListExclusive @ 0x1403C2F0C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403C350C (PspLockProcessListExclusive.c)
 *     MmMaximumUserSessionId @ 0x14068CE28 (MmMaximumUserSessionId.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 PspGetNewSessionId()
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG ClearBitsAndSet; // eax
  unsigned int v2; // r8d
  ULONG v3; // edi
  unsigned int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  unsigned int *Pool2; // rax
  unsigned int *v9; // rsi

  CurrentThread = KeGetCurrentThread();
  PspLockProcessListExclusive((__int64)CurrentThread);
  ClearBitsAndSet = RtlFindClearBitsAndSet(&PspSessionIdBitmap, 1u, 0);
  v2 = -1;
  v3 = ClearBitsAndSet;
  if ( ClearBitsAndSet != -1 )
  {
LABEL_10:
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    return v3;
  }
  if ( PspSessionIdBitmap.SizeOfBitMap + 128 > PspSessionIdBitmap.SizeOfBitMap )
  {
    v6 = MmMaximumUserSessionId() & 0xFFFFFFC0;
    if ( v4 <= v6 )
      v6 = v4;
    if ( v6 > v5 )
    {
      v7 = v6 >> 3;
      Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL, v7, 0x73537350u);
      v9 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, PspSessionIdBitmap.Buffer, (unsigned __int64)PspSessionIdBitmap.SizeOfBitMap >> 3);
        if ( (__int128 *)PspSessionIdBitmap.Buffer != &PspSessionIdBuffer )
          ExFreePoolWithTag(PspSessionIdBitmap.Buffer, 0);
        PspSessionIdBitmap.Buffer = v9;
        PspSessionIdBitmap.SizeOfBitMap = 8 * v7;
        v3 = RtlFindClearBitsAndSet(&PspSessionIdBitmap, 1u, 0);
      }
      goto LABEL_10;
    }
  }
  return v2;
}
