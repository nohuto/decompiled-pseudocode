/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x1408AB0A0
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1403B1BD0 (IopDeleteFileObjectExtension.c)
 *     FsRtlpAttachOplockKey @ 0x1403CD800 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx2 @ 0x1403CE7F0 (FsRtlCheckOplockEx2.c)
 *     IopCleanupExtraCreateParameters @ 0x1408AABE0 (IopCleanupExtraCreateParameters.c)
 *     FsRtlpCleanupEcps @ 0x1408AACB0 (FsRtlpCleanupEcps.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1408AAEC0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1408AB7E0 (IopSymlinkAllocateAndAddECP.c)
 *     IopSymlinkUpdateECP @ 0x1408ABA8C (IopSymlinkUpdateECP.c)
 *     PspCreateUserProcessEcp @ 0x1408ABC48 (PspCreateUserProcessEcp.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 *     IopGraftName @ 0x140A2F1E8 (IopGraftName.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1403C00D0 (ExFreeToPagedLookasideList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1408AB168 (IopSymlinkFreeRelatedMountPointChain.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameter(PVOID EcpContext)
{
  void (__stdcall *v1)(PVOID, LPCGUID); // rax
  __int64 v2; // rdi
  struct _NPAGED_LOOKASIDE_LIST *v4; // rcx
  char *v5; // rdx
  __int64 v6; // rdx

  v1 = (void (__stdcall *)(PVOID, LPCGUID))*((_QWORD *)EcpContext - 4);
  v2 = 0LL;
  if ( v1 )
  {
    if ( v1 == IopSymlinkCleanupECP )
      IopSymlinkFreeRelatedMountPointChain(EcpContext);
    else
      guard_dispatch_icall_no_overrides(EcpContext, (char *)EcpContext - 48);
  }
  if ( (*((_DWORD *)EcpContext - 6) & 0x20) != 0 && FltMgrCallbacks )
  {
    v2 = *((_QWORD *)EcpContext - 1);
    guard_dispatch_icall_no_overrides(v2, EcpContext);
  }
  v4 = (struct _NPAGED_LOOKASIDE_LIST *)*((_QWORD *)EcpContext - 2);
  if ( v4 )
  {
    v5 = (char *)EcpContext - 72;
    if ( (*((_DWORD *)EcpContext - 6) & 0x40) != 0 )
      ExFreeToNPagedLookasideList(v4, v5);
    else
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)v4, v5);
  }
  else
  {
    ExFreePoolWithTag((char *)EcpContext - 72, 0);
  }
  if ( v2 )
    guard_dispatch_icall_no_overrides(v2, v6);
}
