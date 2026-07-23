/*
 * XREFs of FsRtlpAttachOplockKey @ 0x1403CD800
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1409E0F60 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlOplockBreakH2 @ 0x140A294A0 (FsRtlOplockBreakH2.c)
 * Callees:
 *     IoSetOplockKeyContext @ 0x1403CE0DC (IoSetOplockKeyContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408AB0A0 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlFindExtraCreateParameter @ 0x140970D40 (FsRtlFindExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x140977BD0 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x140990A10 (FsRtlRemoveExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x140A133B0 (FsRtlAcknowledgeEcp.c)
 */

__int64 __fastcall FsRtlpAttachOplockKey(IRP *a1)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  _QWORD *FileObjectExtension; // r8
  __int64 v3; // rdx
  struct _ECP_LIST *v4; // rbx
  struct _ECP_LIST *v5; // rcx
  unsigned int v7; // edi
  PVOID EcpContext; // [rsp+20h] [rbp-28h] BYREF
  struct _ECP_LIST *ExtraCreateParameter[2]; // [rsp+28h] [rbp-20h] BYREF

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction )
    return 0LL;
  FileObjectExtension = CurrentStackLocation->FileObject->FileObjectExtension;
  if ( FileObjectExtension )
  {
    v3 = FileObjectExtension[7];
    if ( v3 )
    {
      if ( (*(_BYTE *)(v3 + 2) & 3) != 0 )
        return 0LL;
    }
  }
  EcpContext = 0LL;
  ExtraCreateParameter[0] = 0LL;
  IoGetIrpExtraCreateParameter(a1, ExtraCreateParameter);
  v4 = ExtraCreateParameter[0];
  if ( !ExtraCreateParameter[0] )
    return 0LL;
  v5 = ExtraCreateParameter[0];
  *(GUID *)ExtraCreateParameter = GUID_ECP_DUAL_OPLOCK_KEY;
  if ( FsRtlFindExtraCreateParameter(v5, (LPCGUID)ExtraCreateParameter, &EcpContext, 0LL) )
  {
    *(GUID *)ExtraCreateParameter = GUID_ECP_OPLOCK_KEY;
    if ( FsRtlRemoveExtraCreateParameter(v4, (LPCGUID)ExtraCreateParameter, &EcpContext, 0LL) )
      return 0LL;
    v7 = IoSetOplockKeyContext(CurrentStackLocation->FileObject, EcpContext, 1LL);
    FsRtlFreeExtraCreateParameter(EcpContext);
  }
  else
  {
    v7 = IoSetOplockKeyContext(CurrentStackLocation->FileObject, EcpContext, 2LL);
    FsRtlAcknowledgeEcp(EcpContext);
  }
  if ( v7 == -1073741823 )
    return 0;
  return v7;
}
