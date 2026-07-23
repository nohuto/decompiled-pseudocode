/*
 * XREFs of PopRemoveReasonRecordByReasonCode @ 0x14099FFA0
 * Callers:
 *     PopUpdateUpgradeInProgress @ 0x140747D60 (PopUpdateUpgradeInProgress.c)
 *     PopFilterCapabilities @ 0x14099F88C (PopFilterCapabilities.c)
 *     PopLogDisabledSleepReason @ 0x14099FBA0 (PopLogDisabledSleepReason.c)
 *     PopEnableHiberFile @ 0x140AAE8C0 (PopEnableHiberFile.c)
 * Callees:
 *     PopGetReasonListByReasonCode @ 0x14099FFEC (PopGetReasonListByReasonCode.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopRemoveReasonRecordByReasonCode(__int64 a1)
{
  _QWORD *ReasonListByReasonCode; // rax
  __int64 v2; // rdx
  _QWORD *v3; // rcx

  ReasonListByReasonCode = (_QWORD *)PopGetReasonListByReasonCode(a1);
  if ( ReasonListByReasonCode )
  {
    v2 = *ReasonListByReasonCode;
    if ( *(_QWORD **)(*ReasonListByReasonCode + 8LL) != ReasonListByReasonCode
      || (v3 = (_QWORD *)ReasonListByReasonCode[1], (_QWORD *)*v3 != ReasonListByReasonCode) )
    {
      __fastfail(3u);
    }
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    ExFreePoolWithTag(ReasonListByReasonCode, 0x66756263u);
  }
}
