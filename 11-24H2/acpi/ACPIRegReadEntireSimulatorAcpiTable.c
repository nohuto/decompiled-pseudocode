/*
 * XREFs of ACPIRegReadEntireSimulatorAcpiTable @ 0x1400A3A38
 * Callers:
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1400A35AC (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x14000AE88 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     OSReadRegValue @ 0x1400B6898 (OSReadRegValue.c)
 */

__int64 ACPIRegReadEntireSimulatorAcpiTable()
{
  void *Pool2; // rbx
  int v1; // eax
  char pszDest[16]; // [rsp+40h] [rbp-58h] BYREF

  Pool2 = 0LL;
  RtlStringCchPrintfA(pszDest, 9uLL, "%08lx", 0);
  while ( 1 )
  {
    v1 = OSReadRegValue(pszDest);
    if ( v1 >= 0 )
      break;
    if ( v1 != -2147483643 )
    {
      ExFreePoolWithTag(Pool2, 0);
      return 0LL;
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = (void *)ExAllocatePool2(256LL, 0LL, 1114661697LL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      0x28u,
      (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
      0);
  ExFreePoolWithTag(Pool2, 0);
  return 3221225473LL;
}
