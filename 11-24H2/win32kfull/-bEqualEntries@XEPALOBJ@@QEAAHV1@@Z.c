/*
 * XREFs of ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1401C3400
 * Callers:
 *     EngHTBlt @ 0x14000C53C (EngHTBlt.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x140127884 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XEPALOBJ::bEqualEntries(__int64 *a1, __int64 a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r11
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rax

  v2 = 0;
  if ( !a2 )
    return 0LL;
  v3 = *a1;
  v4 = *(_DWORD *)(*a1 + 28);
  if ( v4 != *(_DWORD *)(a2 + 28) )
    return 0LL;
  v5 = *(_DWORD *)(v3 + 24);
  if ( (v5 & 1) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 24) & 1) != 0 )
    {
      while ( v2 < v4 )
      {
        if ( ((*(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL * v2) ^ *(_DWORD *)(*(_QWORD *)(v3 + 112) + 4LL * v2)) & 0xFFFFFF) != 0 )
          return 0LL;
        ++v2;
      }
      return 1LL;
    }
    return 0LL;
  }
  if ( (v5 & 2) == 0 )
  {
    if ( (v5 & 4) != 0 )
    {
      if ( (*(_DWORD *)(a2 + 24) & 4) != 0 )
        return 1LL;
    }
    else if ( (v5 & 8) != 0 && (*(_DWORD *)(a2 + 24) & 8) != 0 )
    {
      return 1LL;
    }
    return 0LL;
  }
  if ( (*(_DWORD *)(a2 + 24) & 2) == 0 )
    return 0LL;
  v7 = *(_QWORD *)(v3 + 112);
  v8 = *(_QWORD *)(a2 + 112);
  v9 = *(_QWORD *)v7 - *(_QWORD *)v8;
  if ( *(_QWORD *)v7 == *(_QWORD *)v8 )
    v9 = *(unsigned int *)(v7 + 8) - (unsigned __int64)*(unsigned int *)(v8 + 8);
  LOBYTE(v2) = v9 == 0;
  return v2;
}
