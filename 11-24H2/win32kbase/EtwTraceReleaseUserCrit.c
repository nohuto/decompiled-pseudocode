/*
 * XREFs of EtwTraceReleaseUserCrit @ 0x140034270
 * Callers:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     NtUserGetHDevName @ 0x140095CC0 (NtUserGetHDevName.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1400F50DC (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     LeaveCrit @ 0x140162A80 (LeaveCrit.c)
 *     NtUserGetKeyState @ 0x14016CDE0 (NtUserGetKeyState.c)
 * Callees:
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x140034410 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAPEAV1@XZ @ 0x140034540 (-getInstance@UserCritTelemetry@@SAPEAV1@XZ.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x140034564 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

void EtwTraceReleaseUserCrit()
{
  __int64 v0; // rcx
  __int64 CurrentThreadNonPaged; // rbx
  LARGE_INTEGER v2; // rdi
  struct UserCritTelemetry *Instance; // rax
  int v4; // r8d

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
        v2 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(CurrentThreadNonPaged + 8));
        Instance = UserCritTelemetry::getInstance();
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))UserCritTelemetry::UpdateUserCritInfo)(
          Instance,
          (LARGE_INTEGER)v2.QuadPart,
          2LL);
        if ( ((__int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
          && (qword_14029ADB0 & 0x200000010000000LL) != 0
          && (qword_14029ADB8 & 0x200000010000000LL) == qword_14029ADB8
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          McTemplateK0xqx_EtwWriteTransfer(
            *(_QWORD *)(CurrentThreadNonPaged + 16),
            (unsigned int)&ReleaseUserCritEvent,
            v4,
            v2.LowPart,
            (unsigned __int64)(1000 * v2.QuadPart) / gliQpcFreq.QuadPart,
            *(_QWORD *)(CurrentThreadNonPaged + 16));
        }
      }
    }
  }
}
