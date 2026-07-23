/*
 * XREFs of FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1408AB690
 * Callers:
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1408AAEC0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1408AB7E0 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402E2DD0 (ExAllocateFromNPagedLookasideList.c)
 *     ExAllocateFromPagedLookasideList @ 0x1403EFFF0 (ExAllocateFromPagedLookasideList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall FsRtlAllocateExtraCreateParameterFromLookasideList(
        LPCGUID EcpType,
        ULONG SizeOfContext,
        FSRTL_ALLOCATE_ECP_FLAGS Flags,
        PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
        PVOID LookasideList,
        PVOID *EcpContext)
{
  ULONG v6; // ebp
  int v7; // esi
  ULONG v10; // r9d
  char *v11; // rax
  GUID v12; // xmm0
  NTSTATUS v14; // ebx
  __int64 v15; // rax
  ULONG_PTR v16; // rcx
  __int64 Pool2; // rax
  GUID v18; // xmm0

  v6 = SizeOfContext + 72;
  v7 = 66;
  v10 = *((_DWORD *)LookasideList + 10);
  if ( (Flags & 2) == 0 )
    v7 = 2;
  if ( v6 > *((_DWORD *)LookasideList + 11) )
  {
    v14 = 0;
    *EcpContext = 0LL;
    if ( v6 < 0x48 )
      return -1073741675;
    v15 = 64LL;
    if ( (Flags & 2) == 0 )
      v15 = 256LL;
    v16 = (unsigned int)v15 | 1LL;
    if ( (Flags & 1) == 0 )
      v16 = v15;
    Pool2 = ExAllocatePool2(v16, v6, v10);
    if ( !Pool2 )
      return -1073741670;
    *(_QWORD *)Pool2 = 1215324997LL;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 8) = 0LL;
    v18 = *EcpType;
    *(_QWORD *)(Pool2 + 40) = CleanupCallback;
    *(_DWORD *)(Pool2 + 48) = v7;
    *(GUID *)(Pool2 + 24) = v18;
    *(_DWORD *)(Pool2 + 52) = v6;
    *(_QWORD *)(Pool2 + 56) = 0LL;
    *(_QWORD *)(Pool2 + 64) = 0LL;
    *EcpContext = (PVOID)(Pool2 + 72);
    return v14;
  }
  else
  {
    if ( (Flags & 2) != 0 )
      v11 = (char *)ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)LookasideList);
    else
      v11 = (char *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)LookasideList);
    if ( v11 )
    {
      *(_QWORD *)v11 = 1215324997LL;
      *((_QWORD *)v11 + 2) = 0LL;
      *((_QWORD *)v11 + 1) = 0LL;
      v12 = *EcpType;
      *((_QWORD *)v11 + 5) = CleanupCallback;
      *((_DWORD *)v11 + 12) = v7;
      *(GUID *)(v11 + 24) = v12;
      *((_DWORD *)v11 + 13) = v6;
      *((_QWORD *)v11 + 7) = LookasideList;
      *((_QWORD *)v11 + 8) = 0LL;
      *EcpContext = v11 + 72;
      return 0;
    }
    else
    {
      *EcpContext = 0LL;
      return -1073741670;
    }
  }
}
