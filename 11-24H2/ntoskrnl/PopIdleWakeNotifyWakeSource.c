/*
 * XREFs of PopIdleWakeNotifyWakeSource @ 0x1405D7FC4
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x140371BCC (PpmExitCoordinatedIdle.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x1403FBF40 (KeGetCurrentProcessorNumberEx.c)
 *     RtlStringCbCopyW @ 0x140425B00 (RtlStringCbCopyW.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x1404A462C (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PopIdleWakeFindOrAllocateWakeSource @ 0x1405D7EA8 (PopIdleWakeFindOrAllocateWakeSource.c)
 */

int *__fastcall PopIdleWakeNotifyWakeSource(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, int *a6)
{
  unsigned int *v6; // rbx
  const wchar_t *v10; // r8
  ULONG CurrentProcessorNumber; // eax
  int v12; // ecx
  int *result; // rax

  v6 = (unsigned int *)PopIdleWakeContext;
  if ( PopIdleWakeContext && a1 == PpmDripsStateIndex && a2 >= 0 )
  {
    if ( a2 == 129 && *(_BYTE *)a3 == 3 )
    {
      if ( !PopTimeBrokerExpirationDueTime
        || MEMORY[0xFFFFF78000000014] < (unsigned __int64)PopTimeBrokerExpirationDueTime
        || (v10 = &PopTimeBrokerExpirationReason,
            (unsigned __int64)(PopTimeBrokerExpirationDueTime + 20000000) < MEMORY[0xFFFFF78000000014]) )
      {
        v10 = L"Unknown";
      }
      RtlStringCbCopyW((NTSTRSAFE_PWSTR)(a3 + 2), 0x80uLL, v10);
    }
    PopIdleWakeStopActiveIntervalAccounting(v6, a4);
    *((_QWORD *)v6 + 5) = PopIdleWakeFindOrAllocateWakeSource((__int64)v6, a2, a3);
    *((_QWORD *)v6 + 6) = a5;
    *((_QWORD *)v6 + 1) = a5;
    *((_QWORD *)v6 + 7) = a5 - a4;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    *v6 |= 0x10u;
    v6[16] = CurrentProcessorNumber;
    v12 = *(_DWORD *)(*((_QWORD *)v6 + 5) + 408LL);
  }
  else
  {
    v12 = -1;
  }
  result = a6;
  *a6 = v12;
  return result;
}
