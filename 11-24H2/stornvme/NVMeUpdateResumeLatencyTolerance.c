/*
 * XREFs of NVMeUpdateResumeLatencyTolerance @ 0x14000BED0
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeUpdateResumeLatencyTolerance(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // eax
  int v4; // eax
  int v5; // eax

  v1 = *(_DWORD *)(a1 + 1616);
  if ( *(_DWORD *)(a1 + 1612) != 1 )
  {
    v2 = *(_DWORD *)(a1 + 100);
    if ( v2 == -1 )
    {
      v4 = *(unsigned __int8 *)(a1 + 1610);
      if ( !(_BYTE)v4 || v4 >= *(unsigned __int8 *)(a1 + 1609) - 1 || (v2 = *(_DWORD *)(a1 + 1632), v1 > v2) )
        v2 = *(_DWORD *)(a1 + 1624);
    }
    goto LABEL_3;
  }
  v2 = *(_DWORD *)(a1 + 104);
  if ( v2 != -1 )
  {
LABEL_3:
    *(_DWORD *)(a1 + 1616) = v2;
    return v1 != v2;
  }
  v5 = *(_DWORD *)(a1 + 1620);
  *(_DWORD *)(a1 + 1616) = v5;
  return v1 != v5;
}
