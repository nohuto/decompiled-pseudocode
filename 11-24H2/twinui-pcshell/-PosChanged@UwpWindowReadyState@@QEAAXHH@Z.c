/*
 * XREFs of ?PosChanged@UwpWindowReadyState@@QEAAXHH@Z @ 0x1800AA0A4
 * Callers:
 *     ?PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1800A9F94 (-PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 * Callees:
 *     ?Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x18001B6A0 (-Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x18001BA4C (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1801C98C8 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 */

void __fastcall UwpWindowReadyState::PosChanged(UwpWindowReadyState *this, unsigned int a2, unsigned int a3)
{
  int *v5; // rcx
  char v7; // bp
  char IsReadyForPresentation; // al
  __int64 v9; // rdx

  v5 = (int *)((char *)this + 8);
  v7 = *v5 == 0;
  if ( a2 != *((_DWORD *)this + 4) || a3 != *((_DWORD *)this + 5) )
  {
    if ( *((_BYTE *)this + 12) )
      UwpWindowReadyState::WaitFlags::Set(v5, (__int64)this, 2);
    BeginLayoutUpdate(*(_QWORD *)this);
    *((_QWORD *)this + 2) = __PAIR64__(a3, a2);
  }
  IsReadyForPresentation = WindowReadyState::IsReadyForPresentation(this);
  if ( v7 != IsReadyForPresentation )
  {
    LOBYTE(v9) = IsReadyForPresentation;
    std::_Func_class<void,bool>::operator()((char *)this + 24, v9);
  }
}
