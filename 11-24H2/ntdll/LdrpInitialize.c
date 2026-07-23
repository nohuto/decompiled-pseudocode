/*
 * XREFs of LdrpInitialize @ 0x18002C238
 * Callers:
 *     LdrInitializeThunk @ 0x18002C210 (LdrInitializeThunk.c)
 * Callees:
 *     InitSpecialMachineFrames @ 0x18002C2A4 (InitSpecialMachineFrames.c)
 *     InitSecurityCookie @ 0x18002C338 (InitSecurityCookie.c)
 *     __cpu_features_init @ 0x1801296DC (__cpu_features_init.c)
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
