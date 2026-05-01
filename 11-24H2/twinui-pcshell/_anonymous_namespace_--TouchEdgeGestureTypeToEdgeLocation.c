/*
 * XREFs of _anonymous_namespace_::TouchEdgeGestureTypeToEdgeLocation @ 0x180594460
 * Callers:
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x1801ED1D0 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 * Callees:
 *     Mirror_IsThreadRTL @ 0x180097AB4 (Mirror_IsThreadRTL.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall anonymous_namespace_::TouchEdgeGestureTypeToEdgeLocation(
        int a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 result; // rax
  int v8; // ecx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a1 - 1;
  if ( !v4 )
    return 1LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 3LL;
  v6 = v5 - 2;
  if ( !v6 )
  {
    v9 = -((unsigned int)Mirror_IsThreadRTL() != 0);
    return v9 & 2;
  }
  result = 4LL;
  v8 = v6 - 4;
  if ( !v8 )
  {
    LOBYTE(v9) = -((unsigned int)Mirror_IsThreadRTL() == 0);
    return v9 & 2;
  }
  if ( v8 != 8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x23,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegestureprocessor.cpp",
      a4);
  return result;
}
