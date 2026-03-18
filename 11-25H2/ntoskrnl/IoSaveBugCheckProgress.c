/*
 * XREFs of IoSaveBugCheckProgress @ 0x14058E6E0
 * Callers:
 *     IoWriteCrashDump @ 0x14058EFA4 (IoWriteCrashDump.c)
 *     IoAddPagesForPartialKernelDump @ 0x14059C76C (IoAddPagesForPartialKernelDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14059CBDC (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     KiBugCheckWriteCrashDump @ 0x1405AF768 (KiBugCheckWriteCrashDump.c)
 *     KiDisplayBlueScreen @ 0x1405AFF14 (KiDisplayBlueScreen.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405C24DC (KiUpdateBugcheckRecoveryProgress.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14068F010 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14068F360 (BgpFwDisplayBugCheckScreenModernized.c)
 * Callees:
 *     IoUpdateBugCheckProgressEnvVariable @ 0x14058ECAC (IoUpdateBugCheckProgressEnvVariable.c)
 *     WheaLogInternalEvent @ 0x1406520E0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall IoSaveBugCheckProgress(int a1)
{
  int v2; // ecx
  __int64 result; // rax
  int v4; // edx
  _DWORD Src[10]; // [rsp+20h] [rbp-38h] BYREF

  if ( CrashdmpDumpBlock )
  {
    v2 = *(_DWORD *)(CrashdmpDumpBlock + 1404);
    if ( (v2 & 0x860000) == 0 )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1404) = v2 ^ ((unsigned __int16)a1 ^ (unsigned __int16)v2) & 0x1FF;
      result = IoUpdateBugCheckProgressEnvVariable();
    }
    if ( a1 == 4 )
    {
      v4 = 4 - *(_DWORD *)(CrashdmpDumpBlock + 1336);
      Src[3] = 0;
      Src[0] = 1733060695;
      Src[1] = 1;
      Src[2] = 40;
      Src[5] = -2147483613;
      Src[4] = 8961 - (v4 != 0);
      Src[6] = 24;
      Src[7] = 8;
      Src[9] = *(_DWORD *)(CrashdmpDumpBlock + 1404);
      Src[8] = *(_DWORD *)(CrashdmpDumpBlock + 24);
      return WheaLogInternalEvent(Src);
    }
  }
  return result;
}
