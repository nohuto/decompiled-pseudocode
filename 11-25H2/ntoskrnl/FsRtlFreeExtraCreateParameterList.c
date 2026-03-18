/*
 * XREFs of FsRtlFreeExtraCreateParameterList @ 0x1408EFA70
 * Callers:
 *     PspCreateUserProcessEcp @ 0x1408ECC28 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1408EDAA0 (IopSymlinkAllocateAndAddECP.c)
 *     IopCleanupExtraCreateParameters @ 0x1408EF8F0 (IopCleanupExtraCreateParameters.c)
 *     FsRtlpCleanupEcps @ 0x1408EF9C0 (FsRtlpCleanupEcps.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1403D3020 (ExFreeToPagedLookasideList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1408EFE78 (IopSymlinkFreeRelatedMountPointChain.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameterList(PECP_LIST EcpList)
{
  _LIST_ENTRY *p_EcpList; // rbx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v4; // rcx
  struct _LIST_ENTRY *v5; // r14
  struct _LIST_ENTRY *Blink; // rbp
  void (__stdcall *v7)(PVOID, LPCGUID); // rax
  struct _NPAGED_LOOKASIDE_LIST *v8; // rcx
  struct _LIST_ENTRY **p_Blink; // rdx

  p_EcpList = &EcpList->EcpList;
  while ( 1 )
  {
    Flink = p_EcpList->Flink;
    if ( p_EcpList->Flink == p_EcpList )
      break;
    if ( Flink->Blink != p_EcpList || (v4 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    p_EcpList->Flink = v4;
    v5 = Flink + 4;
    v4->Blink = p_EcpList;
    Blink = 0LL;
    Flink->Blink = 0LL;
    Flink->Flink = 0LL;
    v7 = (void (__stdcall *)(PVOID, LPCGUID))Flink[2].Flink;
    if ( v7 )
    {
      if ( v7 == IopSymlinkCleanupECP )
        IopSymlinkFreeRelatedMountPointChain(v5);
      else
        guard_dispatch_icall_no_overrides(v5);
    }
    if ( ((__int64)v5[-2].Blink & 0x20) != 0 && FltMgrCallbacks )
    {
      Blink = v5[-1].Blink;
      guard_dispatch_icall_no_overrides(Blink);
    }
    v8 = (struct _NPAGED_LOOKASIDE_LIST *)v5[-1].Flink;
    if ( v8 )
    {
      p_Blink = &v5[-5].Blink;
      if ( ((__int64)v5[-2].Blink & 0x40) != 0 )
        ExFreeToNPagedLookasideList(v8, p_Blink);
      else
        ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)v8, p_Blink);
    }
    else
    {
      ExFreePoolWithTag(&v5[-5].Blink, 0);
    }
    if ( Blink )
      guard_dispatch_icall_no_overrides(Blink);
  }
  if ( (EcpList->Flags & 4) != 0 )
    ExFreeToPagedLookasideList(&FsRtlEcpListLookaside, EcpList);
  else
    ExFreePoolWithTag(EcpList, 0);
}
