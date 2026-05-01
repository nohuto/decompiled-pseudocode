/*
 * XREFs of ?ArManagerCreate@@YAJPEAU_TP_CALLBACK_ENVIRON_V3@@PEAPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180078064
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x1800778B0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CempLockInitialize @ 0x180040C1C (CempLockInitialize.c)
 *     CemRcTableInitialize @ 0x1800653C4 (CemRcTableInitialize.c)
 *     ?ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180078138 (-ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

__int64 __fastcall ArManagerCreate(struct _TP_CALLBACK_ENVIRON_V3 *a1, struct _ACTIVITY_RESTARTER **a2)
{
  struct _ACTIVITY_RESTARTER *Heap; // rax
  unsigned int v5; // ebx
  struct _ACTIVITY_RESTARTER *v6; // rdi
  int v7; // esi

  Heap = (struct _ACTIVITY_RESTARTER *)HampAllocateHeap(0x58uLL);
  v5 = 0;
  v6 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x58uLL);
    CemRcTableInitialize((__int64)HampHostIdStoreSessionDestroy, v6);
    CempLockInitialize((__int64)v6 + 48);
    v7 = HamConnectToServer(ArHamCallback, (char *)v6 + 80);
    if ( v7 < 0 || (v7 = TpAllocWork((char *)v6 + 64, ArCsStateChangeCallback, v6, a1), v7 < 0) )
    {
      ArManagerDestroy(v6);
      return (unsigned int)v7;
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
