/*
 * XREFs of ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x180112A64
 * Callers:
 *     ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x180412820 (-LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z.c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x1804129F0 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x180112FA4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 */

const unsigned __int16 *__fastcall PeoplePaneViewManager::s_GetAppId(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  int v4; // ecx
  const unsigned __int16 *result; // rax
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v4 = dword_1808CB52C;
  if ( !dword_1808CB52C )
  {
    v6 = 0;
    SHRegGetBOOLWithREGSAM(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
      L"PrereleaseExperience",
      a4,
      &v6);
    v4 = 2 - (v6 != 0);
    dword_1808CB52C = v4;
  }
  result = L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App";
  if ( v4 == 1 )
    return L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App";
  return result;
}
