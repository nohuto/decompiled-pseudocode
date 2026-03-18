/*
 * XREFs of ACPIHardwareGlobalLockReleased @ 0x1400228F8
 * Callers:
 *     ACPIInterruptServiceRoutineDPC @ 0x1400223A0 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     ACPIAcquireHardwareGlobalLock @ 0x1400233C0 (ACPIAcquireHardwareGlobalLock.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1400236D4 (ACPIStartNextGlobalLockRequest.c)
 */

void ACPIHardwareGlobalLockReleased()
{
  char v0; // bl
  __int64 v1; // r8
  __int64 v2; // r9
  _QWORD *v3; // rdx

  v0 = 0;
  LOBYTE(v2) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
  v3 = (_QWORD *)((char *)AcpiInformation + 48);
  if ( (_QWORD *)*v3 != v3 )
    v0 = ACPIAcquireHardwareGlobalLock(*((_QWORD *)AcpiInformation + 5), v3, v1, v2);
  KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v2);
  if ( v0 )
    ACPIStartNextGlobalLockRequest();
}
