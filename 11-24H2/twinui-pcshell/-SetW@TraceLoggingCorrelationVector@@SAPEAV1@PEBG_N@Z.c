/*
 * XREFs of ?SetW@TraceLoggingCorrelationVector@@SAPEAV1@PEBG_N@Z @ 0x18033407C
 * Callers:
 *     ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x1803374F0 (-perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences.c)
 * Callees:
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x18017872C (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1802D1F38 (__report_rangecheckfailure.c)
 */

struct TraceLoggingCorrelationVector *__fastcall TraceLoggingCorrelationVector::SetW(
        const unsigned __int16 *a1,
        __int64 a2)
{
  int v2; // r9d
  __int64 i; // r8
  char Str[144]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = 0;
  for ( i = 0LL; i < 128; ++i )
  {
    if ( !a1[i] )
      break;
    ++v2;
    Str[i] = a1[i];
  }
  if ( (unsigned __int64)v2 >= 0x81 )
    _report_rangecheckfailure();
  LOBYTE(a2) = 1;
  Str[v2] = 0;
  return TraceLoggingCorrelationVector::Set(Str, a2);
}
