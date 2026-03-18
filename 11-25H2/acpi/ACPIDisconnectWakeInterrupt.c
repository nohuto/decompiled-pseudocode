/*
 * XREFs of ACPIDisconnectWakeInterrupt @ 0x140033E84
 * Callers:
 *     ACPIWakeEmulationDisable @ 0x140032CC4 (ACPIWakeEmulationDisable.c)
 * Callees:
 *     ACPIDereferenceWakeInterrupt @ 0x140034294 (ACPIDereferenceWakeInterrupt.c)
 */

void __fastcall ACPIDisconnectWakeInterrupt(__int64 *a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  KIRQL v4; // r8
  PVOID *i; // rcx
  __int64 **v6; // rax
  PVOID *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v3 = *a1;
  v4 = v2;
  if ( (__int64 *)*a1 != a1 )
  {
    for ( i = (PVOID *)AcpiPowerWaitWakeInterruptList; i != &AcpiPowerWaitWakeInterruptList; i = (PVOID *)*i )
    {
      if ( *((_DWORD *)i + 8) == *((_DWORD *)a1 + 6) && i[5] == (PVOID)a1[4] )
      {
        v7 = i;
        if ( *(__int64 **)(v3 + 8) != a1 || (v6 = (__int64 **)a1[1], *v6 != a1) )
          __fastfail(3u);
        *v6 = (__int64 *)v3;
        *(_QWORD *)(v3 + 8) = v6;
        a1[1] = (__int64)a1;
        *a1 = (__int64)a1;
        KeReleaseSpinLock(&AcpiPowerLock, v4);
        ACPIDereferenceWakeInterrupt(&v7);
        return;
      }
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v2);
}
