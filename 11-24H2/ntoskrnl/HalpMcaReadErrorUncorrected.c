/*
 * XREFs of HalpMcaReadErrorUncorrected @ 0x1405411B0
 * Callers:
 *     HalpMcaReadError @ 0x14053D70C (HalpMcaReadError.c)
 * Callees:
 *     HalpWheaWriteMsrStatus @ 0x140478250 (HalpWheaWriteMsrStatus.c)
 *     HalpGetCpuVendor @ 0x140478774 (HalpGetCpuVendor.c)
 */

unsigned __int8 HalpMcaReadErrorUncorrected()
{
  unsigned __int8 result; // al
  _BYTE *v1; // rdx
  __int64 *v2; // r9
  __int64 v3; // r8

  result = HalpGetCpuVendor();
  v3 = *v2;
  if ( result == 1 )
  {
    result = 0;
    if ( (v3 & 0x2000100000000000LL) != 0x2000000000000000LL )
      return result;
    if ( (v3 & 0x1000000000000000LL) != 0 )
    {
      *v1 = 1;
      if ( (v3 & 0x200000000000000LL) == 0 )
      {
        if ( *((_BYTE *)v2 + 8) )
          v1[1] = 1;
      }
      return result;
    }
    return HalpWheaWriteMsrStatus(v2[2], *((unsigned int *)v2 + 3));
  }
  if ( (v3 & 0x2000000000000000LL) == 0 )
    return result;
  if ( (v3 & 0x1000000000000000LL) == 0 )
    return HalpWheaWriteMsrStatus(v2[2], *((unsigned int *)v2 + 3));
  if ( (v3 & 0x200000000000000LL) != 0 || !*((_BYTE *)v2 + 8) )
  {
    *v1 = 1;
  }
  else if ( (v3 & 0x100000000000000LL) != 0 )
  {
    *(_WORD *)v1 = 257;
  }
  return result;
}
