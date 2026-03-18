/*
 * XREFs of IopSymlinkAllocateAndAddECP @ 0x1408EDAA0
 * Callers:
 *     IopGraftName @ 0x140862214 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x1408EBA30 (IopSymlinkUpdateECP.c)
 *     IopSymlinkCreateECP @ 0x1408ED964 (IopSymlinkCreateECP.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x1403F2CC0 (ExAllocateFromPagedLookasideList.c)
 *     IoClearIrpExtraCreateParameter @ 0x140593250 (IoClearIrpExtraCreateParameter.c)
 *     IoSetIrpExtraCreateParameter @ 0x1408EBBD0 (IoSetIrpExtraCreateParameter.c)
 *     FsRtlInsertExtraCreateParameter @ 0x1408EDBB0 (FsRtlInsertExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1408EDCB0 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1408EFA70 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408EFDB0 (FsRtlFreeExtraCreateParameter.c)
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
