/*
 * XREFs of IopSymlinkPropagateToExtensionIfNeeded @ 0x1408AAEC0
 * Callers:
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x1403B4640 (IopAllocateFileObjectExtension.c)
 *     IopSymlinkRemoveECP @ 0x140436270 (IopSymlinkRemoveECP.c)
 *     IopSetTypeSpecificFoExtension @ 0x140443050 (IopSetTypeSpecificFoExtension.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408AB0A0 (FsRtlFreeExtraCreateParameter.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1408AB168 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1408AB5B0 (IopSymlinkInitializeSymlinkInfo.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1408AB690 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSymlinkPropagateToExtensionIfNeeded(__int64 a1, struct _ECP_LIST *a2, unsigned __int16 *a3)
{
  _WORD *v5; // rdi
  __int64 v6; // rax
  int FileObjectExtension; // esi
  _QWORD *v8; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbp
  unsigned int v13; // edi
  __int64 v14; // rdx
  int LookasideList; // [rsp+20h] [rbp-48h]
  __int16 v16; // [rsp+30h] [rbp-38h]
  __int16 v17; // [rsp+38h] [rbp-30h]
  __int16 v18; // [rsp+40h] [rbp-28h]
  PVOID EcpContext; // [rsp+78h] [rbp+10h] BYREF

  EcpContext = 0LL;
  v5 = 0LL;
  if ( a2 )
  {
    IopSymlinkRemoveECP(a2, &EcpContext);
    v5 = EcpContext;
    if ( EcpContext )
    {
      if ( (*((_BYTE *)EcpContext + 2) & 1) == 0 )
        goto LABEL_4;
      goto LABEL_15;
    }
  }
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
  {
LABEL_4:
    FileObjectExtension = 0;
    goto LABEL_5;
  }
  v11 = *(_QWORD *)(v6 + 208);
  if ( !v11 || (v12 = *(_QWORD *)(v11 + 48)) == 0 )
  {
    v5 = EcpContext;
    goto LABEL_4;
  }
  v13 = *(unsigned __int16 *)(v12 + 16) + *a3 + 2;
  if ( v13 >= 0xFFFF )
  {
    FileObjectExtension = -1073741562;
    goto LABEL_22;
  }
  FileObjectExtension = FsRtlAllocateExtraCreateParameterFromLookasideList(
                          &IopSymlinkECPGuid,
                          (unsigned __int16)v13 + 32,
                          0,
                          IopSymlinkCleanupECP,
                          &IopSymlinkInfoLookasideList,
                          &EcpContext);
  if ( FileObjectExtension < 0 )
  {
LABEL_22:
    v5 = EcpContext;
    goto LABEL_5;
  }
  v14 = v13 + 32;
  v5 = EcpContext;
  v18 = *(_WORD *)(v12 + 2);
  v17 = *(_WORD *)(v12 + 4);
  v16 = *(_WORD *)(v12 + 16);
  LOWORD(LookasideList) = 0;
  IopSymlinkInitializeSymlinkInfo(
    EcpContext,
    v14,
    *((_QWORD *)a3 + 1),
    *a3,
    LookasideList,
    *(_QWORD *)(v12 + 24),
    v16,
    v17,
    v18,
    0LL);
  *v5 = *(_WORD *)v12 + v5[8] - *(_WORD *)(v12 + 16);
LABEL_15:
  EcpContext = 0LL;
  FileObjectExtension = IopAllocateFileObjectExtension(a1, (__int64 **)&EcpContext, 0);
  if ( FileObjectExtension >= 0 )
  {
    FileObjectExtension = IopSetTypeSpecificFoExtension((__int64)EcpContext, 5u, (signed __int64)v5);
    if ( FileObjectExtension >= 0 )
    {
      IopSymlinkFreeRelatedMountPointChain(v5);
      return (unsigned int)FileObjectExtension;
    }
  }
LABEL_5:
  if ( v5 )
  {
    v8 = (_QWORD *)*((_QWORD *)v5 + 1);
    if ( v8 )
    {
      do
      {
        v10 = (_QWORD *)v8[1];
        ExFreePoolWithTag(v8, 0x69536F49u);
        v8 = v10;
      }
      while ( v10 );
    }
    *((_QWORD *)v5 + 1) = 0LL;
    FsRtlFreeExtraCreateParameter(v5);
  }
  return (unsigned int)FileObjectExtension;
}
