/*
 * XREFs of ?Initialize@CDDisplayManager@@AEAAJXZ @ 0x18006FEA8
 * Callers:
 *     ?Create@CDDisplayManager@@SAJPEAPEAV1@@Z @ 0x18008263C (-Create@CDDisplayManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$GetActivationFactory@UIDisplayManagerStatics@Core@Display@Devices@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIDisplayManagerStatics@Core@Display@Devices@1@@Z @ 0x180070014 (--$GetActivationFactory@UIDisplayManagerStatics@Core@Display@Devices@Windows@@@Foundation@Window.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDDisplayManager::Initialize(CDDisplayManager *this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64, char *); // rsi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+38h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-20h] BYREF

  v10 = 0LL;
  string = 0LL;
  memset(&hstringHeader, 0, sizeof(hstringHeader));
  v2 = WindowsCreateStringReference(L"Windows.Devices.Display.Core.DisplayManager", 0x2Bu, &hstringHeader, &string);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x24u, 0LL);
  }
  else
  {
    v10 = 0LL;
    v4 = Windows::Foundation::GetActivationFactory<Windows::Devices::Display::Core::IDisplayManagerStatics>(
           string,
           &v10);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x25u, 0LL);
    }
    else
    {
      v5 = v10;
      v6 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v10 + 48LL);
      v7 = *((_QWORD *)this + 2);
      *((_QWORD *)this + 2) = 0LL;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v8 = v6(v5, 2LL, (char *)this + 16);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x28u, 0LL);
    }
  }
  if ( string )
    WindowsDeleteString(string);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v3;
}
