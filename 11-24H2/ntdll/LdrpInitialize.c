/*
 * XREFs of LdrpInitialize @ 0x1800973E8
 * Callers:
 *     LdrInitializeThunk @ 0x1800973C0 (LdrInitializeThunk.c)
 * Callees:
 *     InitSpecialMachineFrames @ 0x180097454 (InitSpecialMachineFrames.c)
 *     InitSecurityCookie @ 0x1800974E8 (InitSecurityCookie.c)
 *     __cpu_features_init @ 0x18012B4AC (__cpu_features_init.c)
 */

struct _TEB *__fastcall LdrpInitialize(__int64 a1, __int64 a2)
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
