/*
 * XREFs of ?EnsureHoverPointerSourceAnimationStopped@CGlobalLightSet@@QEAAJXZ @ 0x1800C1028
 * Callers:
 *     ?RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z @ 0x1800CED94 (-RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopExpressionAnimationHelper@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@@Z @ 0x1800C137C (-StopExpressionAnimationHelper@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@@Z.c)
 */

__int64 __fastcall CGlobalLightSet::EnsureHoverPointerSourceAnimationStopped(CGlobalLightSet *this)
{
  int v2; // edi
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 129) )
  {
    v2 = CGlobalLightSet::StopExpressionAnimationHelper(this, 1LL);
    if ( v2 < 0 )
    {
      v3 = 427LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
        (const char *)(unsigned int)v2);
      return (unsigned int)v2;
    }
    v2 = CGlobalLightSet::StopExpressionAnimationHelper(this, 2LL);
    if ( v2 < 0 )
    {
      v3 = 428LL;
      goto LABEL_4;
    }
    *((_BYTE *)this + 129) = 0;
  }
  return 0LL;
}
