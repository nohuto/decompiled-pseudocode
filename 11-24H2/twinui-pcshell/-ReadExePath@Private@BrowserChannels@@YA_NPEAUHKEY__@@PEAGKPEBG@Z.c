/*
 * XREFs of ?ReadExePath@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEAGKPEBG@Z @ 0x180693FD0
 * Callers:
 *     ?GetInstalledBrowserChannelInfo@@YA_NW4ChannelId@BrowserChannels@@W4InstallationLevel@2@PEAUInfo@2@@Z @ 0x18068EB68 (-GetInstalledBrowserChannelInfo@@YA_NW4ChannelId@BrowserChannels@@W4InstallationLevel@2@PEAUInfo.c)
 * Callees:
 *     ?ReadRegStringValue@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEBGPEAGK@Z @ 0x180694048 (-ReadRegStringValue@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEBGPEAGK@Z.c)
 */

bool __fastcall BrowserChannels::Private::ReadExePath(
        BrowserChannels::Private *this,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        const WCHAR *a4)
{
  DWORD FileAttributesW; // eax
  bool result; // al
  unsigned int v8; // [rsp+20h] [rbp-8h]

  result = BrowserChannels::Private::ReadRegStringValue(this, (HKEY)&stru_1807D2FE8, a2, (unsigned __int16 *)0x104, v8)
        && !PathCchAppend(a2, 0x104uLL, a4)
        && (FileAttributesW = GetFileAttributesW(a2), FileAttributesW != -1)
        && (FileAttributesW & 0x10) == 0;
  return result;
}
