/*
 * XREFs of NtMapUserPhysicalPagesScatter @ 0x1407EA520
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiWriteAwePtes @ 0x1403FBB7C (MiWriteAwePtes.c)
 *     MiPageChainCount @ 0x140464C78 (MiPageChainCount.c)
 *     MiLockAwePagesShared @ 0x1404AE710 (MiLockAwePagesShared.c)
 *     MiFreePhysicalPageChain @ 0x1404B3ADC (MiFreePhysicalPageChain.c)
 *     MiUnlockAweVadsShared @ 0x1404BBD6C (MiUnlockAweVadsShared.c)
 *     MiLockAweVadsShared @ 0x1404C43BC (MiLockAweVadsShared.c)
 *     MiGetAweNode @ 0x1404F293C (MiGetAweNode.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140677250 (MiReferenceIncomingPhysicalPages.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiCaptureUlongPtrArray @ 0x1407E9474 (MiCaptureUlongPtrArray.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtMapUserPhysicalPagesScatter(
        PVOID *VirtualAddresses,
        ULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray)
{
  unsigned __int64 *Pool; // rsi
  struct _KTHREAD *CurrentThread; // r12
  ULONG_PTR v9; // rbx
  __int64 v10; // r13
  unsigned __int64 *v11; // r14
  ULONG_PTR v12; // rdx
  NTSTATUS v13; // edi
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rbx
  ULONG_PTR v16; // r15
  _QWORD *AweNode; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // r11d
  unsigned __int64 *v22; // rbx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r9
  _QWORD *v25; // rax
  int v26; // eax
  ULONG_PTR v27; // rbx
  ULONG_PTR v28; // [rsp+40h] [rbp-2088h]
  int v29; // [rsp+48h] [rbp-2080h]
  unsigned __int64 v30; // [rsp+50h] [rbp-2078h]
  __int64 v31; // [rsp+58h] [rbp-2070h]
  __int128 v32; // [rsp+60h] [rbp-2068h] BYREF
  __int64 v33; // [rsp+70h] [rbp-2058h]
  _BYTE P[4096]; // [rsp+80h] [rbp-2048h] BYREF
  char v35; // [rsp+1080h] [rbp-1048h] BYREF

  memset_0(P, 0, sizeof(P));
  v33 = 0LL;
  v32 = 0LL;
  if ( NumberOfPages > 0xFFFFFFFFFFFFFLL )
    return -1073741584;
  v28 = 0LL;
  Pool = (unsigned __int64 *)P;
  CurrentThread = KeGetCurrentThread();
  v9 = NumberOfPages;
  v10 = 0LL;
  v11 = 0LL;
  if ( NumberOfPages > 0x200 )
  {
    v12 = 16 * NumberOfPages;
    if ( !UserPfnArray )
      v12 = 8 * NumberOfPages;
    Pool = (unsigned __int64 *)MiAllocatePool(0x40uLL, v12, 2001890637);
    if ( !Pool )
      return -1073741670;
  }
  v13 = MiCaptureUlongPtrArray(Pool, (unsigned int *)VirtualAddresses, NumberOfPages);
  if ( v13 < 0 )
    goto LABEL_41;
  if ( !NumberOfPages )
    return 0;
  if ( UserPfnArray )
  {
    v11 = (unsigned __int64 *)&v35;
    if ( NumberOfPages > 0x200 )
      v11 = &Pool[v9];
    v13 = MiCaptureUlongPtrArray(v11, (unsigned int *)UserPfnArray, NumberOfPages);
    if ( v13 < 0 )
      goto LABEL_41;
  }
  v14 = &Pool[v9];
  v15 = *Pool;
  v13 = 0;
  v30 = (unsigned __int64)v14;
  v28 = MiLockAweVadsShared((__int64)CurrentThread);
  v16 = v28;
  AweNode = MiGetAweNode(v15);
  if ( AweNode && (AweNode[5] & 3) == 0 )
  {
    v18 = AweNode[4];
    v10 = (__int64)AweNode;
    v29 = *(_DWORD *)(AweNode[3] + 48LL) & 0x4200000;
    v19 = MiPageChainCount(v18);
    v31 = v19;
    v21 = -1073741585;
    v22 = Pool;
    while ( 1 )
    {
      v23 = *v22;
      if ( v19 == 1 )
      {
        v24 = *v22;
      }
      else
      {
        if ( (((v19 << 12) - 1) & v23) != 0 )
          goto LABEL_40;
        v24 = (v19 << 12) + v23 - 1;
      }
      if ( v23 < (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12
        || v24 > (((*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) << 12) | 0xFFF) )
      {
        v25 = MiGetAweNode(*v22);
        if ( !v25 || (v25[5] & 3) != 0 || v25[4] != v18 )
        {
LABEL_40:
          v13 = v21;
          goto LABEL_41;
        }
        v20 = v25[3];
        v26 = *(_DWORD *)(v20 + 48) & 0x4200000;
        if ( v29 == 69206016 )
        {
          if ( v26 != 69206016 )
            v13 = v21;
        }
        else if ( v26 == 69206016 )
        {
          v13 = v21;
        }
      }
      if ( (unsigned __int64)++v22 >= v30 )
        break;
      v19 = v31;
    }
    v27 = MiLockAwePagesShared(v18, (__int64)CurrentThread);
    if ( !v11
      || (v13 = MiReferenceIncomingPhysicalPages(
                  v18,
                  (__int64)v11,
                  NumberOfPages,
                  (__int64)Pool,
                  (__int64)&v32,
                  v10,
                  0LL),
          v13 >= 0) )
    {
      MiWriteAwePtes(v10, (__int64)v11, NumberOfPages, (__int64)Pool, 0LL, 1, (__int64)&v32);
    }
    if ( v27 )
      MiUnlockAweVadsShared((__int64)CurrentThread, v27);
LABEL_41:
    v16 = v28;
    goto LABEL_42;
  }
  v13 = -1073741585;
LABEL_42:
  if ( (_QWORD)v32 )
    MiFreePhysicalPageChain(*(_QWORD *)(v10 + 32), (_QWORD **)&v32);
  if ( v16 )
    MiUnlockAweVadsShared((__int64)CurrentThread, v16);
  if ( Pool != (unsigned __int64 *)P )
    ExFreePoolWithTag(Pool, 0);
  return v13;
}
