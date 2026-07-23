/*
 * XREFs of PnprMmConstruct @ 0x14072E450
 * Callers:
 *     PnpReplacePartitionUnit @ 0x14072C230 (PnpReplacePartitionUnit.c)
 * Callees:
 *     PnprMmAddRange @ 0x14072E31C (PnprMmAddRange.c)
 *     PnprMmFree @ 0x14072E554 (PnprMmFree.c)
 */

__int64 __fastcall PnprMmConstruct(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  unsigned int i; // edi
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  _QWORD *v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  int v13; // eax

  v2 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
  {
    v2 = PnprMmAddRange(a2, *(_QWORD *)(a1 + 16LL * i + 16), *(_QWORD *)(a1 + 16LL * i + 24));
    if ( v2 < 0 )
    {
      v6 = PnprContext;
      v7 = *(_DWORD *)(PnprContext + 33288);
      if ( !v7 )
        v7 = 4504;
      *(_DWORD *)(PnprContext + 33288) = v7;
      v8 = *(_DWORD *)(v6 + 33292);
      if ( !v8 )
        v8 = 1;
LABEL_19:
      *(_DWORD *)(v6 + 33292) = v8;
      PnprMmFree(a2);
      return (unsigned int)v2;
    }
  }
  v9 = (_QWORD *)*a2;
  v10 = 0LL;
  while ( v9 != a2 )
  {
    v11 = v9[3];
    if ( !v11 || (v12 = v9[2], v12 < v10) )
    {
      v6 = PnprContext;
      v2 = -1073741811;
      v13 = *(_DWORD *)(PnprContext + 33288);
      if ( !v13 )
        v13 = 4525;
      *(_DWORD *)(PnprContext + 33288) = v13;
      v8 = *(_DWORD *)(v6 + 33292);
      if ( !v8 )
        v8 = 6;
      goto LABEL_19;
    }
    v9 = (_QWORD *)*v9;
    v10 = v12 + v11;
  }
  return (unsigned int)v2;
}
