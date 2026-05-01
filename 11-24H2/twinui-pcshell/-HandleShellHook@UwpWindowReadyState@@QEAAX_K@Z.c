/*
 * XREFs of ?HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z @ 0x1801B5F44
 * Callers:
 *     ?HandlePresentationReadinessChange@UwpWindowWrapperBase@@UEAAX_K@Z @ 0x1801B5EE0 (-HandlePresentationReadinessChange@UwpWindowWrapperBase@@UEAAX_K@Z.c)
 * Callees:
 *     ?Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x18001B6D0 (-Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x18001BA4C (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1801C98C8 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ @ 0x1801CDBA4 (-_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ.c)
 */

void __fastcall UwpWindowReadyState::HandleShellHook(UwpWindowReadyState *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // r8d
  UwpWindowReadyState *v5; // rcx
  bool IsReadyForPresentation; // al
  __int64 v7; // rdx

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
    UwpWindowReadyState::WaitFlags::Clear((int *)(v3 + 8), (__int64)this, v4);
  }
  if ( WindowReadyState::IsReadyForPresentation(this) )
    UwpWindowReadyState::_WaitForUnfreezeIfNecessary(v5);
  IsReadyForPresentation = WindowReadyState::IsReadyForPresentation(this);
  if ( IsReadyForPresentation )
  {
    LOBYTE(v7) = IsReadyForPresentation;
    std::_Func_class<void,bool>::operator()((char *)this + 24, v7);
  }
}
