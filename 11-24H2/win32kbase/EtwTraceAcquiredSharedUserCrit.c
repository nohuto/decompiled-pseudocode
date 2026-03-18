/*
 * XREFs of EtwTraceAcquiredSharedUserCrit @ 0x140033720
 * Callers:
 *     _lambda_5b4fd5b3c990349c66a8ee94c55a5de4_::_lambda_invoker_cdecl_ @ 0x1401A8F20 (_lambda_5b4fd5b3c990349c66a8ee94c55a5de4_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x140034410 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAPEAV1@XZ @ 0x140034540 (-getInstance@UserCritTelemetry@@SAPEAV1@XZ.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x140034564 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

void EtwTraceAcquiredSharedUserCrit()
{
  __int64 v0; // rcx
  __int64 CurrentThreadNonPaged; // rdi
  LARGE_INTEGER PerformanceCounter; // rbp
  LONGLONG v3; // rsi
  struct UserCritTelemetry *Instance; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // r14
  __int64 UserSessionState; // rax
  int v8; // r8d
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  int v11; // r8d

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
        UserCritTelemetry::UpdateUserCritInfo(Instance, v3, 1LL);
        *(LARGE_INTEGER *)(CurrentThreadNonPaged + 8) = PerformanceCounter;
        if ( ((__int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
          && (qword_14029ADB0 & 0x200000010000000LL) != 0
          && (qword_14029ADB8 & 0x200000010000000LL) == qword_14029ADB8 )
        {
          v6 = (unsigned __int64)(1000000 * v3) / gliQpcFreq.QuadPart;
          if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
          {
            UserSessionState = W32GetUserSessionState(v5);
            McTemplateK0xqx_EtwWriteTransfer(
              *(_QWORD *)(UserSessionState + 36504),
              (unsigned int)&AcquiredSharedUserCritEvent,
              v8,
              v3,
              v6,
              *(_QWORD *)(UserSessionState + 36504));
          }
        }
        if ( v3 >= (__int64)WPP_MAIN_CB.DeviceObjectExtension )
        {
          v5 = *(_QWORD *)(W32GetUserSessionState(v5) + 36496);
          if ( PerformanceCounter.QuadPart - v5 >= (__int64)WPP_MAIN_CB.Reserved )
          {
            v9 = (unsigned __int64)(1000 * v3) / gliQpcFreq.QuadPart;
            if ( (Microsoft_Windows_Win32kEnableBits & 0x800000000LL) != 0 )
            {
              v10 = W32GetUserSessionState(v5);
              McTemplateK0xqx_EtwWriteTransfer(
                *(_QWORD *)(v10 + 36504),
                (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
                v11,
                v3,
                v9,
                *(_QWORD *)(v10 + 36504));
            }
            _InterlockedExchange64(
              (volatile __int64 *)(W32GetUserSessionState(v5) + 36496),
              PerformanceCounter.QuadPart);
          }
        }
        *(_QWORD *)(CurrentThreadNonPaged + 16) = _InterlockedIncrement64((volatile signed __int64 *)(W32GetUserSessionState(v5) + 36504));
      }
    }
  }
}
