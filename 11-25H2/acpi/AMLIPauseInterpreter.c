/*
 * XREFs of AMLIPauseInterpreter @ 0x14002D7A4
 * Callers:
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x140049510 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x14004B120 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     AcpiPauseInterpreterForNamespaceUpdates @ 0x140064E0C (AcpiPauseInterpreterForNamespaceUpdates.c)
 *     Simulator_PauseInterpreter @ 0x14006B3C8 (Simulator_PauseInterpreter.c)
 * Callees:
 *     LogSchedEvent @ 0x14002DA00 (LogSchedEvent.c)
 */

__int64 __fastcall AMLIPauseInterpreter(_QWORD *a1)
{
  unsigned int v1; // ebx
  KIRQL v3; // al
  _QWORD *v4; // rax

  v1 = 0;
  dword_140089138 = 0;
  pszDest = 0;
  if ( a1[2] )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    ++dword_140088F98;
    NewIrql = v3;
    if ( glistCtxtHead == (_UNKNOWN *)&glistCtxtHead )
    {
      gReadyQueue |= 8u;
    }
    else
    {
      v4 = (_QWORD *)qword_140088FA8;
      gReadyQueue |= 4u;
      v1 = 32772;
      if ( *(__int64 **)qword_140088FA8 != &qword_140088FA0 )
        __fastfail(3u);
      *a1 = &qword_140088FA0;
      a1[1] = v4;
      *v4 = a1;
      qword_140088FA8 = (__int64)a1;
    }
    KeReleaseSpinLock(&SpinLock, NewIrql);
    LogSchedEvent(1346458963, 0, v1, 0, 0LL);
    if ( v1 == 32772 )
      return 259;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
