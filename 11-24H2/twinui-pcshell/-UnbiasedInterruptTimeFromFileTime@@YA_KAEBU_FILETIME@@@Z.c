/*
 * XREFs of ?UnbiasedInterruptTimeFromFileTime@@YA_KAEBU_FILETIME@@@Z @ 0x1801FC994
 * Callers:
 *     ?GetLastActivationTimestamp@CWin32ApplicationView@@UEAAJPEA_K@Z @ 0x1801FC920 (-GetLastActivationTimestamp@CWin32ApplicationView@@UEAAJPEA_K@Z.c)
 *     ?GetLastActivationTimestamp@CWinRTApplicationView@@UEAAJPEA_K@Z @ 0x1803117E0 (-GetLastActivationTimestamp@CWinRTApplicationView@@UEAAJPEA_K@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UnbiasedInterruptTimeFromFileTime(const struct _FILETIME *a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 UnbiasedTime; // [rsp+30h] [rbp+8h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+38h] [rbp+10h] BYREF

  v1 = (unsigned __int64)*a1;
  SystemTimeAsFileTime = 0LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  UnbiasedTime = 0LL;
  QueryUnbiasedInterruptTime(&UnbiasedTime);
  if ( !v1 )
    return 0LL;
  if ( *(_QWORD *)&SystemTimeAsFileTime < v1 )
    return UnbiasedTime;
  if ( *(_QWORD *)&SystemTimeAsFileTime - v1 < UnbiasedTime )
    return v1 + UnbiasedTime - *(_QWORD *)&SystemTimeAsFileTime;
  return 1LL;
}
