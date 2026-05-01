/*
 * XREFs of CrmStateMonitorResourceUsageIsolatedPollCSCallback @ 0x18007A6B0
 * Callers:
 *     <none>
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     CrmStateMonitorStateSet @ 0x18002D220 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorResourceUsageIsolatedPollCSCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int *v3; // rbx
  int IsTimerSet; // eax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = (unsigned int *)(a1 - 64);
  if ( (unsigned int)(*a3 - 1) > 0xFFFFFFFD )
  {
    CempLockAcquireExclusive((__int64)&unk_1800EAA28);
    IsTimerSet = TpIsTimerSet(xmmword_1800EAA38);
    *((_QWORD *)&xmmword_1800EAA38 + 1) = v3;
    if ( !IsTimerSet )
    {
      RtlQueryUnbiasedInterruptTime(v3 + 24);
      TpSetTimer(xmmword_1800EAA38, &v7, 0LL, 2000LL);
    }
    dword_1800EAA30 = 0;
    return RtlReleaseSRWLockExclusive(&unk_1800EAA28);
  }
  else
  {
    CempLockAcquireExclusive((__int64)&unk_1800EAA28);
    *((_QWORD *)&xmmword_1800EAA38 + 1) = 0LL;
    dword_1800EAA30 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800EAA28);
    v6 = 0;
    return CrmStateMonitorStateSet(v3, &v6, 4uLL, 0);
  }
}
