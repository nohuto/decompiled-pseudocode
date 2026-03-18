/*
 * XREFs of IvtInitializeReservedDomains @ 0x140B535C8
 * Callers:
 *     IvtLegacyProcessDeviceExceptions @ 0x140B5250C (IvtLegacyProcessDeviceExceptions.c)
 *     IvtProcessDeviceExceptions @ 0x140B527F4 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053C180 (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpIvtpInitializeReservedDomain @ 0x140B533F8 (HalpIvtpInitializeReservedDomain.c)
 *     HalpIvtpLegacyInitializeReservedDomain @ 0x140B534E4 (HalpIvtpLegacyInitializeReservedDomain.c)
 */

__int64 __fastcall IvtInitializeReservedDomains(__int64 a1)
{
  unsigned int *v1; // rdx
  __int64 result; // rax
  unsigned int i; // ebx
  unsigned int *v5; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  int *v7; // rdx

  v1 = *(unsigned int **)(a1 + 352);
  result = 0LL;
  for ( i = 0; i < *v1; ++i )
  {
    v5 = &v1[4 * i];
    IsEnabledDeviceUsageNoInline = Feature_Test57481295__private_IsEnabledDeviceUsageNoInline();
    v7 = (int *)(v5 + 2);
    if ( IsEnabledDeviceUsageNoInline )
      result = HalpIvtpInitializeReservedDomain(a1, v7);
    else
      result = HalpIvtpLegacyInitializeReservedDomain(a1, v7);
    if ( (int)result < 0 )
      break;
    v1 = *(unsigned int **)(a1 + 352);
  }
  return result;
}
