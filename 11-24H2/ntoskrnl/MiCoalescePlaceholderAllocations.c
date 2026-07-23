/*
 * XREFs of MiCoalescePlaceholderAllocations @ 0x1408DA56C
 * Callers:
 *     MmFreeVirtualMemory @ 0x1408D9AD0 (MmFreeVirtualMemory.c)
 * Callees:
 *     MiDecrementVadsBeingDeleted @ 0x140229A10 (MiDecrementVadsBeingDeleted.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiRemoveVad @ 0x1402907F8 (MiRemoveVad.c)
 *     MiGetNextVad @ 0x140291ACC (MiGetNextVad.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140292770 (MiReferenceVad.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiSetVadDeleted @ 0x140360BE0 (MiSetVadDeleted.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiUnlockVadRange @ 0x1408D9210 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408D92F0 (MiLockVadRange.c)
 *     MiCheckSecuredVad @ 0x1408DBE18 (MiCheckSecuredVad.c)
 */

__int64 __fastcall MiCoalescePlaceholderAllocations(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v7; // r12
  struct _LIST_ENTRY *Address; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 NextVad; // rdi
  unsigned __int64 v11; // rbx
  unsigned int i; // r15d
  _QWORD *v13; // rdi
  unsigned __int64 v14; // r14
  _QWORD *v15; // r15
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // ebx
  unsigned __int8 *v19; // rbx
  _QWORD *v21; // rbx
  _QWORD *v22; // r14
  unsigned __int64 v23; // rbp
  __int64 v24; // rbp
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v7 = MiLockVadRange(a1, a2, a3 & 0xFFFFFFFFFFFFF000uLL, 1);
  if ( v7 < 2 )
    goto LABEL_12;
  Address = MiLocateAddress(a2);
  v9 = (unsigned __int64)Address;
  if ( (LODWORD(Address[1].Blink) | ((unsigned __int64)LOBYTE(Address[2].Flink) << 32)) << 12 != a2 )
    goto LABEL_12;
  NextVad = (unsigned __int64)Address;
  v11 = (unsigned __int64)Address;
  for ( i = 0; i < v7; ++i )
  {
    if ( (*(unsigned int *)(NextVad + 52) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 34) << 32)) != 0x7FFFFFFFDLL )
      goto LABEL_12;
    if ( (*(_DWORD *)(NextVad + 48) & 8) != 0 )
    {
      v18 = MiCheckSecuredVad(
              NextVad,
              *(_DWORD *)(NextVad + 24) << 12,
              (*(_DWORD *)(NextVad + 28) - *(_DWORD *)(NextVad + 24) + 1) << 12,
              85,
              a4,
              0LL);
      if ( v18 < 0 )
        goto LABEL_13;
    }
    v11 = NextVad;
    NextVad = MiGetNextVad(NextVad);
  }
  if ( (((*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) << 12) | 0xFFF) == a3 )
  {
    v13 = (_QWORD *)MiGetNextVad(v9);
    v14 = MiGetNextVad((unsigned __int64)v13);
    MiReferenceVad((__int64)v13);
    MiRemoveVad((__int64)v13, 0, 0LL);
    MiSetVadDeleted((__int64)v13);
    for ( *v13 = 0LL; ; *v13 = v15 )
    {
      v15 = v13;
      if ( v13 == (_QWORD *)v11 )
        break;
      v13 = (_QWORD *)v14;
      v16 = MiGetNextVad(v14);
      v17 = v14;
      v14 = v16;
      MiReferenceVad(v17);
      MiRemoveVad((__int64)v13, 0, 0LL);
      MiSetVadDeleted((__int64)v13);
    }
    v23 = a3 >> 12;
    *(_DWORD *)(v9 + 28) = v23;
    *(_BYTE *)(v9 + 33) = BYTE4(v23);
    v24 = *(_QWORD *)(a1 + 1040);
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 1000));
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
    v22 = v13;
    do
    {
      v21 = v22;
      v22 = (_QWORD *)*v22;
      if ( (_InterlockedExchangeAdd64(v21 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v21 + 5);
      KeAbPostRelease((ULONG_PTR)(v21 + 5));
    }
    while ( v22 );
    MiUnlockVad((__int64)CurrentThread, v9);
    while ( v13 )
    {
      v19 = (unsigned __int8 *)v13;
      v13 = (_QWORD *)*v13;
      MiLockVad((__int64)CurrentThread, (__int64)v19);
      MiDeleteVad(v19, 0LL);
    }
    MiDecrementVadsBeingDeleted(v24 + 768);
    return 0;
  }
  else
  {
LABEL_12:
    v18 = -1073741800;
LABEL_13:
    MiUnlockVadRange(a1, a2, v7, 1);
  }
  return (unsigned int)v18;
}
