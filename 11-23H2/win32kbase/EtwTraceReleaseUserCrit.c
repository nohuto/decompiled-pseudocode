/*
 * XREFs of EtwTraceReleaseUserCrit @ 0x1C0053D40
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0003D50 (NtUserInjectKeyboardInput.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C000AB30 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     NtUserGetHDevName @ 0x1C004C950 (NtUserGetHDevName.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     LeaveCrit @ 0x1C004CFE0 (LeaveCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00B4DD0 (UserSessionSwitchEnterCrit.c)
 *     ChangeAcquireResourceType @ 0x1C00B84C0 (ChangeAcquireResourceType.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C0140470 (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C0146100 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0146840 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0146E30 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C0147210 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0147B60 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x1C0148320 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0148CC0 (NtUserInjectPointerInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0149F40 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C014AEF0 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C0053FD0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C005408C (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C013ED04 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

char __fastcall EtwTraceReleaseUserCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v5; // rbx
  LARGE_INTEGER v6; // rdi
  struct UserCritTelemetry *Instance; // rax
  int v8; // r8d

  LODWORD(CurrentThreadWin32Thread) = IsEtwUserCritEnabled(a1, a2, a3, a4);
  if ( (_DWORD)CurrentThreadWin32Thread )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v5 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v6 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(CurrentThreadWin32Thread + 8));
      Instance = UserCritTelemetry::getInstance();
      LOBYTE(CurrentThreadWin32Thread) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))UserCritTelemetry::UpdateUserCritInfo)(
                                           Instance,
                                           (LARGE_INTEGER)v6.QuadPart,
                                           2LL);
      if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 0x200000010000000LL) != 0 )
      {
        LOBYTE(CurrentThreadWin32Thread) = byte_1C0283068 - 1;
        if ( (unsigned __int8)(byte_1C0283068 - 1) > 2u && (qword_1C0283050 & 0x200000010000000LL) != 0 )
        {
          LOBYTE(CurrentThreadWin32Thread) = 0;
          if ( (qword_1C0283058 & 0x200000010000000LL) == qword_1C0283058 )
          {
            LOBYTE(CurrentThreadWin32Thread) = BYTE2(Microsoft_Windows_Win32kEnableBits);
            if ( (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
              LOBYTE(CurrentThreadWin32Thread) = McTemplateK0xqx_EtwWriteTransfer(
                                                   *(_QWORD *)(v5 + 16),
                                                   (unsigned int)&ReleaseUserCritEvent,
                                                   v8,
                                                   v6.LowPart,
                                                   1000 * v6.QuadPart / gliQpcFreq.QuadPart,
                                                   *(_QWORD *)(v5 + 16));
          }
        }
      }
    }
  }
  return CurrentThreadWin32Thread;
}
