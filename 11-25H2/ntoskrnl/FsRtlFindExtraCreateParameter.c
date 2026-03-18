/*
 * XREFs of FsRtlFindExtraCreateParameter @ 0x140986000
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x140375F60 (FsRtlpAttachOplockKey.c)
 *     IopSymlinkGetECP @ 0x14044FBB0 (IopSymlinkGetECP.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlFindExtraCreateParameter(
        PECP_LIST EcpList,
        LPCGUID EcpType,
        PVOID *EcpContext,
        ULONG *EcpContextSize)
{
  struct _LIST_ENTRY *i; // rax
  char *v7; // r8

  if ( EcpContext )
    *EcpContext = 0LL;
  if ( EcpContextSize )
    *EcpContextSize = 0;
  for ( i = EcpList->EcpList.Flink; ; i = i->Flink )
  {
    if ( i == &EcpList->EcpList )
      return -1073741275;
    v7 = (char *)i[1].Flink - *(_QWORD *)&EcpType->Data1;
    if ( !v7 )
      v7 = (char *)i[1].Blink - *(_QWORD *)EcpType->Data4;
    if ( !v7 )
      break;
  }
  LODWORD(i[2].Blink) |= 4u;
  if ( EcpContext )
    *EcpContext = &i[4];
  if ( EcpContextSize )
    *EcpContextSize = HIDWORD(i[2].Blink) - 72;
  return 0;
}
