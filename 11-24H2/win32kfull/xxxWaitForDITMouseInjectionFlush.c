/*
 * XREFs of xxxWaitForDITMouseInjectionFlush @ 0x1401C8EA8
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1400A83D8 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x140274038 (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 *     ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x140274624 (-xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxRemoveQueueCompletion @ 0x140065F00 (xxxRemoveQueueCompletion.c)
 *     ?xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167D6C (-xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??BINTERLOCKEDINT@@QEBAHXZ @ 0x140272AEC (--BINTERLOCKEDINT@@QEBAHXZ.c)
 */

__int64 __fastcall xxxWaitForDITMouseInjectionFlush(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rdi
  __int64 v8; // rcx
  __int32 v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  NTSTATUS v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  LONG v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  PVOID Object[2]; // [rsp+40h] [rbp-10h] BYREF
  char v29; // [rsp+70h] [rbp+20h] BYREF
  char v30; // [rsp+78h] [rbp+28h] BYREF
  char v31; // [rsp+80h] [rbp+30h] BYREF

  while ( *(_BYTE *)(W32GetUserSessionState(a1, a2) + 19288) == 1 )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    ++*(_DWORD *)(UserSessionState + 19304);
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v30, 0);
    v21 = W32GetUserSessionState(v20, v19);
    KeWaitForSingleObject(*(PVOID *)(v21 + 19296), UserRequest, 0, 0, 0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v30);
  }
  *(_BYTE *)(W32GetUserSessionState(v3, v2) + 19288) = 1;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v31, 0);
  v4 = InitiateWaitForInjectionCompletion(WakeInjectedFlushWaiter);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v31);
  if ( v4 )
  {
    v7 = PtiCurrent(v6, v5);
    v8 = *((_QWORD *)v7 + 61);
    *((_QWORD *)v7 + 170) |= 0x400000uLL;
    v9 = INTERLOCKEDINT::operator int(v8 + 16);
    Object[0] = *(PVOID *)(W32GetUserSessionState(v11, v10) + 19312);
    Object[1] = *((PVOID *)v7 + 201);
    _InterlockedExchange((volatile __int32 *)(*((_QWORD *)v7 + 61) + 16LL), 64);
    while ( 1 )
    {
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v29, 1);
      v12 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrUserRequest, 1, 0, 0LL, 0LL);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v29);
      if ( v12 != 1 )
        break;
      xxxRemoveQueueCompletion(v6, v5);
      if ( (INTERLOCKEDINT::operator int(*((_QWORD *)v7 + 61) + 8LL) & 0x40) != 0 )
        xxxReceiveMessages(v7);
      _InterlockedExchange((volatile __int32 *)(*((_QWORD *)v7 + 61) + 16LL), 64);
    }
    _InterlockedExchange((volatile __int32 *)(*((_QWORD *)v7 + 61) + 16LL), v9);
    *((_QWORD *)v7 + 170) &= ~0x400000uLL;
  }
  *(_BYTE *)(W32GetUserSessionState(v6, v5) + 19288) = 0;
  result = W32GetUserSessionState(v14, v13);
  if ( *(_DWORD *)(result + 19304) )
  {
    v22 = *(_DWORD *)(W32GetUserSessionState(v17, v16) + 19304);
    v25 = W32GetUserSessionState(v24, v23);
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(v25 + 19296), 0, v22, 0);
    result = W32GetUserSessionState(v27, v26);
    *(_DWORD *)(result + 19304) = 0;
  }
  return result;
}
