/*
 * XREFs of NtMapUserPhysicalPagesScatter @ 0x1407FA3B0
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiFreePhysicalPageChain @ 0x1403CCA3C (MiFreePhysicalPageChain.c)
 *     MiPageChainCount @ 0x1404642D0 (MiPageChainCount.c)
 *     MiLockAwePagesShared @ 0x1404AF5B0 (MiLockAwePagesShared.c)
 *     MiWriteAwePtes @ 0x1404BA130 (MiWriteAwePtes.c)
 *     MiUnlockAweVadsShared @ 0x1404BB0AC (MiUnlockAweVadsShared.c)
 *     MiLockAweVadsShared @ 0x1404C2D68 (MiLockAweVadsShared.c)
 *     MiGetAweNode @ 0x1404F51EC (MiGetAweNode.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140682A70 (MiReferenceIncomingPhysicalPages.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiCaptureUlongPtrArray @ 0x1407F9304 (MiCaptureUlongPtrArray.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtMapUserPhysicalPagesScatter(unsigned int *a1, unsigned __int64 a2, unsigned int *a3)
{
  unsigned __int64 *Pool; // rsi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v9; // rbx
  __int64 v10; // r13
  unsigned __int64 *v11; // r14
  ULONG_PTR v12; // rdx
  int v13; // edi
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
  if ( a2 > 0xFFFFFFFFFFFFFLL )
    return 3221225712LL;
  v28 = 0LL;
  Pool = (unsigned __int64 *)P;
  CurrentThread = KeGetCurrentThread();
  v9 = a2;
  v10 = 0LL;
  v11 = 0LL;
  if ( a2 > 0x200 )
  {
    v12 = 16 * a2;
    if ( !a3 )
      v12 = 8 * a2;
    Pool = (unsigned __int64 *)MiAllocatePool(0x40uLL, v12, 2001890637);
    if ( !Pool )
      return 3221225626LL;
  }
  v13 = MiCaptureUlongPtrArray(Pool, a1, a2);
  if ( v13 < 0 )
    goto LABEL_41;
  if ( !a2 )
    return 0LL;
  if ( a3 )
  {
    v11 = (unsigned __int64 *)&v35;
    if ( a2 > 0x200 )
      v11 = &Pool[v9];
    v13 = MiCaptureUlongPtrArray(v11, a3, a2);
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
      || (v13 = MiReferenceIncomingPhysicalPages(v18, (__int64)v11, a2, (__int64)Pool, (__int64)&v32, v10, 0LL), v13 >= 0) )
    {
      MiWriteAwePtes(v10, (__int64)v11, a2, (__int64)Pool, 0LL, 1, (__int64)&v32);
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
  return (unsigned int)v13;
}
