/*
 * XREFs of IopSymlinkAllocateAndAddECP @ 0x14099DED8
 * Callers:
 *     IopGraftName @ 0x14099D348 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x14099DACC (IopSymlinkUpdateECP.c)
 *     IopSymlinkCreateECP @ 0x14099DD9C (IopSymlinkCreateECP.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x1403FA0E0 (ExAllocateFromPagedLookasideList.c)
 *     IoClearIrpExtraCreateParameter @ 0x140596900 (IoClearIrpExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1408A26C0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408A2A00 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlInsertExtraCreateParameter @ 0x14099DFE0 (FsRtlInsertExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14099E040 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     IoSetIrpExtraCreateParameter @ 0x14099E190 (IoSetIrpExtraCreateParameter.c)
 */

__int64 __fastcall IopSymlinkAllocateAndAddECP(PIRP Irp, PVOID *EcpContext, unsigned __int16 a3)
{
  struct _ECP_LIST *UserBuffer; // rbx
  char v4; // r14
  NTSTATUS ParameterFromLookasideList; // esi
  struct _ECP_LIST *v9; // rax
  struct _ECP_LIST *v10; // rdx
  _LIST_ENTRY *p_EcpList; // rax

  UserBuffer = 0LL;
  v4 = 0;
  *EcpContext = 0LL;
  if ( (Irp->Flags & 0x80u) != 0 )
    UserBuffer = (struct _ECP_LIST *)Irp->UserBuffer;
  ParameterFromLookasideList = FsRtlAllocateExtraCreateParameterFromLookasideList(
                                 &IopSymlinkECPGuid,
                                 a3 + 32,
                                 0,
                                 IopSymlinkCleanupECP,
                                 &IopSymlinkInfoLookasideList,
                                 EcpContext);
  if ( ParameterFromLookasideList >= 0 )
  {
    if ( UserBuffer )
      goto LABEL_5;
    v9 = (struct _ECP_LIST *)ExAllocateFromPagedLookasideList(&FsRtlEcpListLookaside);
    v10 = v9;
    if ( v9 )
    {
      p_EcpList = &v9->EcpList;
      UserBuffer = v10;
      p_EcpList->Blink = p_EcpList;
      p_EcpList->Flink = p_EcpList;
      v10->Flags = 6;
      v10->Signature = 1282433861;
      IoSetIrpExtraCreateParameter(Irp, v10);
      v4 = 1;
LABEL_5:
      ParameterFromLookasideList = FsRtlInsertExtraCreateParameter(UserBuffer, *EcpContext);
      if ( ParameterFromLookasideList >= 0 )
        return (unsigned int)ParameterFromLookasideList;
      goto LABEL_10;
    }
    ParameterFromLookasideList = -1073741670;
  }
LABEL_10:
  if ( *EcpContext )
  {
    *((_QWORD *)*EcpContext + 1) = 0LL;
    FsRtlFreeExtraCreateParameter(*EcpContext);
    *EcpContext = 0LL;
  }
  if ( v4 )
  {
    FsRtlFreeExtraCreateParameterList(UserBuffer);
    IoClearIrpExtraCreateParameter(Irp);
  }
  return (unsigned int)ParameterFromLookasideList;
}
