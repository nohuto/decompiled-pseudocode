/*
 * XREFs of MiResizeAweBitMap @ 0x1407FA110
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1407F8C38 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403C8474 (LOCK_ADDRESS_SPACE.c)
 *     RtlCopyBitMapEx @ 0x140411D50 (RtlCopyBitMapEx.c)
 *     MiLockAwePagesExclusive @ 0x140683A20 (MiLockAwePagesExclusive.c)
 *     MiUnlockAwePagesExclusive @ 0x14068429C (MiUnlockAwePagesExclusive.c)
 *     MiCreateAweInfoBitMap @ 0x1407F9B80 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweBitMap @ 0x1407F9DB8 (MiDeleteAweBitMap.c)
 */

__int64 __fastcall MiResizeAweBitMap(__int64 a1)
{
  unsigned __int64 v1; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR Process; // rbx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 result; // rax
  _OWORD *v13; // r14
  unsigned __int64 v14; // rdx
  __int128 v15; // xmm1
  _OWORD v16[4]; // [rsp+60h] [rbp+0h] BYREF

  v1 = (unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL;
  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(a1 + 8) & 1) != 0 )
    Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  else
    Process = 0LL;
  v5 = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_OWORD *)a1;
  v6 = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v5;
  v7 = *(_OWORD *)(a1 + 48);
  *(_OWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v6;
  v8 = *(_OWORD *)(a1 + 64);
  *(_OWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v7;
  v9 = *(_OWORD *)(a1 + 80);
  *(_OWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v8;
  v10 = *(_OWORD *)(a1 + 96);
  *(_OWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v9;
  v11 = *(_OWORD *)(a1 + 112);
  *(_OWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v10;
  *(_OWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v11;
  result = MiCreateAweInfoBitMap(v1 + 64);
  if ( (int)result >= 0 )
  {
    v13 = (_OWORD *)(a1 + 24);
    if ( Process )
    {
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
      if ( (*(_DWORD *)(Process + 500) & 0x20) != 0 )
      {
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
        MiDeleteAweBitMap(Process, v1 + 88);
        return 3221225738LL;
      }
    }
    MiLockAwePagesExclusive(a1, (__int64)CurrentThread);
    if ( *(_QWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) > *(_QWORD *)v13 )
    {
      RtlCopyBitMapEx((unsigned __int64 *)(a1 + 24), (_QWORD *)(v1 + 88), 0LL);
      v15 = *(_OWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
      *(_OWORD *)v1 = *v13;
      *v13 = v15;
      MiUnlockAwePagesExclusive(a1, (__int64)CurrentThread);
      if ( Process )
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
      if ( !*(_QWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
        return 0LL;
      v14 = (unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL;
    }
    else
    {
      MiUnlockAwePagesExclusive(a1, (__int64)CurrentThread);
      if ( Process )
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
      v14 = v1 + 88;
    }
    MiDeleteAweBitMap(Process, v14);
    return 0LL;
  }
  return result;
}
