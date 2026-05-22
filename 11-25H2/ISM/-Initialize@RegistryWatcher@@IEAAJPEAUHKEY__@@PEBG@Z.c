/*
 * XREFs of ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x18000D1B4
 * Callers:
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18008ECDC (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 * Callees:
 *     ?OnKeyChange@RegistryWatcher@@AEAAJXZ @ 0x18000C3C4 (-OnKeyChange@RegistryWatcher@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18008CF24 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RegistryWatcher::Initialize(HKEY *this, HKEY a2, const unsigned __int16 *a3)
{
  _QWORD *v5; // r14
  signed int LastError; // esi
  HKEY *v7; // rdi
  __int64 v8; // rdx
  HKEY v9; // rcx
  LSTATUS v11; // eax
  HKEY EventW; // rax
  const char *v13; // r9
  int phkResult; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = this + 2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(this + 2);
  LastError = CoreUICreate(v5);
  v7 = this + 3;
  if ( LastError >= 0 )
  {
    v11 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, a3, 0, 0x20019u, this + 3);
    LastError = v11;
    if ( v11 > 0 )
      LastError = (unsigned __int16)v11 | 0x80070000;
    if ( LastError >= 0 )
    {
      EventW = (HKEY)CreateEventW(0LL, 0, 0, 0LL);
      this[4] = EventW;
      if ( !EventW )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x4C,
                      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
                      v13);
        goto LABEL_4;
      }
      LastError = RegistryWatcher::OnKeyChange((RegistryWatcher *)this);
      if ( LastError >= 0 )
      {
        LastError = (*(__int64 (__fastcall **)(_QWORD, HKEY, int (*)(void *, unsigned int, void *), HKEY *))(*(_QWORD *)*v5 + 272LL))(
                      *v5,
                      this[4],
                      RegistryWatcher::OnChangeCallbackStatic,
                      this);
        if ( LastError >= 0 )
          return 0LL;
        v8 = 82LL;
      }
      else
      {
        v8 = 77LL;
      }
    }
    else
    {
      v8 = 73LL;
    }
  }
  else
  {
    v8 = 65LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
    (const char *)(unsigned int)LastError,
    phkResult);
LABEL_4:
  if ( *v7 )
  {
    RegCloseKey(*v7);
    *v7 = 0LL;
  }
  v9 = this[4];
  if ( v9 )
  {
    CloseHandle(v9);
    this[4] = 0LL;
  }
  return (unsigned int)LastError;
}
