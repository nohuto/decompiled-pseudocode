/*
 * XREFs of RtlGetCurrentProcessorNumberEx @ 0x180164630
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x18001CC90 (RtlpHeapTrkInterceptor.c)
 *     RtlpCallInterceptRoutine @ 0x180054AE0 (RtlpCallInterceptRoutine.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x1800554A0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpGetCurrentProcessorNumber @ 0x180064794 (RtlpHpGetCurrentProcessorNumber.c)
 *     RtlpGetCurrentProcessorNumberExUninitialized @ 0x180103E70 (RtlpGetCurrentProcessorNumberExUninitialized.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcessorNumber)
{
  PPROCESSOR_NUMBER v1; // r8
  char v2; // zf
  unsigned __int32 v3; // eax

  v1 = ProcessorNumber;
  switch ( RtlpGetCurrentProcessorNumberHow )
  {
    case 1:
      __asm { rdpid   rcx }
LABEL_5:
      v1->Group = (unsigned int)ProcessorNumber >> 8;
      *(_WORD *)&v1->Number = (unsigned __int8)ProcessorNumber;
      return;
    case 2:
      __asm { rdtscp }
      goto LABEL_5;
    case 3:
      v3 = __segmentlimit(0x53u);
      if ( v2 )
      {
        ProcessorNumber->Group = v3 & 0x3FF;
        *(_WORD *)&ProcessorNumber->Number = v3 >> 14;
      }
      else
      {
        *ProcessorNumber = 0;
        NtGetCurrentProcessorNumberEx(ProcessorNumber);
      }
      break;
    default:
      RtlpGetCurrentProcessorNumberExUninitialized((__int64)ProcessorNumber);
      break;
  }
}
