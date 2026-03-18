/*
 * XREFs of EditionPostMouseMoveToQ @ 0x140237AA0
 * Callers:
 *     <none>
 * Callees:
 *     AdjustPwndPtiPqForDelegation @ 0x14012E3D4 (AdjustPwndPtiPqForDelegation.c)
 *     PostInputMessage @ 0x14012ED84 (PostInputMessage.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x140274E78 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall EditionPostMouseMoveToQ(
        struct tagQ *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct tagINPUT_MESSAGE_SOURCE *a6,
        struct tagUIPI_INFO **a7)
{
  struct tagINPUT_MESSAGE_SOURCE *v7; // rbx
  __int64 result; // rax
  void *v12; // rcx
  int v13; // [rsp+88h] [rbp+Fh] BYREF
  int v14; // [rsp+8Ch] [rbp+13h] BYREF
  __int64 v15; // [rsp+90h] [rbp+17h] BYREF
  struct tagWND *v16; // [rsp+98h] [rbp+1Fh] BYREF
  struct tagQ *v17; // [rsp+C8h] [rbp+4Fh] BYREF

  v17 = a1;
  v7 = a6;
  v16 = 0LL;
  v15 = 0LL;
  v14 = 0;
  v13 = 0;
  result = AdjustPwndPtiPqForDelegation((__int64 *)&v17, (__int64 *)&v16, &v15, 0x200u, a6, &v14, &v13);
  if ( (_DWORD)result )
  {
    if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *a7 )
        v12 = (void *)*((_QWORD *)*a7 + 1);
      else
        v12 = 0LL;
      return PostInputMessage(v17, (LARGE_INTEGER *)v16, 0x200u, 0LL, a2, a3, a4, a5, 0, v7, v12, a7[1], v14, v13, v15);
    }
    else
    {
      return PostInputMessage(v17, (LARGE_INTEGER *)v16, 0x200u, 0LL, a2, a3, a4, a5, 0, v7, 0LL, 0LL, v14, v13, v15);
    }
  }
  return result;
}
