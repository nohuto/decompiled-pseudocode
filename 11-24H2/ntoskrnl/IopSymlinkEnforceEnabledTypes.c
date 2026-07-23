/*
 * XREFs of IopSymlinkEnforceEnabledTypes @ 0x140A3550C
 * Callers:
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 * Callees:
 *     FsRtlInsertExtraCreateParameter @ 0x1408AB8F0 (FsRtlInsertExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1409E4EB0 (FsRtlAllocateExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkEnforceEnabledTypes(bool a1, char a2, struct _ECP_LIST *a3)
{
  char v3; // di
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v8; // rbx
  char *v9; // rcx
  NTSTATUS result; // eax
  _QWORD *v11; // rdx
  bool v12; // zf
  PVOID EcpContext; // [rsp+78h] [rbp+20h] BYREF

  v3 = IopSymlinkEnabledTypes;
  if ( IopSymlinkEnabledTypes == 15 )
    return 0;
  Flink = a3->EcpList.Flink;
  v8 = 0LL;
  EcpContext = 0LL;
  while ( Flink != &a3->EcpList )
  {
    v9 = (char *)Flink[1].Flink - *(_QWORD *)&GUID_ECP_NETWORK_OPEN_CONTEXT.Data1;
    if ( !v9 )
      v9 = (char *)Flink[1].Blink - *(_QWORD *)GUID_ECP_NETWORK_OPEN_CONTEXT.Data4;
    if ( !v9 )
    {
      LODWORD(Flink[2].Blink) |= 4u;
      v8 = Flink + 4;
      EcpContext = &Flink[4];
      break;
    }
    Flink = Flink->Flink;
  }
  if ( v8 && ((__int64)v8[-2].Blink & 0x10) != 0 )
    return -1073740011;
  if ( !a1 )
  {
    if ( !v8 )
      return -1073740011;
    a1 = LODWORD(v8[1].Flink) == 2;
  }
  if ( a2 || v8 )
  {
LABEL_12:
    if ( a1 )
    {
      if ( (v3 & 3) == 0 )
        return -1073740011;
      if ( a2 )
      {
        if ( (v3 & 1) == 0 )
          return -1073740011;
        return 0;
      }
      if ( (v3 & 2) == 0 )
        HIDWORD(v8->Flink) = 2;
      v12 = (v3 & 1) == 0;
    }
    else
    {
      if ( (v3 & 0xC) == 0 )
        return -1073740011;
      if ( a2 )
        return (v3 & 4) == 0 ? 0xC0000715 : 0;
      if ( (v3 & 8) == 0 )
        HIDWORD(v8->Flink) = 2;
      v12 = (v3 & 4) == 0;
    }
    if ( v12 )
      HIDWORD(v8->Flink) = 1;
    return 0;
  }
  result = FsRtlAllocateExtraCreateParameter(&GUID_ECP_NETWORK_OPEN_CONTEXT, 0x1Cu, 0, 0LL, 0x69536F49u, &EcpContext);
  if ( result >= 0 )
  {
    v8 = (struct _LIST_ENTRY *)EcpContext;
    v11 = EcpContext;
    *(_OWORD *)EcpContext = 0LL;
    v11[2] = 0LL;
    *((_DWORD *)v11 + 6) = 0;
    *(_DWORD *)v11 = 28;
    FsRtlInsertExtraCreateParameter(a3, v11);
    goto LABEL_12;
  }
  return result;
}
