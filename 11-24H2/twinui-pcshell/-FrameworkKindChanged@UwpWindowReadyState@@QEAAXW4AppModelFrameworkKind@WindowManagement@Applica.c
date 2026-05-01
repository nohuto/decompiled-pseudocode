/*
 * XREFs of ?FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801CECC8
 * Callers:
 *     ?SetFrameworkKind@UwpWindowWrapperBase@@UEAAJW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801CEC60 (-SetFrameworkKind@UwpWindowWrapperBase@@UEAAJW4AppModelFrameworkKind@WindowManagement@Applicatio.c)
 * Callees:
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@Z @ 0x18001B704 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@ViewManag.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1801C98C8 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 */

ULONG __fastcall UwpWindowReadyState::FrameworkKindChanged(__int64 a1, int a2)
{
  unsigned int *v2; // rdi
  char v3; // bl
  char v5; // bp
  unsigned int v6; // eax
  ULONG result; // eax
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = (unsigned int *)(a1 + 8);
  v3 = 0;
  v8 = *(_DWORD *)(a1 + 8);
  v5 = v8 == 0;
  if ( a2 == 6 )
    v6 = v8 | 0x10;
  else
    v6 = v8 & 0xFFFFFFEF;
  *v2 = v6;
  result = ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum UwpWindowReadinessWaitFlags const &,enum UwpWindowReadinessWaitFlags &>(
             (__int64 *)a1,
             &v8,
             (int *)(a1 + 8));
  if ( *(_QWORD *)a1 && !*v2 )
    v3 = 1;
  if ( v5 != v3 )
    return std::_Func_class<void,bool>::operator()(a1 + 24, v3);
  return result;
}
