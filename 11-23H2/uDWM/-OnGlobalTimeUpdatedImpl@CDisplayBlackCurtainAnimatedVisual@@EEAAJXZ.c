/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ @ 0x1800BD580
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B7EA4 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?SetupDelay@CDisplayBlackCurtainAnimatedVisual@@AEAAJXZ @ 0x1800BD644 (-SetupDelay@CDisplayBlackCurtainAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayBlackCurtainAnimatedVisual::OnGlobalTimeUpdatedImpl(
        CDisplayBlackCurtainAnimatedVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v5; // rax
  bool v6; // zf
  char v7; // al
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 448) )
  {
    v2 = CDisplayBlackCurtainAnimatedVisual::SetupDelay(this);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displayblackcurtainanimatedvisual.cpp",
        (const char *)(unsigned int)v2);
      return v3;
    }
    *((_BYTE *)this + 448) = 1;
  }
  v5 = *((_QWORD *)this + 55);
  if ( !v5 || !*(_BYTE *)(v5 + 72) )
    return 0LL;
  *((_QWORD *)this + 55) = 0LL;
  v6 = (*(_DWORD *)(v5 + 8))-- == 1;
  v7 = CDesktopManager::s_fTimelineDirty;
  if ( v6 )
    v7 = 1;
  CDesktopManager::s_fTimelineDirty = v7;
  v8 = CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x69,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displayblackcurtainanimatedvisual.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
