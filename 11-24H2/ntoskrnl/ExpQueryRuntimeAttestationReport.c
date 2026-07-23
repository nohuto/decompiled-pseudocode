/*
 * XREFs of ExpQueryRuntimeAttestationReport @ 0x1407B59D0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1404F96D8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     VslQueryRuntimeAttestationReport @ 0x14070DA00 (VslQueryRuntimeAttestationReport.c)
 */

__int64 __fastcall ExpQueryRuntimeAttestationReport(
        void *Src,
        int a2,
        void *a3,
        unsigned int a4,
        unsigned int *a5,
        char a6)
{
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( !Src )
    return 3221225485LL;
  if ( a2 != 48 )
    return 3221225476LL;
  if ( !a3 && a4 || !a5 )
    return 3221225485LL;
  if ( a6 )
    RtlCopyFromUser(v9, Src, 0x30uLL);
  else
    RtlCopyVolatileMemory(v9, Src, 0x30uLL);
  *a5 = a4;
  return VslQueryRuntimeAttestationReport((__int64)v9, a3, a5, a6);
}
