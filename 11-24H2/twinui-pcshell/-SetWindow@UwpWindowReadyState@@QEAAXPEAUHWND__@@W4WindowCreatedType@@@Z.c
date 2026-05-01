/*
 * XREFs of ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1800A88BC
 * Callers:
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1800A8374 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     _lambda_eb4780c1661a573af0d01df637dfa0a8_::operator() @ 0x18018CB18 (_lambda_eb4780c1661a573af0d01df637dfa0a8_--operator().c)
 * Callees:
 *     ?Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x18001B6A0 (-Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ?Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x18001B6D0 (-Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x18001BA4C (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1801C98C8 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ @ 0x1801CDBA4 (-_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ.c)
 *     ?GetShouldWaitForLayoutCompletion@LayoutCompletedHelper@@YA_NPEAUHWND__@@@Z @ 0x1802133CC (-GetShouldWaitForLayoutCompletion@LayoutCompletedHelper@@YA_NPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

char __fastcall UwpWindowReadyState::SetWindow(__int64 a1, LayoutCompletedHelper *a2, int a3)
{
  bool IsReadyForPresentation; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // r14
  HWND v10; // rdx
  bool ShouldWaitForLayoutCompletion; // al
  char result; // al
  __int64 v13; // rdx
  struct tagRECT Rect; // [rsp+20h] [rbp-38h] BYREF

  IsReadyForPresentation = WindowReadyState::IsReadyForPresentation((WindowReadyState *)a1);
  *(_QWORD *)v8 = v7;
  v9 = IsReadyForPresentation;
  UwpWindowReadyState::WaitFlags::Clear((int *)(v8 + 8), v8, 6);
  if ( a2 )
  {
    ShouldWaitForLayoutCompletion = LayoutCompletedHelper::GetShouldWaitForLayoutCompletion(a2, v10);
    *(_BYTE *)(a1 + 12) = ShouldWaitForLayoutCompletion;
    if ( ShouldWaitForLayoutCompletion && a3 != 1 )
      UwpWindowReadyState::WaitFlags::Set((int *)(a1 + 8), a1, 2);
    Rect = 0LL;
    GetWindowRect((HWND)a2, &Rect);
    *(_DWORD *)(a1 + 16) = Rect.right - Rect.left;
    *(_DWORD *)(a1 + 20) = Rect.bottom - Rect.top;
    UwpWindowReadyState::_WaitForUnfreezeIfNecessary((UwpWindowReadyState *)a1);
  }
  result = WindowReadyState::IsReadyForPresentation((WindowReadyState *)a1);
  if ( result != v9 )
  {
    LOBYTE(v13) = result;
    return std::_Func_class<void,bool>::operator()(a1 + 24, v13);
  }
  return result;
}
