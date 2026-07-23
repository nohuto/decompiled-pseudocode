/*
 * XREFs of RtlSetThreadIsCritical @ 0x180112F20
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 */

NTSTATUS __cdecl RtlSetThreadIsCritical(BOOLEAN NewValue, PBOOLEAN OldValue, BOOLEAN CheckFlag)
{
  int v4; // edi
  NTSTATUS result; // eax
  int ThreadInformation; // [rsp+50h] [rbp+18h] BYREF

  ThreadInformation = 0;
  v4 = NewValue;
  if ( OldValue )
    *OldValue = 0;
  if ( CheckFlag && (NtCurrentTeb()->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) == 0 )
    return -1073741823;
  if ( !OldValue )
  {
LABEL_10:
    ThreadInformation = v4;
    return NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination, &ThreadInformation, 4u);
  }
  result = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination, &ThreadInformation, 4u, 0LL);
  if ( result >= 0 )
  {
    *OldValue = ThreadInformation;
    goto LABEL_10;
  }
  return result;
}
