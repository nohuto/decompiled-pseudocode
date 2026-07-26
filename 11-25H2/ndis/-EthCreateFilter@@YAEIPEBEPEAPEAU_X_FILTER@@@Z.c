/*
 * XREFs of ?EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z @ 0x14006DAE0
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     NdisAllocateRWLock @ 0x14006E390 (NdisAllocateRWLock.c)
 */

unsigned __int8 __fastcall EthCreateFilter(unsigned int a1, const unsigned __int8 *a2, struct _X_FILTER **a3)
{
  __int64 Pool2; // rax
  __int64 v7; // rbp
  PNDIS_RW_LOCK_EX RWLock; // rax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  void *v12; // rcx
  __int64 v14; // rax
  void *v15; // rcx
  __int64 v16; // rax

  *a3 = 0LL;
  if ( !is_mul_ok(6u, a1) )
    return 0;
  Pool2 = ExAllocatePool2(64LL, 408LL, 1718633550);
  *a3 = (struct _X_FILTER *)Pool2;
  v7 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 336) = *(_DWORD *)a2;
    *(_WORD *)(Pool2 + 340) = *((_WORD *)a2 + 2);
    *(_DWORD *)(Pool2 + 344) = a1;
    RWLock = NdisAllocateRWLock(&ndisDummyObject);
    *(_QWORD *)(v7 + 288) = RWLock;
    if ( RWLock )
    {
      v9 = *(_DWORD *)(v7 + 344);
      if ( !v9 )
        return 1;
      v10 = ExAllocatePool2(66LL, (unsigned int)(6 * v9), 1634092110);
      *(_QWORD *)(v7 + 376) = v10;
      if ( v10 )
      {
        v11 = ExAllocatePool2(66LL, (unsigned int)(6 * *(_DWORD *)(v7 + 344)), 1634092110);
        *(_QWORD *)(v7 + 392) = v11;
        if ( !v11 )
        {
          v12 = *(void **)(v7 + 376);
LABEL_8:
          ExFreePoolWithTag(v12, 0);
          goto LABEL_9;
        }
        v14 = ExAllocatePool2(66LL, (unsigned int)(6 * *(_DWORD *)(v7 + 344)), 1634092110);
        *(_QWORD *)(v7 + 352) = v14;
        if ( !v14 )
        {
          v15 = *(void **)(v7 + 376);
LABEL_14:
          ExFreePoolWithTag(v15, 0);
          v12 = *(void **)(v7 + 392);
          goto LABEL_8;
        }
        v16 = ExAllocatePool2(66LL, (unsigned int)(6 * *(_DWORD *)(v7 + 344)), 1634092110);
        *(_QWORD *)(v7 + 360) = v16;
        if ( !v16 )
        {
          ExFreePoolWithTag(*(PVOID *)(v7 + 376), 0);
          v15 = *(void **)(v7 + 352);
          goto LABEL_14;
        }
        return 1;
      }
    }
LABEL_9:
    ExFreePoolWithTag((PVOID)v7, 0);
    *a3 = 0LL;
  }
  return 0;
}
