/*
 * XREFs of IpmiHwKcsInit @ 0x1406943DC
 * Callers:
 *     IpmiHwInitializeContext @ 0x1406942E8 (IpmiHwInitializeContext.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140413F40 (MmMapIoSpaceEx.c)
 */

__int64 IpmiHwKcsInit()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (_QWORD)xmmword_140EF9890 )
  {
    xmmword_140EF98E0 = 0LL;
    if ( BYTE8(xmmword_140EF9890) )
    {
      *(_QWORD *)&xmmword_140EF98E0 = xmmword_140EF9890;
      DWORD2(xmmword_140EF98E0) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_140EF98E0 = MmMapIoSpaceEx(xmmword_140EF9890, 2LL * BYTE8(WheaIpmiContext), 0x204u);
      if ( (_QWORD)xmmword_140EF98E0 )
        DWORD2(xmmword_140EF98E0) = 2 * BYTE8(WheaIpmiContext);
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
