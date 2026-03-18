/*
 * XREFs of ?_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z @ 0x1400C1664
 * Callers:
 *     DeferSysPeekMsg @ 0x1400C11E0 (DeferSysPeekMsg.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400A0750 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1400C0E4C (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 */

void __fastcall KeyboardInputTelemetry::_BeginKeyboardEventProcessingByInputService(
        KeyboardInputTelemetry *this,
        int a2)
{
  int v2; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax

  v2 = *((_DWORD *)this + 47);
  if ( v2 != a2 )
  {
    if ( v2 )
    {
      KeyboardInputTelemetry::_UploadTelemetryData(this);
      *((_DWORD *)this + 2) = 0;
    }
    *((_DWORD *)this + 47) = a2;
    if ( *(_QWORD *)(W32GetUserSessionState(this) + 18960) )
    {
      v6 = *(_QWORD *)(W32GetUserSessionState(v5) + 18960);
      if ( *(_QWORD *)(v6 + 464) )
      {
        v7 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v6) + 18960) + 464LL) + 56LL);
        if ( *((_DWORD *)this + 46) != (_DWORD)v7 )
        {
          v8 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v7) + 18960) + 464LL) + 56LL);
          *((_DWORD *)this + 46) = v8;
          UserSessionState = W32GetUserSessionState(v8);
          RtlStringCchCopyW(
            (char *)this + 24,
            16LL,
            (char *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 18960) + 464LL) + 984LL));
        }
      }
    }
  }
}
