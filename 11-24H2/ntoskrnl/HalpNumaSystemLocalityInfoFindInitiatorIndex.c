/*
 * XREFs of HalpNumaSystemLocalityInfoFindInitiatorIndex @ 0x14055648C
 * Callers:
 *     HalpNumaQuerySystemLocalityLatencyAndBandwidthInfo @ 0x140555CE0 (HalpNumaQuerySystemLocalityLatencyAndBandwidthInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpNumaSystemLocalityInfoFindInitiatorIndex(__int64 a1, int a2, int *a3)
{
  int v3; // r11d
  unsigned int v4; // r10d
  unsigned int i; // r9d

  v3 = -1;
  v4 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 12); ++i )
  {
    if ( *(_DWORD *)(a1 + 4LL * i + 32) == a2 )
    {
      v3 = i;
      break;
    }
  }
  if ( v3 == -1 )
  {
    return (unsigned int)-1073741275;
  }
  else if ( a3 )
  {
    *a3 = v3;
  }
  return v4;
}
