/*
 * XREFs of IpmiHwKcsInit @ 0x1406A0880
 * Callers:
 *     IpmiHwInitializeContext @ 0x1406A078C (IpmiHwInitializeContext.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 */

__int64 IpmiHwKcsInit()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (_QWORD)xmmword_140EF9F10 )
  {
    xmmword_140EF9F60 = 0LL;
    if ( BYTE8(xmmword_140EF9F10) )
    {
      *(_QWORD *)&xmmword_140EF9F60 = xmmword_140EF9F10;
      DWORD2(xmmword_140EF9F60) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_140EF9F60 = MmMapIoSpaceEx(xmmword_140EF9F10, 2LL * BYTE8(WheaIpmiContext), 516LL);
      if ( (_QWORD)xmmword_140EF9F60 )
        DWORD2(xmmword_140EF9F60) = 2 * BYTE8(WheaIpmiContext);
      else
        return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v0;
}
