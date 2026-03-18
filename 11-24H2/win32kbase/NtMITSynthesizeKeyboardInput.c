/*
 * XREFs of NtMITSynthesizeKeyboardInput @ 0x1401053D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14004FA04 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 *     HMValidateHandleWithDescriptor @ 0x140099270 (HMValidateHandleWithDescriptor.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ProcessKeyboardInjectedInput @ 0x1400FB4F8 (ProcessKeyboardInjectedInput.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140189DE4 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ResolveContainerId @ 0x14019C88C (ResolveContainerId.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall NtMITSynthesizeKeyboardInput(__int64 a1, void *a2, volatile void *a3)
{
  int v5; // esi
  int v6; // ebx
  unsigned int v7; // edi
  _QWORD *UserSessionState; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // ecx
  __int64 CurrentProcessWow64Process; // rax
  unsigned __int64 v13; // rcx
  int v14; // eax
  int v15; // r13d
  int v16; // r14d
  int v17; // esi
  int v18; // r12d
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // rax
  int v24; // [rsp+60h] [rbp-F8h] BYREF
  int v25; // [rsp+64h] [rbp-F4h]
  int v26; // [rsp+68h] [rbp-F0h]
  int v27; // [rsp+6Ch] [rbp-ECh]
  unsigned __int64 v28; // [rsp+88h] [rbp-D0h]
  _OWORD v29[5]; // [rsp+90h] [rbp-C8h] BYREF
  _OWORD v30[4]; // [rsp+E0h] [rbp-78h] BYREF

  v5 = a1;
  v6 = 0;
  v7 = 0;
  v24 = 0;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v9;
  if ( v9 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  memset(v30, 0, sizeof(v30));
  if ( !IsInputThread(v10) )
  {
    v11 = 5;
LABEL_5:
    UserSetLastError(v11);
    goto LABEL_26;
  }
  memset(v29, 0, 0x40uLL);
  RtlCopyFromUser(v29, a2, 0x40uLL);
  v30[0] = v29[0];
  v30[1] = v29[1];
  v30[2] = v29[2];
  v30[3] = v29[3];
  if ( (v5 & 3) != 0 )
  {
    v24 = 0;
    if ( DWORD1(v29[1]) == 2 )
      ResolveContainerId((char *)&v30[1] + 8, &v24);
    else
      v24 = DWORD2(v29[1]);
    v7 = IVRootDeliver::Keyboard::VirtualizeKeyboardInput(
           v5,
           (IVRootDeliver::Keyboard::Detail *)&v24,
           (__int64 *)v30,
           *((const struct _KEYBOARD_INPUT_DATA **)&v30[2] + 1));
  }
  else
  {
    if ( v5 != 4 )
    {
      if ( v5 != 8 )
        goto LABEL_26;
      v22 = (__int64 *)HMValidateHandleWithDescriptor(*((void **)&v29[2] + 1), 0x13u, 0);
      if ( !*((_QWORD *)&v30[2] + 1) || v22 )
      {
        ProcessKeyboardInjectedInput((__int64)v30, v22, (__int64)&v30[3]);
        v7 = 1;
        goto LABEL_26;
      }
      v7 = 0;
      v11 = 6;
      goto LABEL_5;
    }
    xxxUpdateGlobalsAndSendKeyEvent(
      WORD4(v29[0]),
      LOWORD(v29[0]),
      HIDWORD(v29[0]),
      0,
      *((__int64 *)&v29[2] + 1),
      0LL,
      v29[1],
      DWORD1(v29[0]) != 0,
      0,
      0LL,
      0LL,
      (__int64)&v30[3]);
    v7 = 1;
    if ( a3 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
      ProbeForWrite(a3, 0x100uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      v25 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v26 = 0;
      v17 = 0;
      v18 = 0;
      v27 = 0;
      while ( v14 < 256 )
      {
        v19 = W32GetUserSessionState(v13);
        v25 = v6 & 3;
        v28 = (unsigned __int64)(unsigned __int8)v6 >> 2;
        v20 = (unsigned int)(2 * v25);
        if ( ((unsigned __int8)(1 << (2 * v25)) & *(_BYTE *)(v28 + v19 + 14336)) != 0 )
        {
          LOBYTE(v20) = *((_BYTE *)a3 + v15) | 0x80;
          *((_BYTE *)a3 + v17) = v20;
          v16 = v26;
          v18 = v27;
        }
        v21 = W32GetUserSessionState(v20);
        v13 = v28;
        if ( ((unsigned __int8)(1 << (2 * v25 + 1)) & *(_BYTE *)(v21 + v28 + 14336)) != 0 )
        {
          LOBYTE(v13) = *((_BYTE *)a3 + v16) | 1;
          *((_BYTE *)a3 + v18) = v13;
        }
        v14 = v6 + 1;
        v17 = v14;
        ++v6;
        v25 = v14;
        v15 = v14;
        v16 = v14;
        v26 = v14;
        v18 = v14;
        v27 = v14;
      }
    }
  }
LABEL_26:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v7;
}
