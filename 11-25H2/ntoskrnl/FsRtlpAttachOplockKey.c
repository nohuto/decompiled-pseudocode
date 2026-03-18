/*
 * XREFs of FsRtlpAttachOplockKey @ 0x140375F60
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403EEA60 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140A17B60 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlOplockBreakH2 @ 0x140A2FA90 (FsRtlOplockBreakH2.c)
 * Callees:
 *     IoSetOplockKeyContext @ 0x1403758AC (IoSetOplockKeyContext.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408EFDB0 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlFindExtraCreateParameter @ 0x140986000 (FsRtlFindExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x14099C6E0 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x1409A7080 (FsRtlRemoveExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x140A147D0 (FsRtlAcknowledgeEcp.c)
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
    v7 = IoSetOplockKeyContext((__int64)CurrentStackLocation->FileObject, (__int128 *)EcpContext, 1u);
    FsRtlFreeExtraCreateParameter(EcpContext);
  }
  else
  {
    v7 = IoSetOplockKeyContext((__int64)CurrentStackLocation->FileObject, (__int128 *)EcpContext, 2u);
    FsRtlAcknowledgeEcp(EcpContext);
  }
  if ( v7 == -1073741823 )
    return 0;
  return v7;
}
