/*
 * XREFs of NtUserRequestLowLatencyProfile @ 0x14029BEB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     Feature_LowLatencyProfile__private_IsEnabledDeviceUsageNoInline @ 0x1402925D0 (Feature_LowLatencyProfile__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 NtUserRequestLowLatencyProfile()
{
  __int64 v0; // rcx
  int v1; // ecx
  __int64 CurrentProcessWin32Process; // rax

  if ( !(unsigned int)Feature_LowLatencyProfile__private_IsEnabledDeviceUsageNoInline() )
  {
    v1 = 50;
LABEL_7:
    UserSetLastError(v1);
    return 0LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v0);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( !(unsigned int)IsImmersiveBroker(CurrentProcessWin32Process) )
  {
    v1 = 5;
    goto LABEL_7;
  }
  return 0LL;
}
