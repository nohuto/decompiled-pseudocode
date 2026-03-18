/*
 * XREFs of ACPIDeviceInternalQueueRequest @ 0x14001D388
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x14001BA00 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1400335A0 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x14001D5EC (ACPIPowerScheduleDpc.c)
 */

_QWORD *__fastcall ACPIDeviceInternalQueueRequest(__int64 a1, _QWORD *a2, __int16 a3)
{
  char v3; // r9
  _QWORD *result; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // r8

  v3 = a3;
  if ( (a3 & 0x100) != 0 )
  {
    result = (_QWORD *)AcpiPowerSynchronizeList;
    if ( *(__int64 **)(AcpiPowerSynchronizeList + 8) != &AcpiPowerSynchronizeList )
      goto LABEL_14;
    *a2 = AcpiPowerSynchronizeList;
    a2[1] = &AcpiPowerSynchronizeList;
    result[1] = a2;
    AcpiPowerSynchronizeList = (__int64)a2;
  }
  else
  {
    result = (_QWORD *)(a1 + 584);
    v5 = a2 + 2;
    if ( (_QWORD *)*result != result )
    {
      v6 = (_QWORD *)result[1];
      if ( (_QWORD *)*v6 == result )
      {
        *v5 = result;
        v5[1] = v6;
        *v6 = v5;
        result[1] = v5;
        goto LABEL_11;
      }
LABEL_14:
      __fastfail(3u);
    }
    v7 = (_QWORD *)result[1];
    if ( (_QWORD *)*v7 != result )
      goto LABEL_14;
    *v5 = result;
    a2[3] = v7;
    *v7 = v5;
    result[1] = v5;
    if ( (v3 & 1) != 0 )
    {
      result = (_QWORD *)qword_14008B078;
      if ( *(__int64 **)qword_14008B078 != &AcpiPowerDelayedQueueList )
        goto LABEL_14;
      *a2 = &AcpiPowerDelayedQueueList;
      a2[1] = result;
      *result = a2;
      qword_14008B078 = (__int64)a2;
    }
    else
    {
      result = (_QWORD *)qword_14008B088;
      if ( *(__int64 **)qword_14008B088 != &AcpiPowerQueueList )
        goto LABEL_14;
      *a2 = &AcpiPowerQueueList;
      a2[1] = result;
      *result = a2;
      qword_14008B088 = (__int64)a2;
    }
  }
LABEL_11:
  AcpiPowerDpcFlags |= 2u;
  if ( (v3 & 1) == 0 )
    return (_QWORD *)ACPIPowerScheduleDpc();
  return result;
}
