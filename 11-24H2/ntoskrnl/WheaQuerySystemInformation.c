/*
 * XREFs of WheaQuerySystemInformation @ 0x1407C6BB0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x1406A0770 (IpmiHwContextInitialized.c)
 */

__int64 WheaQuerySystemInformation()
{
  signed __int8 v0; // al
  _OWORD *v1; // r9
  unsigned int v2; // r10d
  unsigned int v3; // r8d

  v0 = IpmiHwContextInitialized((__int64)&WheaIpmiContext);
  v3 = 0;
  if ( v0 )
  {
    if ( v2 >= 0x20 )
    {
      *v1 = WheaIpmiContext;
      v1[1] = xmmword_140EF9F10;
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
