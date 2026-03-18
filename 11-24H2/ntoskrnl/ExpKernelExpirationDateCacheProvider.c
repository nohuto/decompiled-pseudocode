/*
 * XREFs of ExpKernelExpirationDateCacheProvider @ 0x1407B8C30
 * Callers:
 *     <none>
 * Callees:
 *     RtlTimeToTimeFields @ 0x1404260F0 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SeCodeIntegrityGetBuildExpiryTime @ 0x14078E1E0 (SeCodeIntegrityGetBuildExpiryTime.c)
 */

__int64 __fastcall ExpKernelExpirationDateCacheProvider(
        __int64 a1,
        _DWORD *a2,
        _OWORD *a3,
        __int64 a4,
        _DWORD *a5,
        _BYTE *a6)
{
  int BuildExpiryTime; // ebx
  TIME_FIELDS TimeFields; // [rsp+20h] [rbp-30h] BYREF
  LARGE_INTEGER Time; // [rsp+30h] [rbp-20h] BYREF
  __int128 v11; // [rsp+38h] [rbp-18h]

  HIDWORD(v11) = 0;
  Time.QuadPart = 0LL;
  *a5 = 16;
  TimeFields = 0LL;
  if ( (unsigned int)a4 >= 0x10 )
  {
    if ( a2 )
      *a2 = 3;
    BuildExpiryTime = SeCodeIntegrityGetBuildExpiryTime(&Time, (__int64)a2, (__int64)a3, a4);
    if ( BuildExpiryTime >= 0 )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      LOWORD(v11) = TimeFields.Year;
      BYTE2(v11) = TimeFields.Month;
      BYTE11(v11) = HIBYTE(TimeFields.Second);
      *(_QWORD *)((char *)&v11 + 3) = *(_QWORD *)((char *)&TimeFields.Month + 1);
      *a3 = v11;
      *a6 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return (unsigned int)BuildExpiryTime;
}
