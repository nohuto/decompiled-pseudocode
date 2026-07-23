/*
 * XREFs of FsRtlpCleanupEcps @ 0x1408AACB0
 * Callers:
 *     NtQueryAttributesFile @ 0x1408AA9A0 (NtQueryAttributesFile.c)
 *     IopFastQueryNetworkAttributes @ 0x140AA0A70 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     FsRtlFreeExtraCreateParameterList @ 0x1408AAD60 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408AB0A0 (FsRtlFreeExtraCreateParameter.c)
 */

char __fastcall FsRtlpCleanupEcps(struct _ECP_LIST *a1)
{
  unsigned int Flags; // eax
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *p_EcpList; // rdi
  _LIST_ENTRY *v5; // rdx
  _LIST_ENTRY *v6; // rcx
  struct _LIST_ENTRY *Blink; // rax

  Flags = a1->Flags;
  if ( (Flags & 0x3F0) != 0 )
  {
    a1->Flags = Flags - 16;
    return 1;
  }
  else if ( (Flags & 1) != 0 )
  {
    Flink = a1->EcpList.Flink;
    p_EcpList = &a1->EcpList;
    while ( Flink != p_EcpList )
    {
      v5 = Flink;
      v6 = Flink;
      Flink = Flink->Flink;
      if ( ((__int64)v5[2].Blink & 1) == 0 )
      {
        if ( Flink->Blink != v5 || (Blink = v5->Blink, Blink->Flink != v5) )
          __fastfail(3u);
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        v6->Blink = 0LL;
        v6->Flink = 0LL;
        FsRtlFreeExtraCreateParameter(&v5[4]);
      }
    }
    return 0;
  }
  else
  {
    FsRtlFreeExtraCreateParameterList(a1);
    return 1;
  }
}
