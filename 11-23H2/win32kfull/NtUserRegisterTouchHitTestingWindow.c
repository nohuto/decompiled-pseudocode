/*
 * XREFs of NtUserRegisterTouchHitTestingWindow @ 0x1C003BA60
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x1C0026C40 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x1C003C0AC (InternalSetProp.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserRegisterTouchHitTestingWindow(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx

  v2 = a2;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  if ( v4 )
  {
    if ( gptiCurrent == *(_QWORD *)(v4 + 16) )
    {
      if ( (_DWORD)v2 )
      {
        v9 = InternalSetProp(v4, (unsigned __int16)gatomPtrTargetFlags, v2, 5LL);
      }
      else
      {
        v9 = 1;
        InternalRemoveProp(v4, (unsigned __int16)gatomPtrTargetFlags, 1u);
      }
    }
    else
    {
      UserSetLastError(5LL);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
