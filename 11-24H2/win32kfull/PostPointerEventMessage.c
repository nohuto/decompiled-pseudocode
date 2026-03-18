/*
 * XREFs of PostPointerEventMessage @ 0x14012D8F0
 * Callers:
 *     PostPointerDeviceInRangeMessage @ 0x14012D8B0 (PostPointerDeviceInRangeMessage.c)
 *     PostPointerDeviceOutOfRangeMessage @ 0x14012D8D0 (PostPointerDeviceOutOfRangeMessage.c)
 *     PostDeviceNotification @ 0x14012F608 (PostDeviceNotification.c)
 * Callees:
 *     _PostMessage @ 0x140066460 (_PostMessage.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     AdjustPwndPtiPqForDelegation @ 0x14012E3D4 (AdjustPwndPtiPqForDelegation.c)
 *     PostInputMessage @ 0x14012ED84 (PostInputMessage.c)
 *     PHIDTtoPT @ 0x14018F4FC (PHIDTtoPT.c)
 *     ?ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z @ 0x14023FF60 (-ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x14027F22C (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall PostPointerEventMessage(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // r12d
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r15
  _QWORD *v12; // rbx
  __int64 v13; // r14
  const struct tagTHREADINFO *v14; // rsi
  int CurrentWin32kSessionId; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  int IsEnabledDeviceUsageNoInline; // eax
  int v19; // ecx
  int v20; // [rsp+88h] [rbp+7h] BYREF
  int v21[3]; // [rsp+8Ch] [rbp+Bh] BYREF
  __int64 v22; // [rsp+98h] [rbp+17h] BYREF
  struct tagWND *v23; // [rsp+A0h] [rbp+1Fh] BYREF
  struct tagQ *v24; // [rsp+A8h] [rbp+27h] BYREF

  v6 = a2;
  result = W32GetUserSessionState(a1, a2);
  v11 = (_QWORD *)(result + 16712);
  v12 = *(_QWORD **)(result + 16712);
  if ( !a4 )
  {
    result = PHIDTtoPT(a1, v9, 0LL);
    a3 = (int)result;
  }
  if ( v12 != v11 )
  {
    result = a4;
    while ( 1 )
    {
      v13 = *(v12 - 2);
      v14 = *(const struct tagTHREADINFO **)(v13 + 16);
      if ( (_DWORD)result )
        break;
      if ( *((_DWORD *)v12 - 2) )
      {
        v10 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19200);
        if ( *((_QWORD *)v14 + 62) == v10 )
        {
          IsEnabledDeviceUsageNoInline = Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline(
                                           v10,
                                           v9,
                                           v16,
                                           v17);
          v19 = *(_DWORD *)(a1 + 24);
          if ( IsEnabledDeviceUsageNoInline )
          {
            if ( v19 != 7 || ShouldReceiveTouchpadMessages(v14, *(HWND *)v13) )
              goto LABEL_24;
          }
          else
          {
            if ( v19 == 7 )
            {
              v21[1] = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 484LL);
            }
LABEL_24:
            PostMessage(v13, v6, a3, *(_QWORD *)(a1 + 792));
          }
        }
LABEL_25:
        result = a4;
      }
      v12 = (_QWORD *)*v12;
      if ( v12 == v11 )
        return result;
    }
    if ( v6 == 568 && (unsigned __int64)(a3 - 1) <= 1 )
    {
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
      v10 = **(unsigned int **)(*((_QWORD *)v14 + 62) + 40LL);
      v9 = (_DWORD)v10 == CurrentWin32kSessionId;
      if ( (_DWORD)v10 != CurrentWin32kSessionId )
        goto LABEL_13;
    }
    else
    {
      v9 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19200);
      if ( *((_QWORD *)v14 + 62) != v9 )
        goto LABEL_25;
    }
    if ( *(_DWORD *)(a1 + 24) != 7 )
      goto LABEL_14;
    v9 = ShouldReceiveTouchpadMessages(v14, *(HWND *)*(v12 - 2));
LABEL_13:
    if ( !(_DWORD)v9 )
      goto LABEL_25;
LABEL_14:
    v23 = (struct tagWND *)*(v12 - 2);
    v21[0] = 0;
    v20 = 0;
    v22 = *((_QWORD *)v23 + 2);
    v24 = *(struct tagQ **)(v22 + 472);
    if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                         (unsigned int)&v24,
                         (unsigned int)&v23,
                         (unsigned int)&v22,
                         v6,
                         0LL,
                         (__int64)v21,
                         (__int64)&v20) )
      PostInputMessage(v24, v23, v6, *(_QWORD *)(a1 + 792), 0, 0LL, 0LL, 0, 0LL, 0LL, 0LL, v21[0], v20, v22);
    goto LABEL_25;
  }
  return result;
}
