/*
 * XREFs of ?_IsTransparencyEnabled@AcrylicPolicyManager@@CA_NXZ @ 0x1802C8DBC
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801130F0 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     wistd::__function::__func__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1802E0920 (wistd--__function--__func__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__void___cdecl(enum_wil--Regis.c)
 * Callees:
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x180112FA4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 */

bool __fastcall AcrylicPolicyManager::_IsTransparencyEnabled(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  SHRegGetBOOLWithREGSAM(
    HKEY_CURRENT_USER,
    L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
    L"EnableTransparency",
    a4,
    &v5);
  return v5 != 0;
}
