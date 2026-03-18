/*
 * XREFs of KeNotifyHeteroParkingPolicyChange @ 0x140A2B528
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140A2A138 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

struct _KPRCB *__fastcall KeNotifyHeteroParkingPolicyChange(char a1)
{
  struct _KPRCB *result; // rax
  int v2; // edx

  if ( KiIntPartInitialized )
  {
    result = (struct _KPRCB *)KiInterruptEfficiencyClassGroup;
    v2 = 1;
    if ( *(_BYTE *)KiInterruptEfficiencyClassGroup <= 1u )
    {
      v2 = 0;
    }
    else
    {
      result = KeGetCurrentPrcb();
      if ( result->CpuVendor == 2 )
        v2 = 3 - (a1 != 0);
    }
    KiIntPartProcessorPriority = v2;
  }
  return result;
}
