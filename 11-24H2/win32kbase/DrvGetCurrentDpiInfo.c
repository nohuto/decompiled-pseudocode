/*
 * XREFs of DrvGetCurrentDpiInfo @ 0x140010BFC
 * Callers:
 *     NtGdiGetCurrentDpiInfo @ 0x140010B60 (NtGdiGetCurrentDpiInfo.c)
 * Callees:
 *     EnterSharedCrit @ 0x140010CB0 (EnterSharedCrit.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x140010CF0 (DrvGetCurrentDpiInfoFromHDev.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMValidateSharedHandle @ 0x140042DB0 (HMValidateSharedHandle.c)
 */

__int64 __fastcall DrvGetCurrentDpiInfo(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int CurrentDpiInfoFromHDev; // ebx

  EnterSharedCrit(1LL, 1LL);
  v4 = HMValidateSharedHandle(a1);
  if ( v4 && (v5 = *(_QWORD *)(v4 + 80)) != 0 )
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v5, a2);
  else
    CurrentDpiInfoFromHDev = -1073741811;
  UserSessionSwitchLeaveCritWithNonPaged();
  return CurrentDpiInfoFromHDev;
}
