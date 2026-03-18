/*
 * XREFs of UserDeleteW32Process @ 0x14015DEE0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E47E0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     EnterHandleFlagsCrit @ 0x1400F7EE0 (EnterHandleFlagsCrit.c)
 *     LeaveHandleFlagsCrit @ 0x1400F8CC0 (LeaveHandleFlagsCrit.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall UserDeleteW32Process(char *Buffer)
{
  PVOID *v2; // rcx
  char **v3; // rdx
  char *v4; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h]

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v5);
  if ( !*((_DWORD *)Buffer + 2) )
  {
    if ( *((_DWORD *)Buffer + 259) )
    {
      v3 = (char **)*((_QWORD *)Buffer + 131);
      if ( v3[1] != Buffer + 1048 || (v2 = (PVOID *)*((_QWORD *)Buffer + 132), *v2 != Buffer + 1048) )
        __fastfail(3u);
      *v2 = v3;
      v3[1] = (char *)v2;
    }
    if ( *((char **)Buffer + 138) != Buffer + 1104 )
    {
      v6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 2516LL);
    }
    EnterHandleFlagsCrit((__int64)v2);
    v4 = (char *)*((_QWORD *)Buffer + 90);
    if ( v4 )
    {
      GreDeleteFastMutex(v4);
      RtlInitializeBitMap((PRTL_BITMAP)(Buffer + 712), 0LL, 0);
    }
    LeaveHandleFlagsCrit((__int64)v4);
    PsSetProcessWin32Process(*(_QWORD *)Buffer, 0LL, Buffer);
    GreDeleteFastMutex(Buffer);
  }
  if ( !v5 )
    UserSessionSwitchLeaveCritWithNonPaged();
}
