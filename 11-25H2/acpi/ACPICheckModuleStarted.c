/*
 * XREFs of ACPICheckModuleStarted @ 0x140055E44
 * Callers:
 *     ACPIBusIrpStartDeviceCompletion @ 0x14005B210 (ACPIBusIrpStartDeviceCompletion.c)
 *     ACPIProcessorStartDeviceWorker @ 0x140065D40 (ACPIProcessorStartDeviceWorker.c)
 * Callees:
 *     ACPIInternalEvaluateOST @ 0x140061980 (ACPIInternalEvaluateOST.c)
 */

void __fastcall ACPICheckModuleStarted(__int64 a1, int a2)
{
  KIRQL v4; // dl
  char v5; // bl
  _QWORD *i; // rcx
  __int64 v7; // rax

  while ( 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    if ( *(_BYTE *)(a1 + 185) )
      break;
    v5 = 1;
    if ( a2 >= 0 )
    {
      for ( i = *(_QWORD **)(a1 + 800); i != (_QWORD *)(a1 + 800); i = (_QWORD *)*i )
      {
        v7 = *(i - 101);
        if ( (v7 & 0x2000000000LL) != 0 && !*((_BYTE *)i - 631)
          || (v7 & 0x100) == 0 && (unsigned int)(*((_DWORD *)i - 112) - 2) > 1 )
        {
          v5 = 0;
          goto LABEL_12;
        }
      }
    }
    *(_BYTE *)(a1 + 185) = 1;
LABEL_12:
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
    if ( v5 )
    {
      ACPIInternalEvaluateOST(a1, 0LL, (a2 >> 31) & 0xA3);
      a1 = *(_QWORD *)(a1 + 792);
      if ( _bittest64((const signed __int64 *)(a1 + 8), 0x25u) )
        continue;
    }
    return;
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
}
