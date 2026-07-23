/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x1408AABE0
 * Callers:
 *     NtQueryFullAttributesFile @ 0x1408AA720 (NtQueryFullAttributesFile.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 *     IoQueryInformationByName @ 0x1409590B0 (IoQueryInformationByName.c)
 *     NtDeleteFile @ 0x140A7BA80 (NtDeleteFile.c)
 * Callees:
 *     FsRtlFreeExtraCreateParameterList @ 0x1408AAD60 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408AB0A0 (FsRtlFreeExtraCreateParameter.c)
 */

void __fastcall IopCleanupExtraCreateParameters(__int64 a1)
{
  struct _ECP_LIST *v1; // rax
  unsigned int Flags; // ecx
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *p_EcpList; // rdi
  _LIST_ENTRY *v6; // rdx
  _LIST_ENTRY *v7; // rcx
  struct _LIST_ENTRY *Blink; // rax

  v1 = *(struct _ECP_LIST **)(a1 + 168);
  if ( v1 )
  {
    Flags = v1->Flags;
    if ( (Flags & 0x3F0) != 0 )
    {
      v1->Flags = Flags - 16;
      *(_QWORD *)(a1 + 168) = 0LL;
    }
    else if ( (Flags & 1) != 0 )
    {
      Flink = v1->EcpList.Flink;
      p_EcpList = &v1->EcpList;
      while ( Flink != p_EcpList )
      {
        v6 = Flink;
        v7 = Flink;
        Flink = Flink->Flink;
        if ( ((__int64)v6[2].Blink & 1) == 0 )
        {
          if ( Flink->Blink != v6 || (Blink = v6->Blink, Blink->Flink != v6) )
            __fastfail(3u);
          Blink->Flink = Flink;
          Flink->Blink = Blink;
          v7->Blink = 0LL;
          v7->Flink = 0LL;
          FsRtlFreeExtraCreateParameter(&v6[4]);
        }
      }
    }
    else
    {
      FsRtlFreeExtraCreateParameterList(v1);
      *(_QWORD *)(a1 + 168) = 0LL;
    }
  }
}
