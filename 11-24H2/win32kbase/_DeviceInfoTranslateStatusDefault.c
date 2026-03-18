/*
 * XREFs of _DeviceInfoTranslateStatusDefault @ 0x1400CFFC4
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x14016B770 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016BDA0 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     _QdcSdcTranslateStatusDefault @ 0x1400ECD78 (_QdcSdcTranslateStatusDefault.c)
 */

__int64 __fastcall DeviceInfoTranslateStatusDefault(int a1, unsigned int a2)
{
  bool v3; // zf

  if ( (unsigned int)(a1 - 7) < 2 )
  {
    if ( a2 != -1073741811 && a2 != -1073741790 && a2 != -1073741649 && a2 != -1073741637 && a2 != -1073741632 )
      return (unsigned int)QdcSdcTranslateStatusDefault(a2);
  }
  else
  {
    if ( (a2 & 0x80000000) == 0 )
      return a2;
    if ( (int)a2 > -1073741582 )
    {
      if ( a2 == -1073741581
        || a2 == -1073741580
        || a2 == -1073741579
        || a2 == -1073741578
        || a2 == -1073741577
        || a2 == -1073741576
        || a2 == -1073741575 )
      {
        return a2;
      }
      v3 = a2 == -1073741574;
    }
    else
    {
      if ( a2 == -1073741582
        || a2 == -1073741790
        || a2 == -1073741811
        || a2 == -1073741801
        || a2 == -1073741776
        || a2 == -1073741637
        || a2 == -1073741585
        || a2 == -1073741584 )
      {
        return a2;
      }
      v3 = a2 == -1073741583;
    }
    if ( !v3 )
      return (unsigned int)-1073741823;
  }
  return a2;
}
