/*
 * XREFs of NtUserGetKeyState @ 0x14016CDE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ApiSetEditionIsGetKeyStateBlocked @ 0x140024704 (ApiSetEditionIsGetKeyStateBlocked.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x140025314 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     EtwTraceUIPIInputError @ 0x1400256B0 (EtwTraceUIPIInputError.c)
 *     EtwTraceReleaseUserCrit @ 0x140034270 (EtwTraceReleaseUserCrit.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     PostUpdateKeyStateEvent @ 0x140095730 (PostUpdateKeyStateEvent.c)
 *     IsThreadCrossSessionAttached @ 0x1400A3C50 (IsThreadCrossSessionAttached.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     _GetKeyState @ 0x1400C5D20 (_GetKeyState.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x14016AAC8 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_W32THREADNONPAGED@@@Z @ 0x1401A8F70 (-_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserGetKeyState(unsigned int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 *v4; // r12
  __int64 UserSessionState; // r15
  __int64 v6; // rdx
  unsigned int *CurrentThreadWin32Thread; // rdi
  __int64 v8; // rcx
  void (*v9)(void); // rax
  __int64 v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rcx
  _BYTE *v17; // rax
  _DWORD *v18; // rcx
  __int16 KeyState; // r14
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // r8
  unsigned int ThreadProcessId; // edi
  __int64 v24; // rcx
  _DWORD *v25; // rcx
  unsigned int v26; // edi
  __int64 v27; // rcx
  __int64 v29; // [rsp+60h] [rbp-38h] BYREF
  int v30; // [rsp+68h] [rbp-30h]
  __int64 v31; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+18h]
  __int64 v33; // [rsp+B8h] [rbp+20h]

  EnterLeaveCritShared::EnterLeaveCritShared(&v31, 1LL);
  v3 = v31;
  v4 = (__int64 *)(v31 + 472);
  if ( (*(_DWORD *)(*(_QWORD *)(v31 + 472) + 436LL) & 1) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v2);
    CurrentThreadWin32Thread = (unsigned int *)PsGetCurrentThreadWin32Thread();
    v8 = CurrentThreadWin32Thread[6];
    LOBYTE(v8) = v8 & 0xC;
    if ( (_BYTE)v8 == 8 )
    {
      v9 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8, v6) + 48) + 3968LL);
      if ( v9 )
        v9();
      *(_DWORD *)(UserSessionState + 19844) = 0;
      *(_QWORD *)(UserSessionState + 19824) = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList(UserSessionState + 19744);
      *(_QWORD *)(UserSessionState + 24) = 0LL;
    }
    if ( *(_QWORD *)CurrentThreadWin32Thread && (CurrentThreadWin32Thread[6] & 2) == 0 )
      *(_BYTE *)(*(_QWORD *)CurrentThreadWin32Thread + 1708LL) = 0;
    v10 = PsGetCurrentThreadWin32Thread();
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 28);
      if ( v11 )
        KeBugCheckEx(0x160u, v11, 0LL, 0LL, 0LL);
    }
    EtwTraceReleaseUserCrit();
    v12 = CurrentThreadWin32Thread[6] & 0xFFFFFFF1;
    CurrentThreadWin32Thread[6] = v12;
    if ( (v12 & 0x10) != 0 )
    {
      PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, CurrentThreadWin32Thread);
      v3 = v31;
    }
    ExReleaseFastResource(*(_QWORD *)UserSessionState, CurrentThreadWin32Thread + 8);
    KeLeaveCriticalRegion();
    v14 = W32GetUserSessionState(v13);
    v15 = PsGetCurrentThreadWin32Thread();
    KeEnterCriticalRegion();
    _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_(
      *(struct _FAST_ERESOURCE **)v14,
      (struct _W32THREADNONPAGED *)v15);
    if ( *(_QWORD *)v15 )
    {
      if ( IsThreadCrossSessionAttached() )
      {
        *(_DWORD *)(v15 + 24) |= 2u;
        v16 = 0LL;
      }
      else
      {
        v16 = *(_QWORD *)v15;
        *(_BYTE *)(*(_QWORD *)v15 + 1708LL) = 1;
      }
    }
    else
    {
      v16 = 0LL;
    }
    *(_QWORD *)(v14 + 24) = v16;
    if ( v16 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v16) )
    {
      DestroySharedUserCritDeferredUnlockList(v14 + 19744);
      DestroyDeferredUnlockObjectAssignmentList((_QWORD *)(v14 + 19800));
      DestroyDeferredUnlockObjectAssignmentList((_QWORD *)(v14 + 19784));
    }
    v2 = *v4;
    if ( (*(_DWORD *)(*v4 + 436) & 1) != 0 )
      PostUpdateKeyStateEvent(v2);
  }
  if ( (unsigned __int8)a1 >= 0x20u )
  {
    v2 = 0LL;
    v17 = byte_14025E220;
    while ( *v17 != (_BYTE)a1 )
    {
      v2 = (unsigned int)(v2 + 1);
      ++v17;
      if ( (unsigned int)v2 >= 0xE )
      {
        switch ( (char)a1 )
        {
          case 91:
          case 92:
          case -96:
          case -95:
          case -94:
          case -93:
          case -92:
          case -91:
            goto LABEL_33;
          default:
            if ( (unsigned int)ApiSetEditionIsGetKeyStateBlocked() )
            {
              KeyState = 0;
              goto LABEL_37;
            }
            if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1u) )
              goto LABEL_33;
            v20 = *(_QWORD *)(W32GetUserSessionState(v2) + 18944);
            v32 = *(_QWORD *)(v20 + 472);
            v21 = *(_DWORD *)(v20 + 480);
            v22 = *(_QWORD *)(W32GetUserSessionState(v20) + 18944);
            v29 = v32;
            v30 = v21;
            EtwTraceUIPIInputError(v3, 0LL, v22, &v29, 3);
            KeyState = 0;
            break;
        }
        goto LABEL_37;
      }
    }
  }
LABEL_33:
  if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v2) + 19656) + 8LL) & 1) != 0
    && (ThreadProcessId = (unsigned int)PsGetThreadProcessId(*(PETHREAD *)v3),
        v18 = *(_DWORD **)(W32GetUserSessionState(v24) + 19656),
        (ThreadProcessId & 0xFFFFFFFC) == *v18) )
  {
    KeyState = 0;
  }
  else
  {
    KeyState = GetKeyState(a1);
  }
LABEL_37:
  v25 = *(_DWORD **)(W32GetUserSessionState(v18) + 19656);
  if ( (v25[2] & 1) != 0
    && (v26 = (unsigned int)PsGetThreadProcessId(*(PETHREAD *)v3),
        v25 = *(_DWORD **)(W32GetUserSessionState(v27) + 19656),
        (v26 & 0xFFFFFFFC) == *v25) )
  {
    *(_DWORD *)(*(_QWORD *)(v3 + 520) + 112LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v31 + 520) + 116LL) = 0LL;
  }
  else
  {
    v33 = *(_QWORD *)(W32GetUserSessionState(v25) + 19928);
    *(_DWORD *)(*(_QWORD *)(v3 + 520) + 112LL) = *(_DWORD *)(v33 + 6984);
    *(_QWORD *)(*(_QWORD *)(v31 + 520) + 116LL) = *(_QWORD *)(*(_QWORD *)(v31 + 472) + 280LL);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return KeyState;
}
