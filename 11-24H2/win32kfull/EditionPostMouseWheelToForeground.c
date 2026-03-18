/*
 * XREFs of EditionPostMouseWheelToForeground @ 0x140237BD0
 * Callers:
 *     <none>
 * Callees:
 *     AdjustPwndPtiPqForDelegation @ 0x14012E3D4 (AdjustPwndPtiPqForDelegation.c)
 *     PostInputMessage @ 0x14012ED84 (PostInputMessage.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x140274E78 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall EditionPostMouseWheelToForeground(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        struct tagINPUT_MESSAGE_SOURCE *a8,
        struct tagUIPI_INFO **a9)
{
  unsigned int v12; // edi
  __int64 UserSessionState; // rax
  void *v14; // rbx
  __int64 result; // rax
  int v16; // [rsp+88h] [rbp-1h] BYREF
  int v17; // [rsp+8Ch] [rbp+3h] BYREF
  __int64 v18; // [rsp+90h] [rbp+7h] BYREF
  struct tagQ *v19; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+A0h] [rbp+17h] BYREF

  v12 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v14 = 0LL;
  v20 = 0LL;
  v19 = *(struct tagQ **)(UserSessionState + 18944);
  v18 = 0LL;
  v17 = 0;
  v16 = 0;
  result = AdjustPwndPtiPqForDelegation((__int64 *)&v19, &v20, &v18, v12, a8, &v17, &v16);
  if ( (_DWORD)result )
  {
    if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *a9 )
        v14 = (void *)*((_QWORD *)*a9 + 1);
    }
    return PostInputMessage(v19, 0LL, v12, a2, a3, a4, a5, a6, a7, a8, v14, a9[1], v17, v16, v18);
  }
  return result;
}
