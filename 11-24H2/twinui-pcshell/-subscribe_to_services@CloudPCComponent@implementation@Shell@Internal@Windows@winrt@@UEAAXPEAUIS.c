/*
 * XREFs of ?subscribe_to_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180643A50
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1801950E4 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::subscribe_to_services(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this,
        struct IServiceProvider *a2)
{
  __int64 v2; // rsi
  bool v3; // di
  __int64 v5; // rax
  __int64 v6; // rax
  LSTATUS DWORD; // eax
  __int64 v8; // rcx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 13);
  v3 = 0;
  v5 = v2 + 24;
  if ( !v2 )
    v5 = 40LL;
  (***(void (__fastcall ****)(_QWORD))v5)(*(_QWORD *)v5);
  v6 = v2 + 8;
  if ( !v2 )
    v6 = 24LL;
  (***(void (__fastcall ****)(_QWORD, struct IServiceProvider *))v6)(*(_QWORD *)v6, a2);
  v9 = 0;
  DWORD = SHRegGetDWORD(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\RemoteSystemIntegration",
            L"SwitcherIntegrationEnabled",
            &v9);
  if ( DWORD == -2147024894 )
  {
    v3 = 1;
  }
  else if ( DWORD >= 0 )
  {
    v3 = v9 != 0;
  }
  v8 = v2 + 234;
  if ( !v2 )
    v8 = 250LL;
  *(_BYTE *)v8 = v3;
}
