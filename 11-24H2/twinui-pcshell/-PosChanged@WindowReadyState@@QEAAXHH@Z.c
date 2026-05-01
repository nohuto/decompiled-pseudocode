/*
 * XREFs of ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x18044521C
 * Callers:
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1804412CC (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 * Callees:
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x18001BA4C (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1801C98C8 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x1804452B8 (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 */

void __fastcall WindowReadyState::PosChanged(WindowReadyState *this, unsigned int a2, unsigned int a3)
{
  _DWORD *v5; // rcx
  char v7; // bp
  char IsReadyForPresentation; // al

  v5 = (_DWORD *)((char *)this + 8);
  v7 = *v5 == 0;
  if ( a2 != *((_DWORD *)this + 4) || a3 != *((_DWORD *)this + 5) )
  {
    if ( *((_BYTE *)this + 12) )
      WindowReadyState::WaitFlags::Set(v5, this, 2LL);
    BeginLayoutUpdate(*(_QWORD *)this);
    *((_QWORD *)this + 2) = __PAIR64__(a3, a2);
  }
  IsReadyForPresentation = WindowReadyState::IsReadyForPresentation(this);
  if ( v7 != IsReadyForPresentation )
    std::_Func_class<void,bool>::operator()((__int64)this + 24, IsReadyForPresentation);
}
