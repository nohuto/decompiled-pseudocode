/*
 * XREFs of IpmiHwKcsInit @ 0x14069F77C
 * Callers:
 *     IpmiHwInitializeContext @ 0x14069F688 (IpmiHwInitializeContext.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x1402E9A50 (MmMapIoSpaceEx.c)
 */

__int64 IpmiHwKcsInit()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (_QWORD)xmmword_140EF9C10 )
  {
    xmmword_140EF9C60 = 0LL;
    if ( BYTE8(xmmword_140EF9C10) )
    {
      *(_QWORD *)&xmmword_140EF9C60 = xmmword_140EF9C10;
      DWORD2(xmmword_140EF9C60) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_140EF9C60 = MmMapIoSpaceEx(xmmword_140EF9C10, 2LL * BYTE8(WheaIpmiContext), 0x204u);
      if ( (_QWORD)xmmword_140EF9C60 )
        DWORD2(xmmword_140EF9C60) = 2 * BYTE8(WheaIpmiContext);
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
