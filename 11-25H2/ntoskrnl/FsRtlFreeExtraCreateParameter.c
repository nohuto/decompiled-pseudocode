/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x1408EFDB0
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140371E50 (IopDeleteFileObjectExtension.c)
 *     FsRtlpAttachOplockKey @ 0x140375F60 (FsRtlpAttachOplockKey.c)
 *     IopGraftName @ 0x140862214 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x1408EBA30 (IopSymlinkUpdateECP.c)
 *     PspCreateUserProcessEcp @ 0x1408ECC28 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1408EDAA0 (IopSymlinkAllocateAndAddECP.c)
 *     IopCreateFile @ 0x1408EE530 (IopCreateFile.c)
 *     IopCleanupExtraCreateParameters @ 0x1408EF8F0 (IopCleanupExtraCreateParameters.c)
 *     FsRtlpCleanupEcps @ 0x1408EF9C0 (FsRtlpCleanupEcps.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1408EFBD0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1403D3020 (ExFreeToPagedLookasideList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1408EFE78 (IopSymlinkFreeRelatedMountPointChain.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameter(PVOID EcpContext)
{
  void (__stdcall *v1)(PVOID, LPCGUID); // rax
  __int64 v2; // rdi
  struct _NPAGED_LOOKASIDE_LIST *v4; // rcx
  char *v5; // rdx

  v1 = (void (__stdcall *)(PVOID, LPCGUID))*((_QWORD *)EcpContext - 4);
  v2 = 0LL;
  if ( v1 )
  {
    if ( v1 == IopSymlinkCleanupECP )
      IopSymlinkFreeRelatedMountPointChain(EcpContext);
    else
      guard_dispatch_icall_no_overrides(EcpContext);
  }
  if ( (*((_DWORD *)EcpContext - 6) & 0x20) != 0 && FltMgrCallbacks )
  {
    v2 = *((_QWORD *)EcpContext - 1);
    guard_dispatch_icall_no_overrides(v2);
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
    guard_dispatch_icall_no_overrides(v2);
}
