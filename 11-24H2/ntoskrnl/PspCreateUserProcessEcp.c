/*
 * XREFs of PspCreateUserProcessEcp @ 0x1408ABC48
 * Callers:
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x1403EFFF0 (ExAllocateFromPagedLookasideList.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1408AAD60 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408AB0A0 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlInsertExtraCreateParameter @ 0x1408AB8F0 (FsRtlInsertExtraCreateParameter.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspCreateUserProcessEcp(__int64 a1, __int64 a2)
{
  struct _ECP_LIST *v4; // rax
  struct _ECP_LIST *v5; // rdi
  _LIST_ENTRY *p_EcpList; // rax
  void *v7; // rsi
  __int64 Pool2; // rax
  NTSTATUS Parameter; // ebx

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 40;
  *(_QWORD *)(a1 + 32) = 1LL;
  v4 = (struct _ECP_LIST *)ExAllocateFromPagedLookasideList(&FsRtlEcpListLookaside);
  v5 = v4;
  if ( !v4 )
    return (unsigned int)-1073741670;
  p_EcpList = &v4->EcpList;
  v7 = 0LL;
  p_EcpList->Blink = p_EcpList;
  p_EcpList->Flink = p_EcpList;
  v5->Flags = 6;
  v5->Signature = 1282433861;
  Pool2 = ExAllocatePool2(0x100uLL, 0x58uLL, 0x70437350u);
  if ( Pool2 )
  {
    v7 = (void *)(Pool2 + 72);
    *(_QWORD *)Pool2 = 1215324997LL;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 8) = 0LL;
    *(GUID *)(Pool2 + 24) = GUID_ECP_CREATE_USER_PROCESS;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_DWORD *)(Pool2 + 48) = 2;
    *(_DWORD *)(Pool2 + 52) = 88;
    *(_QWORD *)(Pool2 + 56) = 0LL;
    *(_QWORD *)(Pool2 + 64) = 0LL;
    *(_DWORD *)(Pool2 + 72) = 16;
    *(_QWORD *)(Pool2 + 80) = a2;
    Parameter = FsRtlInsertExtraCreateParameter(v5, (PVOID)(Pool2 + 72));
    if ( Parameter >= 0 )
    {
      *(_QWORD *)(a1 + 8) = v5;
      return (unsigned int)Parameter;
    }
  }
  else
  {
    Parameter = -1073741670;
  }
  FsRtlFreeExtraCreateParameterList(v5);
  if ( v7 )
    FsRtlFreeExtraCreateParameter(v7);
  return (unsigned int)Parameter;
}
