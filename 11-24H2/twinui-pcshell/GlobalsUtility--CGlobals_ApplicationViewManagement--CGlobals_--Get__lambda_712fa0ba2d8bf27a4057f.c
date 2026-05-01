/*
 * XREFs of GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_712fa0ba2d8bf27a4057fb1c931fbf13___ @ 0x1803112CC
 * Callers:
 *     ?SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z @ 0x180101A10 (-SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18002B164 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18002B1E4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x1801AFFE4 (-_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z.c)
 */

__int64 __fastcall GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_712fa0ba2d8bf27a4057fb1c931fbf13___(
        __int64 a1)
{
  int v2; // edx
  _DWORD *v3; // rax
  unsigned __int8 v5[4]; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+34h] [rbp-14h]
  int v7; // [rsp+38h] [rbp-10h]
  HKEY *v8; // [rsp+58h] [rbp+10h] BYREF

  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v8);
  v2 = 0;
  if ( v8 )
  {
    v3 = *(_DWORD **)(a1 + 8);
    *(_DWORD *)v5 = 4;
    v6 = 1397960752;
    LOBYTE(v2) = *v3 != 0;
    v7 = v2;
    ApplicationViewManagement::CPersistence::_PersistData(
      v8 + 5,
      **(const unsigned __int16 ***)a1,
      L"ShowInSwitchers",
      v5,
      0xCu);
  }
  return Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((volatile signed __int32 **)&v8);
}
