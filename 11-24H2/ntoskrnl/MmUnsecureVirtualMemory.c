/*
 * XREFs of MmUnsecureVirtualMemory @ 0x140896BF0
 * Callers:
 *     RtlFileMapFree @ 0x1404AF948 (RtlFileMapFree.c)
 *     DifMmUnsecureVirtualMemoryWrapper @ 0x1406336B0 (DifMmUnsecureVirtualMemoryWrapper.c)
 *     AlpcpForceUnlinkSecureView @ 0x14073FC54 (AlpcpForceUnlinkSecureView.c)
 *     VmpUnsecureMemoryForPin @ 0x14079F99C (VmpUnsecureMemoryForPin.c)
 *     AslpFilePartialViewFree @ 0x140810E10 (AslpFilePartialViewFree.c)
 *     AlpcpRestoreWriteAccess @ 0x140896794 (AlpcpRestoreWriteAccess.c)
 *     AlpcpPrepareViewForDelivery @ 0x140896848 (AlpcpPrepareViewForDelivery.c)
 *     AlpcViewDestroyProcedure @ 0x140897790 (AlpcViewDestroyProcedure.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14089BCC0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     MmStoreAllocateVirtualMemory @ 0x1409145E8 (MmStoreAllocateVirtualMemory.c)
 *     sub_1409DA42C @ 0x1409DA42C (sub_1409DA42C.c)
 *     VmUnsecureBackingMemory @ 0x140AA84B0 (VmUnsecureBackingMemory.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 *     MmInitializeImageViewExtension @ 0x140C56360 (MmInitializeImageViewExtension.c)
 * Callees:
 *     MiObtainReferencedSecureVad @ 0x140292568 (MiObtainReferencedSecureVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiRemoveSecureEntry @ 0x1404EF6FC (MiRemoveSecureEntry.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  __int64 v1; // r8
  __int64 v2; // r9
  _QWORD *v3; // rbx
  ULONG_PTR v4; // rax
  void *v5; // rdi
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v3 = (_QWORD *)((unsigned __int64)SecureHandle ^ qword_140E2DBC0 ^ (__int64)KeGetCurrentThread()->ApcState.Process);
  v4 = MiObtainReferencedSecureVad((ULONG_PTR)v3, &v6, v1, v2);
  v5 = (void *)v4;
  if ( v4 )
  {
    MiRemoveSecureEntry(v4, v3);
    MiUnlockAndDereferenceVad(v5);
  }
}
