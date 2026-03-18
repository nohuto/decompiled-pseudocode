/*
 * XREFs of PnprSwap @ 0x1405A7FAC
 * Callers:
 *     PnprEndMirroring @ 0x140B53B20 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x140B53BF4 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     MmUnmapReservedMapping @ 0x14040F6F0 (MmUnmapReservedMapping.c)
 *     PnprSwapFinalize @ 0x1405A81D4 (PnprSwapFinalize.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnprMirrorMarkedPages @ 0x140B543CC (PnprMirrorMarkedPages.c)
 */

__int64 __fastcall PnprSwap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  int i; // ecx
  int v13; // eax
  __int64 j; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 result; // rax

  v4 = PnprContext;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    if ( *(int *)(PnprContext + 200) < 2 )
      *(_DWORD *)(PnprContext + 200) = 2;
    v5 = PnprMirrorMarkedPages();
    if ( v5 < 0 )
    {
      v6 = PnprContext;
      v7 = *(_DWORD *)(PnprContext + 33288);
      if ( !v7 )
        v7 = 2826;
      v8 = *(_DWORD *)(PnprContext + 33292);
      *(_DWORD *)(PnprContext + 33288) = v7;
      if ( !v8 )
        v8 = 1;
LABEL_10:
      *(_DWORD *)(v6 + 33292) = v8;
      goto LABEL_34;
    }
    v9 = PnprContext;
    *(_DWORD *)(PnprContext + 204) = 1;
    *(_DWORD *)(v9 + 200) = 3;
    v4 = PnprContext;
    if ( *(_DWORD *)(v9 + 204) < *(_DWORD *)(PnprContext + 176) )
    {
      do
      {
        _mm_pause();
        a2 = *(unsigned int *)(PnprContext + 204);
        v4 = PnprContext;
      }
      while ( (int)a2 < *(_DWORD *)(PnprContext + 176) );
    }
  }
  if ( *(_QWORD *)(v4 + 33264) )
  {
    v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 33184), a2, a3, a4);
    if ( v5 < 0 )
    {
      v6 = PnprContext;
      v10 = *(_DWORD *)(PnprContext + 33288);
      if ( !v10 )
        v10 = 2846;
      *(_DWORD *)(PnprContext + 33288) = v10;
      v8 = *(_DWORD *)(v6 + 33292);
      if ( !v8 )
        v8 = 8;
      goto LABEL_10;
    }
  }
  v11 = PnprContext;
  *(_DWORD *)(PnprContext + 204) = 1;
  *(_DWORD *)(v11 + 200) = 4;
  for ( i = *(_DWORD *)(v11 + 204); i < *(_DWORD *)(PnprContext + 176); i = *(_DWORD *)(PnprContext + 204) )
    _mm_pause();
  v13 = PnprSwapFinalize();
  v6 = PnprContext;
  v5 = v13;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
  {
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(PnprContext + 176); j = (unsigned int)(j + 1) )
    {
      v15 = *(_QWORD *)(v6 + 136) + 24 * j;
      if ( v15 )
      {
        v16 = *(_QWORD *)v15;
        if ( *(_QWORD *)v15 )
        {
          if ( (*(_BYTE *)(v16 + 10) & 1) != 0 )
            MmUnmapReservedMapping(*(PVOID *)(v15 + 8), 0x51706E50u, (PMDL)v16);
        }
      }
      v17 = *(_QWORD *)(PnprContext + 144) + 24 * j;
      if ( v17 )
      {
        v18 = *(_QWORD *)v17;
        if ( *(_QWORD *)v17 )
        {
          if ( (*(_BYTE *)(v18 + 10) & 1) != 0 )
            MmUnmapReservedMapping(*(PVOID *)(v17 + 8), 0x51706E50u, (PMDL)v18);
        }
      }
      v6 = PnprContext;
    }
  }
LABEL_34:
  result = (unsigned int)v5;
  *(_DWORD *)(v6 + 200) = 5;
  return result;
}
