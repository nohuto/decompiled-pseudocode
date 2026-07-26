/*
 * XREFs of ?ndisInitializeULongRef@@YAXPEAU_ULONG_REFERENCE@@@Z @ 0x14008C4F0
 * Callers:
 *     ?ndisMInitializeMiniportBlockFront@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1401868B0 (-ndisMInitializeMiniportBlockFront@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisInitializeULongRef(struct _ULONG_REFERENCE *a1)
{
  a1->Closing = 0;
  a1->ReferenceCount = 1;
  KeInitializeSpinLock(&a1->SpinLock);
}
