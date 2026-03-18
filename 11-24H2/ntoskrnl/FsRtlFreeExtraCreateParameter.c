/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x1408A2A00
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1403C3010 (IopDeleteFileObjectExtension.c)
 *     FsRtlpAttachOplockKey @ 0x14041D800 (FsRtlpAttachOplockKey.c)
 *     IopCleanupExtraCreateParameters @ 0x1408A2540 (IopCleanupExtraCreateParameters.c)
 *     FsRtlpCleanupEcps @ 0x1408A2610 (FsRtlpCleanupEcps.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1408A2820 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopCreateFile @ 0x14096CD60 (IopCreateFile.c)
 *     IopGraftName @ 0x14099D348 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x14099DACC (IopSymlinkUpdateECP.c)
 *     PspCreateUserProcessEcp @ 0x14099DC68 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14099DED8 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1403E03E0 (ExFreeToPagedLookasideList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1408A2AC8 (IopSymlinkFreeRelatedMountPointChain.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameter(PVOID EcpContext)
{
  __int64 v1; // r8
  __int64 v2; // r9
  void (__stdcall *v3)(PVOID, LPCGUID); // rax
  __int64 v4; // rdi
  struct _NPAGED_LOOKASIDE_LIST *v6; // rcx
  char *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  v3 = (void (__stdcall *)(PVOID, LPCGUID))*((_QWORD *)EcpContext - 4);
  v4 = 0LL;
  if ( v3 )
  {
    if ( v3 == IopSymlinkCleanupECP )
      IopSymlinkFreeRelatedMountPointChain(EcpContext);
    else
      guard_dispatch_icall_no_overrides(EcpContext, (char *)EcpContext - 48, v1, v2);
  }
  if ( (*((_DWORD *)EcpContext - 6) & 0x20) != 0 && FltMgrCallbacks )
  {
    v4 = *((_QWORD *)EcpContext - 1);
    guard_dispatch_icall_no_overrides(v4, EcpContext, v1, v2);
  }
  v6 = (struct _NPAGED_LOOKASIDE_LIST *)*((_QWORD *)EcpContext - 2);
  if ( v6 )
  {
    v7 = (char *)EcpContext - 72;
    if ( (*((_DWORD *)EcpContext - 6) & 0x40) != 0 )
      ExFreeToNPagedLookasideList(v6, v7);
    else
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)v6, v7);
  }
  else
  {
    ExFreePoolWithTag((char *)EcpContext - 72, 0);
  }
  if ( v4 )
    guard_dispatch_icall_no_overrides(v4, v8, v9, v10);
}
