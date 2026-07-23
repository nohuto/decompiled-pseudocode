/*
 * XREFs of PnprSwap @ 0x1405A4F9C
 * Callers:
 *     PnprEndMirroring @ 0x140B55B70 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x140B55C44 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     MmUnmapReservedMapping @ 0x140433320 (MmUnmapReservedMapping.c)
 *     PnprSwapFinalize @ 0x1405A51C4 (PnprSwapFinalize.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PnprMirrorMarkedPages @ 0x140B5641C (PnprMirrorMarkedPages.c)
 */

__int64 __fastcall PnprSwap(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v3; // edi
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  int i; // ecx
  int v11; // eax
  __int64 j; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 result; // rax

  v2 = PnprContext;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    if ( *(int *)(PnprContext + 200) < 2 )
      *(_DWORD *)(PnprContext + 200) = 2;
    v3 = PnprMirrorMarkedPages();
    if ( v3 < 0 )
    {
      v4 = PnprContext;
      v5 = *(_DWORD *)(PnprContext + 33288);
      if ( !v5 )
        v5 = 2826;
      v6 = *(_DWORD *)(PnprContext + 33292);
      *(_DWORD *)(PnprContext + 33288) = v5;
      if ( !v6 )
        v6 = 1;
LABEL_10:
      *(_DWORD *)(v4 + 33292) = v6;
      goto LABEL_34;
    }
    v7 = PnprContext;
    *(_DWORD *)(PnprContext + 204) = 1;
    *(_DWORD *)(v7 + 200) = 3;
    v2 = PnprContext;
    if ( *(_DWORD *)(v7 + 204) < *(_DWORD *)(PnprContext + 176) )
    {
      do
      {
        _mm_pause();
        a2 = *(unsigned int *)(PnprContext + 204);
        v2 = PnprContext;
      }
      while ( (int)a2 < *(_DWORD *)(PnprContext + 176) );
    }
  }
  if ( *(_QWORD *)(v2 + 33264) )
  {
    v3 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 33184), a2);
    if ( v3 < 0 )
    {
      v4 = PnprContext;
      v8 = *(_DWORD *)(PnprContext + 33288);
      if ( !v8 )
        v8 = 2846;
      *(_DWORD *)(PnprContext + 33288) = v8;
      v6 = *(_DWORD *)(v4 + 33292);
      if ( !v6 )
        v6 = 8;
      goto LABEL_10;
    }
  }
  v9 = PnprContext;
  *(_DWORD *)(PnprContext + 204) = 1;
  *(_DWORD *)(v9 + 200) = 4;
  for ( i = *(_DWORD *)(v9 + 204); i < *(_DWORD *)(PnprContext + 176); i = *(_DWORD *)(PnprContext + 204) )
    _mm_pause();
  v11 = PnprSwapFinalize();
  v4 = PnprContext;
  v3 = v11;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
  {
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(PnprContext + 176); j = (unsigned int)(j + 1) )
    {
      v13 = *(_QWORD *)(v4 + 136) + 24 * j;
      if ( v13 )
      {
        v14 = *(_QWORD *)v13;
        if ( *(_QWORD *)v13 )
        {
          if ( (*(_BYTE *)(v14 + 10) & 1) != 0 )
            MmUnmapReservedMapping(*(PVOID *)(v13 + 8), 0x51706E50u, (PMDL)v14);
        }
      }
      v15 = *(_QWORD *)(PnprContext + 144) + 24 * j;
      if ( v15 )
      {
        v16 = *(_QWORD *)v15;
        if ( *(_QWORD *)v15 )
        {
          if ( (*(_BYTE *)(v16 + 10) & 1) != 0 )
            MmUnmapReservedMapping(*(PVOID *)(v15 + 8), 0x51706E50u, (PMDL)v16);
        }
      }
      v4 = PnprContext;
    }
  }
LABEL_34:
  result = (unsigned int)v3;
  *(_DWORD *)(v4 + 200) = 5;
  return result;
}
