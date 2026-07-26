/*
 * XREFs of ?ndisUnbindAdapterWorkItem@@YAXPEAX@Z @ 0x1400B8570
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006B10 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1400B840C (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisUnbindAdapterWorkItem(_QWORD *P)
{
  struct _NDIS_OPEN_BLOCK *v1; // rbx

  v1 = (struct _NDIS_OPEN_BLOCK *)P[4];
  ndisUnbindAdapterInner(v1);
  ndisMDereferenceOpenUnlocked((__int64)v1, 0x12u);
  ExFreePoolWithTag(P, 0);
}
