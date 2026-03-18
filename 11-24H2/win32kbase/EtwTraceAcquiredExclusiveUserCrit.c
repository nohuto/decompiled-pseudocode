/*
 * XREFs of EtwTraceAcquiredExclusiveUserCrit @ 0x140033AB0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_W32THREADNONPAGED@@@Z @ 0x1401A8F70 (-_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_.c)
 * Callees:
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x140033D40 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x140034410 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAPEAV1@XZ @ 0x140034540 (-getInstance@UserCritTelemetry@@SAPEAV1@XZ.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x140034564 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

void EtwTraceAcquiredExclusiveUserCrit()
{
  __int64 v0; // rcx
  __int64 CurrentThreadNonPaged; // rbx
  LARGE_INTEGER PerformanceCounter; // rsi
  LONGLONG v3; // rdi
  struct UserCritTelemetry *Instance; // rax
  UserCritTelemetry *v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  __int64 UserSessionState; // rax
  int v9; // r8d
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  int v12; // r8d

  if ( dword_14029AF48
    && (qword_14029AF58 & 0x400000000000LL) != 0
    && (qword_14029AF60 & 0x400000000000LL) == qword_14029AF60
    || ((unsigned __int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x8000002010000000uLL) != 0
    && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
    && (qword_14029ADB0 & 0x8000002010000000uLL) != 0
    && (qword_14029ADB8 & 0x8000002010000000uLL) == qword_14029ADB8
    || ((__int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
    && (qword_14029ADB0 & 0x200000010000000LL) != 0
    && (qword_14029ADB8 & 0x200000010000000LL) == qword_14029ADB8 )
  {
    if ( UserCritTelemetry::getInstance() )
    {
      CurrentThreadNonPaged = W32GetCurrentThreadNonPaged(v0);
      if ( CurrentThreadNonPaged )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v3 = PerformanceCounter.QuadPart - *(_QWORD *)(CurrentThreadNonPaged + 8);
        Instance = UserCritTelemetry::getInstance();
        UserCritTelemetry::UpdateUserCritInfo(Instance, v3, 0LL);
        v5 = UserCritTelemetry::getInstance();
        UserCritTelemetry::SendUserCritSummary(v5);
        *(LARGE_INTEGER *)(CurrentThreadNonPaged + 8) = PerformanceCounter;
        if ( ((__int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
          && (qword_14029ADB0 & 0x200000010000000LL) != 0
          && (qword_14029ADB8 & 0x200000010000000LL) == qword_14029ADB8 )
        {
          v7 = (unsigned __int64)(1000000 * v3) / gliQpcFreq.QuadPart;
          if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            UserSessionState = W32GetUserSessionState(v6);
            McTemplateK0xqx_EtwWriteTransfer(
              *(_QWORD *)(UserSessionState + 36504),
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v9,
              v3,
              v7,
              *(_QWORD *)(UserSessionState + 36504));
          }
        }
        if ( v3 >= (__int64)WPP_MAIN_CB.DeviceObjectExtension )
        {
          v6 = *(_QWORD *)(W32GetUserSessionState(v6) + 36488);
          if ( PerformanceCounter.QuadPart - v6 >= (__int64)WPP_MAIN_CB.Reserved )
          {
            v10 = (unsigned __int64)(1000 * v3) / gliQpcFreq.QuadPart;
            if ( (Microsoft_Windows_Win32kEnableBits & 0x800000000LL) != 0 )
            {
              v11 = W32GetUserSessionState(v6);
              McTemplateK0xqx_EtwWriteTransfer(
                *(_QWORD *)(v11 + 36504),
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v12,
                v3,
                v10,
                *(_QWORD *)(v11 + 36504));
            }
            *(LARGE_INTEGER *)(W32GetUserSessionState(v6) + 36488) = PerformanceCounter;
          }
        }
        *(_QWORD *)(CurrentThreadNonPaged + 16) = _InterlockedIncrement64((volatile signed __int64 *)(W32GetUserSessionState(v6) + 36504));
      }
    }
  }
}
