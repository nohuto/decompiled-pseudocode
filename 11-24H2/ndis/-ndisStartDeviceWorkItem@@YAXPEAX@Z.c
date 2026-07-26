/*
 * XREFs of ?ndisStartDeviceWorkItem@@YAXPEAX@Z @ 0x14005ED50
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14005F1F0 (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 */

void __fastcall ndisStartDeviceWorkItem(_QWORD *P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx
  struct _IRP *v3; // rdi

  v1 = (struct _NDIS_MINIPORT_BLOCK *)P[4];
  v3 = (struct _IRP *)P[5];
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v3->IoStatus.Status = ndisStartDeviceSynchronous(v1, v3);
  IofCompleteRequest(v3, 0);
  ExFreePoolWithTag(P, 0);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
}
