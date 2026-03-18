/*
 * XREFs of HalpTscSynchronization @ 0x140546FA0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1404690A0 (KeIpiGenericCall.c)
 *     HalpFindTimer @ 0x1405448B0 (HalpFindTimer.c)
 *     HalpTscInitializeSynchronizationContext @ 0x140546D98 (HalpTscInitializeSynchronizationContext.c)
 *     HviIsXboxNanovisorPresent @ 0x140657B40 (HviIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

int __fastcall HalpTscSynchronization(char a1, int *a2)
{
  ULONG_PTR *Timer; // rax
  ULONG_PTR Context[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v7; // [rsp+40h] [rbp-38h]
  __int128 v8; // [rsp+50h] [rbp-28h]

  *(_OWORD *)Context = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( qword_140FC0728 || (unsigned __int8)HviIsXboxNanovisorPresent() )
  {
    Timer = HalpFindTimer(5, 0, 0, 0, 1);
    if ( Timer && (Timer[28] & 0x6000) == 0 )
      *((_DWORD *)Timer + 46) |= 0x20u;
  }
  else
  {
    LODWORD(Timer) = KeQueryActiveProcessorCountEx(0xFFFFu);
    if ( (unsigned int)Timer >= 2 )
    {
      HalpTscInitializeSynchronizationContext((__int64)Context, a1, a2, 0LL);
      LODWORD(Timer) = KeIpiGenericCall(HalpTscSynchronizationWorker, (ULONG_PTR)Context);
    }
  }
  return (int)Timer;
}
