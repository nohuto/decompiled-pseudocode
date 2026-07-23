/*
 * XREFs of FsRtlFreeTunnelNode @ 0x1403BF344
 * Callers:
 *     FsRtlRemoveNodeFromTunnel @ 0x1403BF2A8 (FsRtlRemoveNodeFromTunnel.c)
 *     FsRtlPruneTunnelCache @ 0x140934530 (FsRtlPruneTunnelCache.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1403C00D0 (ExFreeToPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlFreeTunnelNode(char *Entry, __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx

  if ( a2 )
  {
    v2 = *a2;
    v3 = Entry + 24;
    if ( *(__int64 **)(*a2 + 8) != a2 )
      __fastfail(3u);
    *v3 = v2;
    v3[1] = a2;
    *(_QWORD *)(v2 + 8) = v3;
    *a2 = (__int64)v3;
  }
  else if ( (*((_DWORD *)Entry + 14) & 1) != 0 )
  {
    ExFreePoolWithTag(Entry, 0);
  }
  else
  {
    ExFreeToPagedLookasideList(&TunnelLookasideList, Entry);
  }
}
