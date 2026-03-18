/*
 * XREFs of PnprSwap @ 0x1405A479C
 * Callers:
 *     PnprEndMirroring @ 0x140B43B20 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x140B43BF4 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     MmUnmapReservedMapping @ 0x140411E60 (MmUnmapReservedMapping.c)
 *     PnprSwapFinalize @ 0x1405A49C4 (PnprSwapFinalize.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PnprMirrorMarkedPages @ 0x140B443CC (PnprMirrorMarkedPages.c)
 */

__int64 PnprSwap()
{
  __int64 v0; // rcx
  int v1; // edi
  __int64 v2; // rdx
  int v3; // ecx
  int v4; // eax
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  int i; // ecx
  int v9; // eax
  __int64 j; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 result; // rax

  v0 = PnprContext;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    if ( *(int *)(PnprContext + 200) < 2 )
      *(_DWORD *)(PnprContext + 200) = 2;
    v1 = PnprMirrorMarkedPages();
    if ( v1 < 0 )
    {
      v2 = PnprContext;
      v3 = *(_DWORD *)(PnprContext + 33288);
      if ( !v3 )
        v3 = 2826;
      v4 = *(_DWORD *)(PnprContext + 33292);
      *(_DWORD *)(PnprContext + 33288) = v3;
      if ( !v4 )
        v4 = 1;
LABEL_10:
      *(_DWORD *)(v2 + 33292) = v4;
      goto LABEL_34;
    }
    v5 = PnprContext;
    *(_DWORD *)(PnprContext + 204) = 1;
    *(_DWORD *)(v5 + 200) = 3;
    v0 = PnprContext;
    if ( *(_DWORD *)(v5 + 204) < *(_DWORD *)(PnprContext + 176) )
    {
      do
      {
        _mm_pause();
        v0 = PnprContext;
      }
      while ( *(_DWORD *)(PnprContext + 204) < *(_DWORD *)(PnprContext + 176) );
    }
  }
  if ( *(_QWORD *)(v0 + 33264) )
  {
    v1 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v0 + 33184));
    if ( v1 < 0 )
    {
      v2 = PnprContext;
      v6 = *(_DWORD *)(PnprContext + 33288);
      if ( !v6 )
        v6 = 2846;
      *(_DWORD *)(PnprContext + 33288) = v6;
      v4 = *(_DWORD *)(v2 + 33292);
      if ( !v4 )
        v4 = 8;
      goto LABEL_10;
    }
  }
  v7 = PnprContext;
  *(_DWORD *)(PnprContext + 204) = 1;
  *(_DWORD *)(v7 + 200) = 4;
  for ( i = *(_DWORD *)(v7 + 204); i < *(_DWORD *)(PnprContext + 176); i = *(_DWORD *)(PnprContext + 204) )
    _mm_pause();
  v9 = PnprSwapFinalize();
  v2 = PnprContext;
  v1 = v9;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
  {
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(PnprContext + 176); j = (unsigned int)(j + 1) )
    {
      v11 = *(_QWORD *)(v2 + 136) + 24 * j;
      if ( v11 )
      {
        v12 = *(_QWORD *)v11;
        if ( *(_QWORD *)v11 )
        {
          if ( (*(_BYTE *)(v12 + 10) & 1) != 0 )
            MmUnmapReservedMapping(*(PVOID *)(v11 + 8), 0x51706E50u, (PMDL)v12);
        }
      }
      v13 = *(_QWORD *)(PnprContext + 144) + 24 * j;
      if ( v13 )
      {
        v14 = *(_QWORD *)v13;
        if ( *(_QWORD *)v13 )
        {
          if ( (*(_BYTE *)(v14 + 10) & 1) != 0 )
            MmUnmapReservedMapping(*(PVOID *)(v13 + 8), 0x51706E50u, (PMDL)v14);
        }
      }
      v2 = PnprContext;
    }
  }
LABEL_34:
  result = (unsigned int)v1;
  *(_DWORD *)(v2 + 200) = 5;
  return result;
}
