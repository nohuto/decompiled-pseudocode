/*
 * XREFs of ??$make_unique_nothrow@UNDIS_BIND_FILTER_LINK@@$$V@wil@@YA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@XZ @ 0x140082620
 * Callers:
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x14016AA10 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 * Callees:
 *     ??0NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x14016C990 (--0NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::make_unique_nothrow<NDIS_BIND_FILTER_LINK,>(_QWORD *a1)
{
  _OWORD *PoolWithTag; // rax
  _OWORD *v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x4C6C4642u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[5] = 0LL;
    NDIS_BIND_LINK_BASE::NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)PoolWithTag);
    *((_QWORD *)v3 + 10) = 0LL;
    *a1 = v3;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
