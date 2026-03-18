/*
 * XREFs of ?GetWindowCloakStateComponentUIAware@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x140093708
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x14009194C (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x140091D68 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetWindowData @ 0x1402DD148 (xxxSetWindowData.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140063510 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?_GetWindowCloakState@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x1400938F0 (-_GetWindowCloakState@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400F63C8 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall GetWindowCloakStateComponentUIAware(const struct tagWND *a1, __int64 a2)
{
  const struct tagWND *v2; // rbx
  int IsComponent; // eax
  __int64 TopLevelWindow; // rcx
  __int64 result; // rax
  struct tagWND *Host; // rax
  __int64 v7; // rdx

  v2 = a1;
  IsComponent = CoreWindowProp::IsComponent(a1, a2);
  TopLevelWindow = (__int64)v2;
  if ( !IsComponent )
    return _GetWindowCloakState(TopLevelWindow);
  if ( (_GetWindowCloakState(v2) & 1) != 0 )
    return 1LL;
  while ( 1 )
  {
    Host = CoreWindowProp::GetHost(v2);
    v2 = Host;
    if ( !Host )
      break;
    result = _GetWindowCloakState(Host);
    if ( (result & 1) != 0 )
      return result;
    if ( !(unsigned int)CoreWindowProp::IsComponent(v2, v7) )
    {
      TopLevelWindow = GetTopLevelWindow((__int64)v2);
      return _GetWindowCloakState(TopLevelWindow);
    }
  }
  return 2LL;
}
