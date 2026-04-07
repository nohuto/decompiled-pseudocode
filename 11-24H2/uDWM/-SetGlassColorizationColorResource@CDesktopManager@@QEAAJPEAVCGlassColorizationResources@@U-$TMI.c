/*
 * XREFs of ?SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@M@Z @ 0x18002C030
 * Callers:
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18002BC00 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CGlassColorizationResources@@QEAAJPEBVCGlassColorizationParameters@@@Z @ 0x18002C0C0 (-Update@CGlassColorizationResources@@QEAAJPEBVCGlassColorizationParameters@@@Z.c)
 *     ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x18002C150 (-GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Col.c)
 *     ??0CGlassColorizationParameters@@QEAA@XZ @ 0x18002CA1C (--0CGlassColorizationParameters@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

int __fastcall CDesktopManager::SetGlassColorizationColorResource(__int64 a1, CGlassColorizationResources *a2)
{
  int v3; // edx
  int v4; // r8d
  int result; // eax
  int v6; // ebx
  _BYTE v7[32]; // [rsp+30h] [rbp-38h] BYREF

  CGlassColorizationParameters::CGlassColorizationParameters((CGlassColorizationParameters *)v7);
  CDesktopManager::GetEffectiveGlassColorizationParameters(
    (_DWORD)CDesktopManager::s_pDesktopManagerInstance,
    v3,
    v4,
    0,
    (__int64)v7);
  result = CGlassColorizationResources::Update(a2, (const struct CGlassColorizationParameters *)v7);
  v6 = result;
  if ( result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, result, 0x3B6u, 0LL);
    return v6;
  }
  return result;
}
