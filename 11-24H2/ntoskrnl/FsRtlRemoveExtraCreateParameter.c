/*
 * XREFs of FsRtlRemoveExtraCreateParameter @ 0x140990A10
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x1403CD800 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx2 @ 0x1403CE7F0 (FsRtlCheckOplockEx2.c)
 *     IopSymlinkRemoveECP @ 0x140436270 (IopSymlinkRemoveECP.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlRemoveExtraCreateParameter(
        PECP_LIST EcpList,
        LPCGUID EcpType,
        PVOID *EcpContext,
        ULONG *EcpContextSize)
{
  struct _LIST_ENTRY *Flink; // rax
  NTSTATUS v6; // r11d
  char *v7; // rdx
  struct _LIST_ENTRY *v9; // rcx
  struct _LIST_ENTRY *Blink; // rdx

  *EcpContext = 0LL;
  Flink = EcpList->EcpList.Flink;
  v6 = -1073741275;
  while ( Flink != &EcpList->EcpList )
  {
    v7 = (char *)Flink[1].Flink - *(_QWORD *)&EcpType->Data1;
    if ( !v7 )
      v7 = (char *)Flink[1].Blink - *(_QWORD *)EcpType->Data4;
    if ( !v7 )
    {
      LODWORD(Flink[2].Blink) |= 4u;
      v6 = 0;
      v9 = Flink->Flink;
      if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
        __fastfail(3u);
      Blink->Flink = v9;
      v9->Blink = Blink;
      Flink->Blink = 0LL;
      Flink->Flink = 0LL;
      *EcpContext = &Flink[4];
      if ( EcpContextSize )
        *EcpContextSize = HIDWORD(Flink[2].Blink) - 72;
      return v6;
    }
    Flink = Flink->Flink;
  }
  return v6;
}
