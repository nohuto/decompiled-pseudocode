/*
 * XREFs of ?ndisCreateThreadStateObjectType@@YAJXZ @ 0x1400E4728
 * Callers:
 *     ?ndisInitializeThreadMonitorSubsystem@@YAJXZ @ 0x1400E4648 (-ndisInitializeThreadMonitorSubsystem@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 ndisCreateThreadStateObjectType(void)
{
  int v0; // edx
  unsigned int v1; // ebx
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-69h] BYREF
  _QWORD v4[16]; // [rsp+48h] [rbp-59h] BYREF
  char v5; // [rsp+C8h] [rbp+27h] BYREF

  *(_QWORD *)&DestinationString.Length = 0x200000LL;
  DestinationString.Buffer = (wchar_t *)&v5;
  RtlInitUnicodeString(&DestinationString, L"NdisThreadState");
  memset(v4, 0, 0x78uLL);
  BYTE2(v4[0]) |= 6u;
  LOWORD(v4[0]) = 120;
  HIDWORD(v4[0]) = 0;
  LODWORD(v4[1]) = 256;
  HIDWORD(v4[4]) = 512;
  *(_OWORD *)((char *)&v4[1] + 4) = xmmword_1400FEDA0;
  HIDWORD(v4[3]) = 2031616;
  LODWORD(v4[5]) = 32;
  v4[9] = ndisThreadStateDelete;
  v1 = ObCreateObjectType(&DestinationString, v4, 0LL, &qword_14011D7A8);
  if ( !v1 )
    return 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 2;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v0,
      1,
      10,
      (struct _GUID *)&WPP_12cb3fcd1e2d3901272ccddd1e9630db_Traceguids,
      v1);
  }
  return v1;
}
