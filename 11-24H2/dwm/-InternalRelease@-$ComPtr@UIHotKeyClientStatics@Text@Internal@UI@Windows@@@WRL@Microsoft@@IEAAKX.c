/*
 * XREFs of ?InternalRelease@?$ComPtr@UIHotKeyClientStatics@Text@Internal@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x14000CC14
 * Callers:
 *     ?RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ @ 0x14000CC90 (-RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140010010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Internal::Text::IHotKeyClientStatics>::InternalRelease(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
