/*
 * XREFs of CcInitializeNumaNodeForVolume @ 0x140430C98
 * Callers:
 *     CcInitializePrivateVolumeCacheMap @ 0x1404300DC (CcInitializePrivateVolumeCacheMap.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     ExAllocatePoolWithTagFromNode @ 0x140277180 (ExAllocatePoolWithTagFromNode.c)
 *     CcDeleteNumaNode @ 0x140430FB0 (CcDeleteNumaNode.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall CcInitializeNumaNodeForVolume(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4)
{
  char v6; // di
  __int64 v7; // rcx
  _QWORD *v8; // r15
  _DWORD *v9; // r14
  _DWORD *v10; // r12
  _DWORD *v11; // r13
  unsigned int v12; // ebp
  unsigned int v13; // eax
  __int64 PoolWithTagFromNode; // rax
  unsigned int v16; // ebp
  __int64 v17; // rax
  __int64 *v18; // rax
  unsigned int v19; // ebp
  __int64 v20; // rax
  __int64 *v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rax
  __int64 *v24; // rax

  v6 = 0;
  memset_0(a2, 0, 0x190uLL);
  v8 = a2 + 8;
  *a2 = 26215158;
  v9 = a2 + 14;
  a2[1] = 2;
  v10 = a2 + 34;
  *((_QWORD *)a2 + 2) = a1;
  v11 = a2 + 40;
  v12 = 0;
  *((_QWORD *)a2 + 1) = *(_QWORD *)(a1 + 32);
  a2[6] = a4;
  *((_QWORD *)a2 + 5) = a2 + 8;
  *((_QWORD *)a2 + 4) = a2 + 8;
  *((_QWORD *)a2 + 8) = a2 + 14;
  *((_QWORD *)a2 + 7) = a2 + 14;
  *((_QWORD *)a2 + 10) = a2 + 18;
  *((_QWORD *)a2 + 9) = a2 + 18;
  *((_QWORD *)a2 + 12) = a2 + 22;
  *((_QWORD *)a2 + 11) = a2 + 22;
  *((_QWORD *)a2 + 14) = a2 + 26;
  *((_QWORD *)a2 + 13) = a2 + 26;
  *((_QWORD *)a2 + 18) = a2 + 34;
  *((_QWORD *)a2 + 17) = a2 + 34;
  *((_QWORD *)a2 + 16) = a2 + 30;
  *((_QWORD *)a2 + 15) = a2 + 30;
  *((_QWORD *)a2 + 21) = a2 + 40;
  *((_QWORD *)a2 + 20) = a2 + 40;
  *((_QWORD *)a2 + 37) = a2 + 72;
  *((_QWORD *)a2 + 36) = a2 + 72;
  *((_QWORD *)a2 + 46) = a2 + 90;
  *((_QWORD *)a2 + 45) = a2 + 90;
  *((_QWORD *)a2 + 40) = a2 + 78;
  *((_QWORD *)a2 + 39) = a2 + 78;
  *((_QWORD *)a2 + 49) = a2 + 96;
  *((_QWORD *)a2 + 48) = a2 + 96;
  v13 = a4 | 0x80000000;
  while ( v12 < *(_DWORD *)(a1 + 776) )
  {
    PoolWithTagFromNode = ExAllocatePoolWithTagFromNode(v7, 0x50uLL, 0x71576343uLL, v13);
    v7 = PoolWithTagFromNode;
    if ( !PoolWithTagFromNode )
    {
LABEL_4:
      CcDeleteNumaNode(a2);
      return v6;
    }
    *(_DWORD *)(PoolWithTagFromNode + 32) = 1;
    v23 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(v7 + 36) = -1;
    *(_QWORD *)(v7 + 56) = v23;
    *(_QWORD *)(v7 + 64) = a1;
    *(_QWORD *)(v7 + 72) = a2;
    *(_DWORD *)(v7 + 40) = v12;
    *(_QWORD *)(v7 + 16) = CcWorkerThread;
    *(_QWORD *)(v7 + 24) = v7;
    *(_QWORD *)v7 = 0LL;
    v24 = (__int64 *)*((_QWORD *)a2 + 8);
    if ( (_DWORD *)*v24 != v9 )
      goto LABEL_10;
    *(_QWORD *)v7 = v9;
    ++v12;
    *(_QWORD *)(v7 + 8) = v24;
    *v24 = v7;
    v13 = a4 | 0x80000000;
    *((_QWORD *)a2 + 8) = v7;
  }
  v16 = 0;
  while ( v16 < *(_DWORD *)(a1 + 800) )
  {
    v17 = ExAllocatePoolWithTagFromNode(v7, 0x50uLL, 0x71576343uLL, v13);
    v7 = v17;
    if ( !v17 )
      goto LABEL_4;
    *(_DWORD *)(v17 + 32) = 2;
    *(_QWORD *)(v17 + 56) = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(v17 + 64) = a1;
    *(_QWORD *)(v17 + 72) = a2;
    *(_DWORD *)(v17 + 40) = v16;
    *(_DWORD *)(v17 + 36) = -1;
    *(_QWORD *)(v17 + 16) = CcWorkerThread;
    *(_QWORD *)(v17 + 24) = v17;
    *(_QWORD *)v17 = 0LL;
    v18 = (__int64 *)*((_QWORD *)a2 + 18);
    if ( (_DWORD *)*v18 != v10 )
      goto LABEL_10;
    *(_QWORD *)v7 = v10;
    ++v16;
    *(_QWORD *)(v7 + 8) = v18;
    *v18 = v7;
    v13 = a4 | 0x80000000;
    *((_QWORD *)a2 + 18) = v7;
  }
  v19 = 0;
  while ( v19 < *(_DWORD *)(a1 + 804) )
  {
    v20 = ExAllocatePoolWithTagFromNode(v7, 0x50uLL, 0x71576343uLL, v13);
    v7 = v20;
    if ( !v20 )
      goto LABEL_4;
    *(_DWORD *)(v20 + 32) = 5;
    *(_QWORD *)(v20 + 56) = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(v20 + 64) = a1;
    *(_QWORD *)(v20 + 72) = a2;
    *(_DWORD *)(v20 + 40) = v19;
    *(_DWORD *)(v20 + 36) = -1;
    *(_QWORD *)(v20 + 16) = CcCachemapUninitWorkerThread;
    *(_QWORD *)(v20 + 24) = v20;
    *(_QWORD *)v20 = 0LL;
    v21 = (__int64 *)*((_QWORD *)a2 + 21);
    if ( (_DWORD *)*v21 != v11 )
      goto LABEL_10;
    *(_QWORD *)v7 = v11;
    ++v19;
    *(_QWORD *)(v7 + 8) = v21;
    *v21 = v7;
    v13 = a4 | 0x80000000;
    *((_QWORD *)a2 + 21) = v7;
  }
  v22 = *(_QWORD **)(a1 + 56);
  if ( *v22 != a1 + 48 )
LABEL_10:
    __fastfail(3u);
  *((_QWORD *)a2 + 5) = v22;
  *v8 = a1 + 48;
  v6 = 1;
  *v22 = v8;
  *(_QWORD *)(a1 + 56) = v8;
  *(_QWORD *)(a1 + 8LL * a4 + 64) = a2;
  DbgPrintEx(
    0x7Fu,
    2u,
    "CcInitializeNumaNodeForVolume: Initialized NumaNode=%p(id:%lu %% #nodes:%lu), PrivateVCM=%p(vid:%2lx)\n",
    a2,
    a4,
    CcNumberNumaNodes,
    (const void *)a1,
    *(_DWORD *)(a1 + 24));
  return v6;
}
