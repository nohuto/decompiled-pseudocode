/*
 * XREFs of NvmeAdapterFabricControllerStartUpdateNamespaces @ 0x1400E24C4
 * Callers:
 *     NvmeAdapterCompleteGetControllerLogPageRequestAsyncEvent @ 0x1400DF820 (NvmeAdapterCompleteGetControllerLogPageRequestAsyncEvent.c)
 * Callees:
 *     NvmeAdapterScheduleFabricNvmeControllerBackgroundWork @ 0x1400E7168 (NvmeAdapterScheduleFabricNvmeControllerBackgroundWork.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall NvmeAdapterFabricControllerStartUpdateNamespaces(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rcx
  unsigned __int16 v4; // ax
  __int64 v5; // r8
  unsigned int v6; // edx

  v3 = 0LL;
  v4 = *(_WORD *)(a1 + 24);
  if ( *a2 == -1 )
  {
    if ( v4 )
    {
      do
      {
        v6 = v3 + 1;
        *(_DWORD *)(*(_QWORD *)(a1 + 608) + 4 * v3) = v3 + 1;
        v3 = (unsigned int)(v3 + 1);
      }
      while ( v6 < *(unsigned __int16 *)(a1 + 24) );
    }
  }
  else
  {
    v5 = 1024LL;
    if ( v4 < 0x400u )
      v5 = *(unsigned __int16 *)(a1 + 24);
    memmove(*(void **)(a1 + 608), a2, 4 * v5);
  }
  return NvmeAdapterScheduleFabricNvmeControllerBackgroundWork(a1, 100LL);
}
