/*
 * XREFs of NtMapUserPhysicalPages @ 0x1407EA270
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiGetAweViewPageSize @ 0x1403FBB48 (MiGetAweViewPageSize.c)
 *     MiWriteAwePtes @ 0x1403FBB7C (MiWriteAwePtes.c)
 *     MiPageSizeToPteLevel @ 0x1403FD95C (MiPageSizeToPteLevel.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MiPageChainCount @ 0x140464C78 (MiPageChainCount.c)
 *     MiLockAwePagesShared @ 0x1404AE710 (MiLockAwePagesShared.c)
 *     MiFreePhysicalPageChain @ 0x1404B3ADC (MiFreePhysicalPageChain.c)
 *     MiUnlockAweVadsShared @ 0x1404BBD6C (MiUnlockAweVadsShared.c)
 *     MiLockAweVadsShared @ 0x1404C43BC (MiLockAweVadsShared.c)
 *     MiGetAweNode @ 0x1404F293C (MiGetAweNode.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140677250 (MiReferenceIncomingPhysicalPages.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiCaptureUlongPtrArray @ 0x1407E9474 (MiCaptureUlongPtrArray.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtMapUserPhysicalPages(PVOID VirtualAddress, ULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  unsigned int *v3; // r15
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v6; // rsi
  ULONG_PTR v7; // r13
  __int64 v8; // rbp
  _QWORD *Pool; // rdi
  NTSTATUS v10; // ebx
  _QWORD *AweNode; // rax
  __int64 v13; // rbx
  unsigned __int64 AweViewPageSize; // r9
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r11
  unsigned __int64 v18; // r8
  unsigned __int64 PteAddress; // rax
  int v20; // r10d
  bool i; // zf
  int v22; // r10d
  _QWORD *v23; // r15
  ULONG_PTR v24; // rsi
  __int128 v26; // [rsp+48h] [rbp-1060h] BYREF
  __int64 v27; // [rsp+58h] [rbp-1050h]
  _BYTE P[4096]; // [rsp+60h] [rbp-1048h] BYREF

  v27 = 0LL;
  v3 = (unsigned int *)UserPfnArray;
  v26 = 0LL;
  if ( NumberOfPages - 1 > 0xFFFFFFFFFFFFELL )
    return -1073741584;
  CurrentThread = KeGetCurrentThread();
  v6 = (unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL;
  v7 = 0LL;
  v8 = 0LL;
  Pool = 0LL;
  if ( !UserPfnArray )
    goto LABEL_6;
  if ( NumberOfPages > 0x200 )
  {
    Pool = (_QWORD *)MiAllocatePool(0x40uLL, 8 * NumberOfPages, 2001890637);
    if ( !Pool )
      return -1073741670;
  }
  else
  {
    Pool = P;
  }
  v10 = MiCaptureUlongPtrArray(Pool, v3, NumberOfPages);
  if ( v10 >= 0 )
  {
LABEL_6:
    v7 = MiLockAweVadsShared((__int64)CurrentThread);
    AweNode = MiGetAweNode(v6);
    v8 = (__int64)AweNode;
    if ( AweNode )
    {
      v13 = AweNode[4];
      AweViewPageSize = MiGetAweViewPageSize((__int64)AweNode);
      if ( !AweViewPageSize )
        AweViewPageSize = MiPageChainCount(v13);
      MiPageSizeToPteLevel(AweViewPageSize);
      if ( v16 == 1 || (((v15 << 12) - 1) & v6) == 0 )
      {
        v18 = v6 + ((v16 * NumberOfPages) << 12) - 1;
        if ( v18 <= v6 )
        {
          v10 = -1073741584;
          goto LABEL_27;
        }
        if ( v6 >= (*(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32)) << 12
          && v18 <= (((*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32)) << 12) | 0xFFF) )
        {
          PteAddress = MiGetPteAddress(v6);
          for ( i = v20 == 0; ; i = v22 == 1 )
          {
            v23 = (_QWORD *)PteAddress;
            if ( i )
              break;
            PteAddress = MiGetPteAddress(PteAddress);
          }
          v24 = MiLockAwePagesShared(v13, (__int64)CurrentThread);
          if ( !Pool
            || (v10 = MiReferenceIncomingPhysicalPages(
                        v13,
                        (__int64)Pool,
                        NumberOfPages,
                        0LL,
                        (__int64)&v26,
                        v8,
                        (__int64)v23),
                v10 >= 0) )
          {
            MiWriteAwePtes(v8, (__int64)Pool, NumberOfPages, 0LL, v23, 1, (__int64)&v26);
            v10 = 0;
          }
          if ( v24 )
            MiUnlockAweVadsShared((__int64)CurrentThread, v24);
          v3 = (unsigned int *)UserPfnArray;
          goto LABEL_27;
        }
      }
    }
    v10 = -1073741585;
  }
LABEL_27:
  if ( (_QWORD)v26 )
    MiFreePhysicalPageChain(*(_QWORD *)(v8 + 32), (_QWORD **)&v26);
  if ( v7 )
    MiUnlockAweVadsShared((__int64)CurrentThread, v7);
  if ( v3 )
  {
    if ( Pool != (_QWORD *)P )
      ExFreePoolWithTag(Pool, 0);
  }
  return v10;
}
