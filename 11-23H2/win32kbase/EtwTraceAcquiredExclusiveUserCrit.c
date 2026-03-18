/*
 * XREFs of EtwTraceAcquiredExclusiveUserCrit @ 0x1C0053EC0
 * Callers:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 * Callees:
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C0053FD0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C005408C (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C00541B0 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C013ED04 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 EtwTraceAcquiredExclusiveUserCrit()
{
  __int64 result; // rax
  __int64 v1; // rbx
  LARGE_INTEGER PerformanceCounter; // rsi
  LONGLONG v3; // rdi
  struct UserCritTelemetry *Instance; // rax
  UserCritTelemetry *v5; // rax
  int v6; // r8d

  result = IsEtwUserCritEnabled();
  if ( (_DWORD)result )
  {
    result = PsGetCurrentThreadWin32Thread();
    v1 = result;
    if ( result )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v3 = PerformanceCounter.QuadPart - *(_QWORD *)(v1 + 8);
      Instance = UserCritTelemetry::getInstance();
      UserCritTelemetry::UpdateUserCritInfo(Instance, v3, 0LL);
      v5 = UserCritTelemetry::getInstance();
      UserCritTelemetry::SendUserCritSummary(v5);
      *(LARGE_INTEGER *)(v1 + 8) = PerformanceCounter;
      if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0283068 - 1) > 2u
        && (qword_1C0283050 & 0x200000010000000LL) != 0
        && (qword_1C0283058 & 0x200000010000000LL) == qword_1C0283058
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v6,
          v3,
          1000000 * v3 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      if ( v3 >= (__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink
        && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayExLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v6,
            v3,
            1000 * v3 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        W32KEtwUserCritAcquireDelayExLastTelemetryQPC = PerformanceCounter.QuadPart;
      }
      result = _InterlockedIncrement64(&gullUserCritAcquireToken);
      *(_QWORD *)(v1 + 16) = result;
    }
  }
  return result;
}
