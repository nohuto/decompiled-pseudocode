/*
 * XREFs of ?ndisUnbindAdapterWorkItem@@YAXPEAX@Z @ 0x1400BF870
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A6A0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1400BF708 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisUnbindAdapterWorkItem(_QWORD *P)
{
  struct _NDIS_OPEN_BLOCK *v1; // rbx

  v1 = (struct _NDIS_OPEN_BLOCK *)P[4];
  ndisUnbindAdapterInner(v1);
  ndisMDereferenceOpenUnlocked((__int64)v1, 0x12u);
  ExFreePoolWithTag(P, 0);
}
