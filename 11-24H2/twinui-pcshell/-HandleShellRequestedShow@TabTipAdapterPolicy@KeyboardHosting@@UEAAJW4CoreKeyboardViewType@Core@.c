/*
 * XREFs of ?HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAW4ShellRequestType@5Shell@68@@Z @ 0x180486590
 * Callers:
 *     <none>
 * Callees:
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C4CCC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??$HandleShellRequestedShow@AEAU?$atomic@_N@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@_N@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180484B10 (--$HandleShellRequestedShow@AEAU-$atomic@_N@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windo.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleShellRequestedShow(__int64 a1, int a2, char *a3)
{
  __int64 v3; // rcx
  __int64 v4; // r9
  char v5; // r10

  v3 = a1 + 909;
  *(_DWORD *)a3 = 0;
  if ( a2 || std::_Atomic_storage<bool,1>::load(v3) && *(_BYTE *)(v4 + 847) == v5 && *(_BYTE *)(v4 + 882) == v5 )
    *(_DWORD *)a3 = 1;
  TouchKeyboardExperienceTelemetryLogger::HandleShellRequestedShow<std::atomic<bool> &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    v3,
    a3);
  return 0LL;
}
