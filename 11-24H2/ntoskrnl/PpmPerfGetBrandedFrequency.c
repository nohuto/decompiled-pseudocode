/*
 * XREFs of PpmPerfGetBrandedFrequency @ 0x140AB6C38
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     KeGetProcessorIndexFromNumber @ 0x140370440 (KeGetProcessorIndexFromNumber.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PpmPerfAccumulateBrandedFrequency @ 0x14074DDE8 (PpmPerfAccumulateBrandedFrequency.c)
 */

__int64 __fastcall PpmPerfGetBrandedFrequency(PPROCESSOR_NUMBER ProcNumber, _DWORD *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  ULONG ProcessorIndexFromNumber; // eax
  unsigned __int16 *v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+32h] [rbp-16h]
  __int16 v11; // [rsp+36h] [rbp-12h]
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, (__int64)a2, a3);
  a2[1] = 0;
  if ( ProcNumber )
  {
    if ( ProcNumber->Reserved
      || (ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber), ProcessorIndexFromNumber == -1) )
    {
      v3 = -1073741811;
    }
    else
    {
      PpmPerfAccumulateBrandedFrequency(ProcessorIndexFromNumber, a2);
    }
  }
  else
  {
    v8[1] = (unsigned __int16 *)PpmCheckRegistered.Bitmap[0];
    v8[0] = (unsigned __int16 *)&PpmCheckRegistered;
    v9 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v12, v8) )
      PpmPerfAccumulateBrandedFrequency(v12, a2);
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v3;
}
