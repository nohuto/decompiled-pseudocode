/*
 * XREFs of ?InjectTouchpadAction@CPTPProcessor@@SAJPEAURawInputManagerDeviceObject@@W4tagTOUCHPAD_ACTION@@@Z @ 0x14020DF40
 * Callers:
 *     <none>
 * Callees:
 *     SendMessageTo @ 0x140048F20 (SendMessageTo.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x1400DA5F0 (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 *     ?EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x14020EE28 (-EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 *     ?StopInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x14020F17C (-StopInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 */

__int64 __fastcall CPTPProcessor::InjectTouchpadAction(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  __int64 UserSessionState; // rdi
  __int64 v13; // rcx
  struct tagPOINT *v14; // rax
  struct tagPOINT v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rcx
  struct tagPOINT *v20; // rax
  struct tagPOINT v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+20h] [rbp-18h] BYREF
  int v26; // [rsp+28h] [rbp-10h]
  int v27; // [rsp+2Ch] [rbp-Ch]

  v2 = *(_QWORD *)(a1 + 528);
  if ( a2 <= 5 )
  {
    if ( a2 == 5 )
    {
      v6 = 7;
      goto LABEL_25;
    }
    if ( !a2 )
    {
      v6 = 0;
      goto LABEL_25;
    }
    v3 = a2 - 1;
    if ( !v3 )
    {
      v6 = 3;
      goto LABEL_25;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
      v6 = 6;
      goto LABEL_25;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      v6 = 1;
      goto LABEL_25;
    }
    if ( v5 == 1 )
    {
      v6 = 4;
LABEL_25:
      v24 = *(_QWORD *)(v2 + 792);
      v27 = 0;
      v26 = v6;
      v25 = v24;
      SendMessageTo(21LL, &v25, 16LL);
      return 0LL;
    }
    return 3221225485LL;
  }
  v7 = a2 - 6;
  if ( !v7 )
  {
    v6 = 2;
    goto LABEL_25;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v6 = 5;
    goto LABEL_25;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v6 = 8;
    goto LABEL_25;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
      return 3221225485LL;
    UserSessionState = W32GetUserSessionState(a1);
    v14 = (struct tagPOINT *)W32GetUserSessionState(v13);
    v15 = CPTPProcessor::TransformTPScreenToHimetric((struct tagHID_POINTER_DEVICE_INFO *)v2, v14[2405]);
    v17 = W32GetUserSessionState(v16);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CInertiaManager::EndInertiaAtPoint)(
      UserSessionState + 16920,
      *(_QWORD *)(v17 + 19240),
      v15,
      4LL);
  }
  else
  {
    v18 = W32GetUserSessionState(a1);
    v20 = (struct tagPOINT *)W32GetUserSessionState(v19);
    v21 = CPTPProcessor::TransformTPScreenToHimetric((struct tagHID_POINTER_DEVICE_INFO *)v2, v20[2405]);
    v23 = W32GetUserSessionState(v22);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::StopInertiaAtPoint)(
      v18 + 16920,
      *(_QWORD *)(v23 + 19240),
      v21);
  }
  return 0LL;
}
