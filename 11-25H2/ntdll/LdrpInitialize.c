/*
 * XREFs of LdrpInitialize @ 0x180002A48
 * Callers:
 *     LdrInitializeThunk @ 0x180002A20 (LdrInitializeThunk.c)
 * Callees:
 *     InitSpecialMachineFrames @ 0x180002AB4 (InitSpecialMachineFrames.c)
 *     InitSecurityCookie @ 0x180002B48 (InitSecurityCookie.c)
 *     __cpu_features_init @ 0x18012CF8C (__cpu_features_init.c)
 */

__int64 __fastcall LdrpInitialize(__int64 a1, __int64 a2)
{
  if ( !SecurityCookieInitialized )
  {
    InitSecurityCookie();
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x80000000) != 0 )
      LdrpIsSecureProcess = 1;
  }
  if ( !SpecialMachineFramesInitialized )
    InitSpecialMachineFrames();
  _cpu_features_init();
  return LdrpInitializeInternal(a1, a2);
}
