/*
 * XREFs of ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x1804451B0
 * Callers:
 *     ?HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z @ 0x180440AA0 (-HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z.c)
 * Callees:
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x18001BA4C (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1801C98C8 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18044517C (-Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x18044546C (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 */

void __fastcall WindowReadyState::HandleShellHook(WindowReadyState *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // r8d
  WindowReadyState *v5; // rcx
  char IsReadyForPresentation; // al

  if ( WindowReadyState::IsReadyForPresentation(this) )
    return;
  if ( v2 == 36 )
  {
    v4 = 4;
    goto LABEL_6;
  }
  if ( v2 == 38 )
  {
    v4 = 2;
LABEL_6:
    WindowReadyState::WaitFlags::Clear((int *)(v3 + 8), (__int64 *)this, v4);
  }
  if ( WindowReadyState::IsReadyForPresentation(this) )
    WindowReadyState::_WaitForUnfreezeIfNecessary(v5);
  IsReadyForPresentation = WindowReadyState::IsReadyForPresentation(this);
  if ( IsReadyForPresentation )
    std::_Func_class<void,bool>::operator()((__int64)this + 24, IsReadyForPresentation);
}
