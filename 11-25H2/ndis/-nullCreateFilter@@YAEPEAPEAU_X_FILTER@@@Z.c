/*
 * XREFs of ?nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z @ 0x140098760
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     NdisFreeRWLock @ 0x1400171E0 (NdisFreeRWLock.c)
 *     NdisAllocateRWLock @ 0x14006E390 (NdisAllocateRWLock.c)
 */

__int64 __fastcall nullCreateFilter(struct _X_FILTER **a1)
{
  unsigned __int8 v2; // bl
  struct _NDIS_RW_LOCK_EX *RWLock; // rdi
  struct _X_FILTER *Pool2; // rax

  v2 = 0;
  RWLock = NdisAllocateRWLock(&ndisDummyObject);
  if ( RWLock )
  {
    Pool2 = (struct _X_FILTER *)ExAllocatePool2(64LL, 408LL, 1718633550);
    *a1 = Pool2;
    if ( Pool2 )
    {
      Pool2->BindListLock = RWLock;
      return 1;
    }
    else
    {
      NdisFreeRWLock(RWLock);
    }
  }
  return v2;
}
