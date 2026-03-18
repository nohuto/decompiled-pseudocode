/*
 * XREFs of HUBMUX_AcquirePortPowerReference @ 0x140010824
 * Callers:
 *     HUBPSM20_AcquiringPortReferenceOnStart @ 0x1400123B0 (HUBPSM20_AcquiringPortReferenceOnStart.c)
 *     HUBPSM20_IssuingHubResetOnControlTransferFailureOnStart @ 0x140012D50 (HUBPSM20_IssuingHubResetOnControlTransferFailureOnStart.c)
 *     HUBPSM30_AcquiringPortReferenceAndGettingPortEvent @ 0x140013790 (HUBPSM30_AcquiringPortReferenceAndGettingPortEvent.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBMUX_AcquirePortPowerReference(volatile signed __int32 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)a1;
  _InterlockedAnd(a1 + 66, 0xFFFFFFFB);
  _InterlockedOr(a1 + 66, 8u);
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 2360));
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 2348), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return HUBSM_AddEvent(v1 + 1280, 2054);
  return result;
}
