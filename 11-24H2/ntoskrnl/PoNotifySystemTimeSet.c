/*
 * XREFs of PoNotifySystemTimeSet @ 0x1404C3C60
 * Callers:
 *     ExpRefreshSystemTime @ 0x1407B6CB4 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407B7040 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140B6E630 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     PopCheckForWork @ 0x1403E6AAC (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1403E6B24 (PopGetPolicyWorker.c)
 *     PpmConvertTime @ 0x140437380 (PpmConvertTime.c)
 *     ExNotifyWithProcessing @ 0x140442804 (ExNotifyWithProcessing.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTraceSystemTimeChange @ 0x140B6E734 (EtwTraceSystemTimeChange.c)
 *     PopSstDiagAddResumeTimestampAdjustment @ 0x140B6F4D0 (PopSstDiagAddResumeTimestampAdjustment.c)
 */

__int64 __fastcall PoNotifySystemTimeSet(__int64 *a1, __int64 *a2, int a3, int a4, int a5, int a6, unsigned __int8 a7)
{
  __int64 result; // rax
  int v8; // ebp
  __int64 *v11; // r11
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v18; // rdx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v8 = ExpRealTimeIsUniversal;
  v11 = a2;
  if ( a3 == 2 )
  {
    v13 = *a1;
    result = *a2;
    if ( v13 > *a2 )
    {
      v14 = PpmConvertTime(v13 - result, 0x989680uLL, PopQpcFrequency);
      result = PopSstDiagAddResumeTimestampAdjustment(v14);
    }
  }
  if ( PsWin32CalloutsEstablished )
  {
    PopTimeChangeInfo = *a1;
    qword_140F0E6A8 = *v11;
    EtwTraceSystemTimeChange((_DWORD)a1, (_DWORD)v11, a3, a4, a5, v8, a7);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v15) = 2;
      LOBYTE(v16) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v16, v15);
    }
    ExNotifyWithProcessing(ExCbSetSystemTime, 0LL, 0LL, 0LL);
    PopGetPolicyWorker(16);
    PopCheckForWork();
    if ( KiIrqlFlags )
    {
      LOBYTE(v18) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
