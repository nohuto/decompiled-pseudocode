/*
 * XREFs of KiApplyProcessorDpcLimits @ 0x140B57C1C
 * Callers:
 *     KiUpdateProcessorDpcWatchdogConfiguration @ 0x1405B1D10 (KiUpdateProcessorDpcWatchdogConfiguration.c)
 *     KiInitializeProcessor @ 0x140B5861C (KiInitializeProcessor.c)
 * Callees:
 *     KiSetProcessorDpcLimits @ 0x1405B4800 (KiSetProcessorDpcLimits.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiApplyProcessorDpcLimits(__int64 a1, int *a2)
{
  unsigned int v3; // eax
  __int64 Pool2; // r8
  int v6; // ebx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v3 = a2[6];
  Pool2 = *(_QWORD *)(a1 + 36520);
  if ( a2[7] != v3 )
  {
    if ( v3 )
      Pool2 = ExAllocatePool2(0x40uLL, v3, 0x5057694Bu);
    else
      Pool2 = 0LL;
  }
  v6 = KiSetProcessorDpcLimits(a1, a2, Pool2, &P);
  if ( v6 >= 0 && P )
    ExFreePoolWithTag(P, 0x5057694Bu);
  return (unsigned int)v6;
}
