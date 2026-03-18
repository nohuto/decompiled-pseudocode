/*
 * XREFs of DrvSetWddmDeviceMonitorPowerState @ 0x14004CBE0
 * Callers:
 *     DrvSetMonitorPowerState @ 0x14004CB90 (DrvSetMonitorPowerState.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AE8CC (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x140017264 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DrvDxgkLogCodePointPacket @ 0x1400E5480 (DrvDxgkLogCodePointPacket.c)
 *     UserSetMonitorPowerWaiterEvent @ 0x14014A460 (UserSetMonitorPowerWaiterEvent.c)
 *     UserResetMonitorPowerWaiterEvent @ 0x140152E20 (UserResetMonitorPowerWaiterEvent.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall DrvSetWddmDeviceMonitorPowerState(__int64 a1, int a2, char a3, const struct _GUID *a4)
{
  __int64 v4; // rdi
  __int64 v8; // r15
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  char *v12; // rsi
  __int64 v13; // rbx
  unsigned int v14; // edi
  unsigned int i; // edx
  __int64 v16; // rdx
  void *v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // r14d
  char *v20; // rbx
  int v21; // eax
  unsigned int v22; // r15d
  __int64 UserSessionState; // rbx
  __int64 v24; // rax
  __int64 j; // rbx
  __int64 k; // rax
  int v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int8 v30; // [rsp+58h] [rbp-11h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v31; // [rsp+60h] [rbp-9h] BYREF
  int InputBuffer; // [rsp+68h] [rbp-1h] BYREF
  __int128 v33; // [rsp+6Ch] [rbp+3h]

  v4 = a2;
  v29 = 0;
  v8 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( (unsigned int)UserIsWddmConnectedSession() )
  {
    v30 = 0;
    v9 = 0LL;
    v31 = 0LL;
    if ( a4 )
    {
      v30 = DisplayScenarioContextFindAndAddRef(a4, &v31);
      v9 = v31;
    }
    InputBuffer = v4;
    v33 = 0LL;
    if ( v9 )
      v33 = *(_OWORD *)v9;
    else
      v33 = 0LL;
    WdLogSingleEntry2(5LL, a1, v4);
    WdLogGlobalForLineNumber = 7207;
    if ( !a3 )
    {
      v10 = *(_QWORD *)(v8 + 1096);
      v11 = 0;
      while ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 160) & 0x800000) != 0 && *(_QWORD *)(v10 + 224) && (!a1 || *(_QWORD *)(v10 + 144) == a1) )
          ++v11;
        v10 = *(_QWORD *)(v10 + 128);
      }
      v12 = (char *)PALLOCMEM(24 * v11, 1886221383LL);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v8 + 1096);
        v14 = 0;
        while ( v13 )
        {
          if ( (*(_DWORD *)(v13 + 160) & 0x800000) != 0
            && *(_QWORD *)(v13 + 224)
            && (!a1 || *(_QWORD *)(v13 + 144) == a1) )
          {
            for ( i = 0; i < v14; ++i )
            {
              if ( *(_QWORD *)&v12[24 * i + 16] == *(_QWORD *)(v13 + 144) )
                break;
            }
            if ( v14 == i )
            {
              v16 = 3LL * v14;
              *(_QWORD *)&v12[8 * v16] = *(_QWORD *)(v13 + 136);
              v17 = *(void **)(v13 + 224);
              *(_QWORD *)&v12[8 * v16 + 8] = v17;
              *(_QWORD *)&v12[8 * v16 + 16] = *(_QWORD *)(v13 + 144);
              ObfReferenceObject(v17);
              ++v14;
            }
          }
          v13 = *(_QWORD *)(v13 + 128);
        }
        UserResetMonitorPowerWaiterEvent();
        *(_BYTE *)(W32GetUserGdiSessionState() + 1) = 1;
        UserSessionSwitchLeaveCritWithNonPaged();
        v19 = 0;
        if ( v14 )
        {
          v20 = v12;
          do
          {
            DrvDxgkLogCodePointPacket(90LL, v19, v14, 0LL);
            v21 = GreDeviceIoControlImpl(*(PDEVICE_OBJECT *)v20, 0x23200Fu, &InputBuffer, 0x14u, 0LL, 0, &v29, 1u, 1);
            v22 = v21;
            if ( v21 < 0 )
            {
              WdLogSingleEntry2(2LL, *(_QWORD *)v20, v21);
              WdLogGlobalForLineNumber = 7328;
            }
            ObfDereferenceObject(*((PVOID *)v20 + 1));
            DrvDxgkLogCodePointPacket(91LL, v22, 0LL, 0LL);
            ++v19;
            v20 += 24;
          }
          while ( v19 < v14 );
        }
        UserSessionState = W32GetUserSessionState(v18);
        v24 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                UserSessionState,
                1LL,
                0LL,
                _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
        *(_QWORD *)(UserSessionState + 24) = v24;
        if ( v24 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v24) )
        {
          DestroySharedUserCritDeferredUnlockList(UserSessionState + 19744);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19800);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19784);
        }
        *(_BYTE *)(W32GetUserGdiSessionState() + 1) = 0;
        UserSetMonitorPowerWaiterEvent(0);
        GreDeleteFastMutex(v12);
LABEL_54:
        if ( v30 )
          DisplayScenarioContextRelease(&v31);
        return;
      }
      WdLogSingleEntry1(6LL, v11);
      WdLogGlobalForLineNumber = 7360;
    }
    for ( j = *(_QWORD *)(v8 + 1096); j; j = *(_QWORD *)(j + 128) )
    {
      if ( (*(_DWORD *)(j + 160) & 0x800000) != 0 && *(_QWORD *)(j + 136) && (!a1 || *(_QWORD *)(j + 144) == a1) )
      {
        for ( k = *(_QWORD *)(v8 + 1096); k; k = *(_QWORD *)(k + 128) )
        {
          if ( *(_QWORD *)(k + 144) == *(_QWORD *)(j + 144) )
            break;
        }
        if ( k == j )
        {
          DrvDxgkLogCodePointPacket(90LL, 0LL, 0LL, 0LL);
          v27 = GreDeviceIoControlImpl(
                  *(PDEVICE_OBJECT *)(j + 136),
                  0x23200Fu,
                  &InputBuffer,
                  0x14u,
                  0LL,
                  0,
                  &v29,
                  1u,
                  1);
          v28 = v27;
          if ( v27 < 0 )
          {
            WdLogSingleEntry2(2LL, j, v27);
            WdLogGlobalForLineNumber = 7416;
          }
          DrvDxgkLogCodePointPacket(91LL, v28, 0LL, 0LL);
        }
      }
    }
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 7424;
    goto LABEL_54;
  }
}
