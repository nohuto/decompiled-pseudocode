/*
 * XREFs of CHidInput_Destroy @ 0x14020F700
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCRIMBase@@UEAAPEAXI@Z @ 0x140146A10 (--_GCRIMBase@@UEAAPEAXI@Z.c)
 *     ??9?$SGHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z @ 0x140149F08 (--9-$SGHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z.c)
 */

char __fastcall CHidInput_Destroy(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rcx
  CRIMBase *v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  LOBYTE(UserSessionState) = SGHIDgpHidInput<CHidInput *>::operator!=(a1, &v5);
  if ( (_BYTE)UserSessionState )
  {
    v3 = *(CRIMBase **)(W32GetUserSessionState(v2) + 16840);
    if ( v3 )
      CRIMBase::`scalar deleting destructor'(v3, 1);
    UserSessionState = W32GetUserSessionState(v3);
    *(_QWORD *)(UserSessionState + 16840) = 0LL;
  }
  return UserSessionState;
}
