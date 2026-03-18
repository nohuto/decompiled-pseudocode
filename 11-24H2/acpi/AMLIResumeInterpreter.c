/*
 * XREFs of AMLIResumeInterpreter @ 0x14002D894
 * Callers:
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1400313E0 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1400314A0 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     AcpiReflectNativeObject @ 0x140064EB0 (AcpiReflectNativeObject.c)
 *     Simulator_CallbackWorker @ 0x14006AF10 (Simulator_CallbackWorker.c)
 * Callees:
 *     OSQueueWorkItem @ 0x140013FD4 (OSQueueWorkItem.c)
 *     LogSchedEvent @ 0x14002DA00 (LogSchedEvent.c)
 */

void AMLIResumeInterpreter()
{
  _QWORD *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rax

  dword_1400890B8 = 0;
  pszDest = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( (gReadyQueue & 0xC) != 0 && !--dword_140088F18 )
  {
    gReadyQueue &= 0xFFFFFFF3;
    LogSchedEvent(1381193037, 0, 0, 0, 0LL);
    if ( (gdwfAMLI & 4) != 0 )
    {
      while ( 1 )
      {
        v0 = (_QWORD *)qword_140088ED8;
        if ( (__int64 *)qword_140088ED8 == &qword_140088ED8 )
          break;
        if ( *(__int64 **)(qword_140088ED8 + 8) != &qword_140088ED8 )
          goto LABEL_14;
        v1 = *(_QWORD *)qword_140088ED8;
        if ( *(_QWORD *)(*(_QWORD *)qword_140088ED8 + 8LL) != qword_140088ED8 )
          goto LABEL_14;
        qword_140088ED8 = *(_QWORD *)qword_140088ED8;
        *(_QWORD *)(v1 + 8) = &qword_140088ED8;
        v0[1] = v0;
        *v0 = v0;
        if ( !(unsigned __int8)ExTryQueueWorkItem(v0 + 41, 1LL) )
        {
          v2 = qword_140088ED8;
          if ( *(__int64 **)(qword_140088ED8 + 8) != &qword_140088ED8 )
LABEL_14:
            __fastfail(3u);
          *v0 = qword_140088ED8;
          v0[1] = &qword_140088ED8;
          *(_QWORD *)(v2 + 8) = v0;
          qword_140088ED8 = (__int64)v0;
          break;
        }
      }
    }
    if ( (__int64 *)qword_140088ED8 != &qword_140088ED8 && (gReadyQueue & 2) == 0 )
    {
      OSQueueWorkItem(&qword_140088EF8);
      gReadyQueue |= 2u;
      LogSchedEvent(1381192785, 0, 0, 0, 0LL);
    }
  }
  KeReleaseSpinLock(&SpinLock, NewIrql);
}
