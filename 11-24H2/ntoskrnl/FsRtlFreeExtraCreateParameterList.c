/*
 * XREFs of FsRtlFreeExtraCreateParameterList @ 0x1408A26C0
 * Callers:
 *     IopCleanupExtraCreateParameters @ 0x1408A2540 (IopCleanupExtraCreateParameters.c)
 *     FsRtlpCleanupEcps @ 0x1408A2610 (FsRtlpCleanupEcps.c)
 *     IopCreateFile @ 0x14096CD60 (IopCreateFile.c)
 *     PspCreateUserProcessEcp @ 0x14099DC68 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14099DED8 (IopSymlinkAllocateAndAddECP.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1403E03E0 (ExFreeToPagedLookasideList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1408A2AC8 (IopSymlinkFreeRelatedMountPointChain.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameterList(PECP_LIST EcpList)
{
  __int64 v1; // r8
  __int64 v2; // r9
  _LIST_ENTRY *p_EcpList; // rbx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v6; // rcx
  struct _LIST_ENTRY *v7; // r14
  struct _LIST_ENTRY *Blink; // rbp
  void (__stdcall *v9)(PVOID, LPCGUID); // rax
  struct _NPAGED_LOOKASIDE_LIST *v10; // rcx
  struct _LIST_ENTRY **p_Blink; // rdx
  __int64 v12; // rdx

  p_EcpList = &EcpList->EcpList;
  while ( 1 )
  {
    Flink = p_EcpList->Flink;
    if ( p_EcpList->Flink == p_EcpList )
      break;
    if ( Flink->Blink != p_EcpList || (v6 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    p_EcpList->Flink = v6;
    v7 = Flink + 4;
    v6->Blink = p_EcpList;
    Blink = 0LL;
    Flink->Blink = 0LL;
    Flink->Flink = 0LL;
    v9 = (void (__stdcall *)(PVOID, LPCGUID))Flink[2].Flink;
    if ( v9 )
    {
      if ( v9 == IopSymlinkCleanupECP )
        IopSymlinkFreeRelatedMountPointChain(v7);
      else
        guard_dispatch_icall_no_overrides(v7, &v7[-3], v1, v2);
    }
    if ( ((__int64)v7[-2].Blink & 0x20) != 0 && FltMgrCallbacks )
    {
      Blink = v7[-1].Blink;
      guard_dispatch_icall_no_overrides(Blink, v7, v1, v2);
    }
    v10 = (struct _NPAGED_LOOKASIDE_LIST *)v7[-1].Flink;
    if ( v10 )
    {
      p_Blink = &v7[-5].Blink;
      if ( ((__int64)v7[-2].Blink & 0x40) != 0 )
        ExFreeToNPagedLookasideList(v10, p_Blink);
      else
        ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)v10, p_Blink);
    }
    else
    {
      ExFreePoolWithTag(&v7[-5].Blink, 0);
    }
    if ( Blink )
      guard_dispatch_icall_no_overrides(Blink, v12, v1, v2);
  }
  if ( (EcpList->Flags & 4) != 0 )
    ExFreeToPagedLookasideList(&FsRtlEcpListLookaside, EcpList);
  else
    ExFreePoolWithTag(EcpList, 0);
}
