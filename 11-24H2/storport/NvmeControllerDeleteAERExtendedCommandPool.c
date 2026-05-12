/*
 * XREFs of NvmeControllerDeleteAERExtendedCommandPool @ 0x1400EC8D0
 * Callers:
 *     NvmeControllerDeleteAsyncEventContext @ 0x1400EC958 (NvmeControllerDeleteAsyncEventContext.c)
 * Callees:
 *     NvmeControllerFreeExtendedCommand @ 0x1401293D8 (NvmeControllerFreeExtendedCommand.c)
 */

void __fastcall NvmeControllerDeleteAERExtendedCommandPool(__int64 a1)
{
  union _SLIST_HEADER *v2; // rcx
  unsigned __int16 *v3; // rdx
  unsigned int i; // edi
  __int64 v5; // rdx

  v2 = *(union _SLIST_HEADER **)(a1 + 1416);
  if ( v2 && v2->Region )
  {
    InitializeSListHead(v2 + 1);
    v3 = *(unsigned __int16 **)(a1 + 1416);
    for ( i = 0; i < *v3; ++i )
    {
      v5 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 8LL * i);
      if ( v5 )
        NvmeControllerFreeExtendedCommand(a1, v5);
      v3 = *(unsigned __int16 **)(a1 + 1416);
    }
    *((_QWORD *)v3 + 1) = 0LL;
  }
}
