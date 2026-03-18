/*
 * XREFs of PnprReplaceStart @ 0x14073058C
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x140B53BF4 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall PnprReplaceStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rdi
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // eax
  _QWORD *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v17[0] = 0LL;
  v4 = (_DWORD *)(PnprContext + 72);
  v17[1] = *(_QWORD *)(PnprContext + 16);
  v17[2] = *(_QWORD *)(PnprContext + 48);
  v5 = 0;
  if ( (*(_DWORD *)(PnprContext + 33200) & 2) != 0 )
  {
    v5 = 1;
    LODWORD(v17[0]) = 1;
  }
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
    LODWORD(v17[0]) = v5 | 2;
  v6 = guard_dispatch_icall_no_overrides(v17, PnprContext + 33176, a3, a4);
  if ( v6 >= 0 )
  {
    v10 = (_QWORD *)PnprContext;
    if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    {
      memset_0(v4, 0, 0x40uLL);
      *v4 = 64;
      v4[1] = 2;
      *((_QWORD *)v4 + 1) = v10[1];
      *((_QWORD *)v4 + 2) = v10[5];
      *((_QWORD *)v4 + 3) = v10[2];
      *((_QWORD *)v4 + 4) = v10[6];
      *((_QWORD *)v4 + 5) = v10[3];
      *((_QWORD *)v4 + 6) = v10[7];
      *((_QWORD *)v4 + 7) = PnprMapTargetSparePhysicalPages;
      v6 = guard_dispatch_icall_no_overrides(v4, v10 + 4148, v11, v12);
      if ( v6 < 0 )
      {
        v13 = PnprContext;
        v14 = *(_DWORD *)(PnprContext + 33288);
        if ( !v14 )
          v14 = 2762;
        *(_DWORD *)(PnprContext + 33288) = v14;
        v15 = *(_DWORD *)(v13 + 33292);
        if ( !v15 )
          v15 = 8;
        *(_DWORD *)(v13 + 33292) = v15;
      }
    }
  }
  else
  {
    v7 = PnprContext;
    v8 = *(_DWORD *)(PnprContext + 33288);
    if ( !v8 )
      v8 = 2736;
    v9 = *(_DWORD *)(PnprContext + 33292);
    *(_DWORD *)(PnprContext + 33288) = v8;
    if ( !v9 )
      v9 = 6;
    *(_DWORD *)(v7 + 33292) = v9;
  }
  return (unsigned int)v6;
}
