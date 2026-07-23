/*
 * XREFs of FsRtlInsertExtraCreateParameter @ 0x1408AB8F0
 * Callers:
 *     IopSymlinkAllocateAndAddECP @ 0x1408AB7E0 (IopSymlinkAllocateAndAddECP.c)
 *     PspCreateUserProcessEcp @ 0x1408ABC48 (PspCreateUserProcessEcp.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x140A3550C (IopSymlinkEnforceEnabledTypes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlInsertExtraCreateParameter(PECP_LIST EcpList, PVOID EcpContext)
{
  struct _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *p_EcpList; // r8
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v5; // rdx
  char *v6; // r9
  NTSTATUS result; // eax

  Flink = EcpList->EcpList.Flink;
  p_EcpList = &EcpList->EcpList;
  while ( Flink != p_EcpList )
  {
    v6 = (char *)Flink[1].Flink - *((_QWORD *)EcpContext - 6);
    if ( !v6 )
      v6 = (char *)Flink[1].Blink - *((_QWORD *)EcpContext - 5);
    if ( !v6 )
    {
      LODWORD(Flink[2].Blink) |= 4u;
      return -1073741811;
    }
    Flink = Flink->Flink;
  }
  Blink = EcpList->EcpList.Blink;
  v5 = (struct _LIST_ENTRY *)((char *)EcpContext - 64);
  if ( Blink->Flink != p_EcpList )
    __fastfail(3u);
  v5->Blink = Blink;
  v5->Flink = p_EcpList;
  Blink->Flink = v5;
  result = 0;
  EcpList->EcpList.Blink = v5;
  return result;
}
