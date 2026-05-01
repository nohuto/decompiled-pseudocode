/*
 * XREFs of ?IsRestrictedAppActive@BroadcastDVRComponent@@UEAAJPEAE@Z @ 0x180317400
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BroadcastDVRComponent::IsRestrictedAppActive(BroadcastDVRComponent *this, unsigned __int8 *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *a2 = 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D4,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
