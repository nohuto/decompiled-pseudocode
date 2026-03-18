/*
 * XREFs of MmUnsecureVirtualMemory @ 0x1408B48C0
 * Callers:
 *     RtlFileMapFree @ 0x1404B56A8 (RtlFileMapFree.c)
 *     DifMmUnsecureVirtualMemoryWrapper @ 0x140629130 (DifMmUnsecureVirtualMemoryWrapper.c)
 *     AlpcpForceUnlinkSecureView @ 0x140735D04 (AlpcpForceUnlinkSecureView.c)
 *     VmpUnsecureMemoryForPin @ 0x1407904CC (VmpUnsecureMemoryForPin.c)
 *     AslpFilePartialViewFree @ 0x140800B60 (AslpFilePartialViewFree.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1408AA7F0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x1408AF1C8 (AlpcpPrepareViewForDelivery.c)
 *     AlpcViewDestroyProcedure @ 0x1408B3AF0 (AlpcViewDestroyProcedure.c)
 *     AlpcpRestoreWriteAccess @ 0x1408B4984 (AlpcpRestoreWriteAccess.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     sub_1409E1778 @ 0x1409E1778 (sub_1409E1778.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A54708 (MmStoreAllocateVirtualMemory.c)
 *     VmUnsecureBackingMemory @ 0x140AA7F00 (VmUnsecureBackingMemory.c)
 *     MmInitializeImageViewExtension @ 0x140C42F58 (MmInitializeImageViewExtension.c)
 * Callees:
 *     MiRemoveSecureEntry @ 0x1402A34A0 (MiRemoveSecureEntry.c)
 *     MiObtainReferencedSecureVad @ 0x1402A6B28 (MiObtainReferencedSecureVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  _QWORD *v1; // rbx
  ULONG_PTR v2; // rax
  char *v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v1 = (_QWORD *)((unsigned __int64)SecureHandle ^ qword_140E2D840 ^ (__int64)KeGetCurrentThread()->ApcState.Process);
  v2 = MiObtainReferencedSecureVad((ULONG_PTR)v1, &v4);
  v3 = (char *)v2;
  if ( v2 )
  {
    MiRemoveSecureEntry(v2, v1);
    MiUnlockAndDereferenceVad(v3);
  }
}
