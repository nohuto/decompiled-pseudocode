/*
 * XREFs of HalpAcpiPmRegisterRead @ 0x1404203D0
 * Callers:
 *     HaliAcpiSleep @ 0x14049B670 (HaliAcpiSleep.c)
 *     HaliHaltSystem @ 0x1405420D0 (HaliHaltSystem.c)
 *     HalpCheckPowerButton @ 0x140542170 (HalpCheckPowerButton.c)
 *     HalpShutdown @ 0x1405424B8 (HalpShutdown.c)
 *     HalpDpPostReplace @ 0x140B3F880 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140B3FB3C (HalpDpPreReplace.c)
 *     HalpAcpiPostSleep @ 0x140B5AABC (HalpAcpiPostSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140B5B6B0 (HalpCheckFixedWakeSources.c)
 *     HalpAcpiPreSleep @ 0x140B5D4E8 (HalpAcpiPreSleep.c)
 * Callees:
 *     HalpAcpiPmRegisterReadPort @ 0x140420450 (HalpAcpiPmRegisterReadPort.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpAcpiPmRegisterRead(int a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  char *v8; // rbx
  __int64 v9; // rcx

  v6 = 6LL * a1;
  v7 = *(unsigned int *)&PmRegisters[48 * a1 + 24];
  v8 = &PmRegisters[48 * a1];
  if ( (unsigned int)v7 > a4 )
    return 3221225507LL;
  v9 = *(_QWORD *)&PmRegisters[48 * a1 + 8] + a2;
  if ( *(__int64 (__fastcall **)(_QWORD))&PmRegisters[8 * v6 + 32] == HalpAcpiPmRegisterReadPort )
    HalpAcpiPmRegisterReadPort(v9);
  else
    guard_dispatch_icall_no_overrides(v9, v7);
  if ( a5 )
    *a5 = *((_DWORD *)v8 + 6);
  return 0LL;
}
