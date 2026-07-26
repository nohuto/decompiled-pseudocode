/*
 * XREFs of NdisMCloseLog @ 0x1400A1220
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

void __stdcall NdisMCloseLog(NDIS_HANDLE LogHandle)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx
  KIRQL v3; // dl
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)LogHandle;
  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
  v3 = NewIrql;
  v1->Log = 0LL;
  v1->MiniportThread = 0LL;
  KeReleaseSpinLock(&v1->Lock, v3);
  ExFreePoolWithTag(LogHandle, 0);
}
