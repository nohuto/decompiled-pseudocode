/*
 * XREFs of GreSetDCOwnerEx @ 0x14000F100
 * Callers:
 *     CreateCacheDC @ 0x14000E010 (CreateCacheDC.c)
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1401527A0 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     InitUserScreen @ 0x140162CD0 (InitUserScreen.c)
 *     DestroyCacheDC @ 0x1401689F0 (DestroyCacheDC.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1401C5BB0 (GreCleanDCAndSetOwnerEx.c)
 * Callees:
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C5800 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 */

int __fastcall GreSetDCOwnerEx(struct HOBJ__ *a1, unsigned int a2, int a3, int a4)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState();
  return GreSetDCOwnerExFastOpt(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), a1, a2, a3, a4);
}
