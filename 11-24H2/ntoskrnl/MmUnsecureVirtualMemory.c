/*
 * XREFs of MmUnsecureVirtualMemory @ 0x1408E51C0
 * Callers:
 *     RtlFileMapFree @ 0x1404B5148 (RtlFileMapFree.c)
 *     DifMmUnsecureVirtualMemoryWrapper @ 0x1406350F0 (DifMmUnsecureVirtualMemoryWrapper.c)
 *     AlpcpForceUnlinkSecureView @ 0x140741D24 (AlpcpForceUnlinkSecureView.c)
 *     VmpUnsecureMemoryForPin @ 0x14079F88C (VmpUnsecureMemoryForPin.c)
 *     AslpFilePartialViewFree @ 0x1408106D0 (AslpFilePartialViewFree.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1408926D0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x140894200 (AlpcpPrepareViewForDelivery.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     AlpcpRestoreWriteAccess @ 0x1408E48E8 (AlpcpRestoreWriteAccess.c)
 *     AlpcViewDestroyProcedure @ 0x1408E49A0 (AlpcViewDestroyProcedure.c)
 *     sub_1409E067C @ 0x1409E067C (sub_1409E067C.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A5115C (MmStoreAllocateVirtualMemory.c)
 *     VmUnsecureBackingMemory @ 0x140AAD430 (VmUnsecureBackingMemory.c)
 *     MmInitializeImageViewExtension @ 0x140C541D0 (MmInitializeImageViewExtension.c)
 * Callees:
 *     MiObtainReferencedSecureVad @ 0x140262864 (MiObtainReferencedSecureVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiRemoveSecureEntry @ 0x1404F1C5C (MiRemoveSecureEntry.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  _QWORD *v1; // rbx
  ULONG_PTR v2; // rax
  void *v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v1 = (_QWORD *)((unsigned __int64)SecureHandle ^ qword_140E2DA80 ^ (__int64)KeGetCurrentThread()->ApcState.Process);
  v2 = MiObtainReferencedSecureVad((ULONG_PTR)v1, &v4);
  v3 = (void *)v2;
  if ( v2 )
  {
    MiRemoveSecureEntry(v2, v1);
    MiUnlockAndDereferenceVad(v3);
  }
}
