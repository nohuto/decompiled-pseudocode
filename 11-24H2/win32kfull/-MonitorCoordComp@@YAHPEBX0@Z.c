/*
 * XREFs of ?MonitorCoordComp@@YAHPEBX0@Z @ 0x140218900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorCoordComp(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  unsigned int v3; // r10d
  __int64 v4; // r9
  int v5; // edi
  int v6; // r11d
  __int64 v7; // r8
  int v8; // ebx
  int v9; // r8d

  v2 = *a1;
  v3 = 0;
  v4 = *a2;
  if ( *(_QWORD *)(*a1 + 96) )
  {
    v5 = *(_DWORD *)(v2 + 96);
  }
  else
  {
    v5 = *(_DWORD *)(*(_QWORD *)(v2 + 40) + 28LL)
       + (*(_DWORD *)(*(_QWORD *)(v2 + 40) + 36LL) - *(_DWORD *)(*(_QWORD *)(v2 + 40) + 28LL)) / 2;
    *(_QWORD *)(v2 + 96) = v5;
  }
  if ( *(_QWORD *)(v2 + 104) )
  {
    v6 = *(_DWORD *)(v2 + 104);
  }
  else
  {
    v6 = *(_DWORD *)(*(_QWORD *)(v2 + 40) + 32LL)
       + (*(_DWORD *)(*(_QWORD *)(v2 + 40) + 40LL) - *(_DWORD *)(*(_QWORD *)(v2 + 40) + 32LL)) / 2;
    *(_QWORD *)(v2 + 104) = v6;
  }
  v7 = v4 + 40;
  if ( *(_QWORD *)(v4 + 96) )
  {
    v8 = *(_DWORD *)(v4 + 96);
  }
  else
  {
    v8 = *(_DWORD *)(*(_QWORD *)v7 + 28LL) + (*(_DWORD *)(*(_QWORD *)v7 + 36LL) - *(_DWORD *)(*(_QWORD *)v7 + 28LL)) / 2;
    *(_QWORD *)(v4 + 96) = v8;
  }
  if ( *(_QWORD *)(v4 + 104) )
  {
    v9 = *(_DWORD *)(v4 + 104);
  }
  else
  {
    v9 = *(_DWORD *)(*(_QWORD *)v7 + 32LL) + (*(_DWORD *)(*(_QWORD *)v7 + 40LL) - *(_DWORD *)(*(_QWORD *)v7 + 32LL)) / 2;
    *(_QWORD *)(v4 + 104) = v9;
  }
  if ( v5 >= v8 )
  {
    if ( v5 != v8 )
      return 1LL;
    if ( v6 >= v9 )
    {
      LOBYTE(v3) = v6 != v9;
      return v3;
    }
  }
  return 0xFFFFFFFFLL;
}
