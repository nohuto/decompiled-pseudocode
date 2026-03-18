/*
 * XREFs of PoNotifySystemTimeSet @ 0x1404CA36C
 * Callers:
 *     ExpRefreshSystemTime @ 0x1407A73C4 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407A7750 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140B5DCB0 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     PpmConvertTime @ 0x1403E7C50 (PpmConvertTime.c)
 *     ExNotifyWithProcessing @ 0x14044C104 (ExNotifyWithProcessing.c)
 *     PopCheckForWork @ 0x14047697C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1404769F4 (PopGetPolicyWorker.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwTraceSystemTimeChange @ 0x140B5DDB4 (EtwTraceSystemTimeChange.c)
 *     PopSstDiagAddResumeTimestampAdjustment @ 0x140B5EB7C (PopSstDiagAddResumeTimestampAdjustment.c)
 */

void __fastcall PoNotifySystemTimeSet(__int64 *a1, __int64 *a2, int a3, int a4, int a5, int a6, unsigned __int8 a7)
{
  int v7; // r14d
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v16; // rdx

  v7 = ExpRealTimeIsUniversal;
  if ( a3 == 2 )
  {
    v12 = *a1;
    if ( v12 > *a2 )
    {
      v13 = PpmConvertTime(v12 - *a2, 0x989680uLL, PopQpcFrequency);
      PopSstDiagAddResumeTimestampAdjustment(v13);
    }
  }
  if ( PsWin32CalloutsEstablished )
  {
    PopTimeChangeInfo = *a1;
    qword_140F0DBD8 = *a2;
    EtwTraceSystemTimeChange((_DWORD)a1, (_DWORD)a2, a3, a4, a5, v7, a7);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v14) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v14);
    }
    ExNotifyWithProcessing(ExCbSetSystemTime, 0LL, 0LL, 0LL);
    PopGetPolicyWorker(16);
    PopCheckForWork();
    if ( KiIrqlFlags )
    {
      LOBYTE(v16) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
    }
    __writecr8(CurrentIrql);
  }
}
