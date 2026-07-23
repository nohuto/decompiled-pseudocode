/*
 * XREFs of HalpNumaSystemLocalityInfoIncludeQueryDataType @ 0x140556534
 * Callers:
 *     HalpNumaQuerySystemLocalityLatencyAndBandwidthInfo @ 0x140555CE0 (HalpNumaQuerySystemLocalityLatencyAndBandwidthInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpNumaSystemLocalityInfoIncludeQueryDataType(__int64 a1, int a2)
{
  char v2; // r8
  _BYTE *v3; // rax

  v2 = 0;
  if ( a2 == 6 )
    return 1;
  v3 = (_BYTE *)(a1 + 9);
  switch ( a2 )
  {
    case 4:
      if ( *v3 <= 2u )
        return 1;
      break;
    case 5:
      if ( (unsigned __int8)(*v3 - 3) <= 2u )
        return 1;
      v3 = (_BYTE *)(a1 + 9);
      break;
    case 0:
      if ( *v3 >= 2u )
        goto LABEL_6;
      return 1;
  }
  if ( a2 != 1 )
  {
LABEL_6:
    if ( a2 == 2 )
    {
      if ( (*v3 & 0xFD) != 0 )
        return v2;
      return 1;
    }
    goto LABEL_15;
  }
  if ( *v3 == 3 || *v3 == 4 )
    return 1;
LABEL_15:
  if ( a2 == 3 && ((*v3 - 1) & 0xFD) == 0 )
    return 1;
  return v2;
}
