/*
 * XREFs of HalpAcpiPmRegisterRead @ 0x140411C50
 * Callers:
 *     HaliAcpiSleep @ 0x1404D3920 (HaliAcpiSleep.c)
 *     HaliHaltSystem @ 0x140542250 (HaliHaltSystem.c)
 *     HalpCheckPowerButton @ 0x1405422F0 (HalpCheckPowerButton.c)
 *     HalpShutdown @ 0x14054263C (HalpShutdown.c)
 *     HalpDpPostReplace @ 0x140B518D0 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140B51B8C (HalpDpPreReplace.c)
 *     HalpAcpiPostSleep @ 0x140B6BE80 (HalpAcpiPostSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140B6CA9C (HalpCheckFixedWakeSources.c)
 *     HalpAcpiPreSleep @ 0x140B6DE6C (HalpAcpiPreSleep.c)
 * Callees:
 *     HalpAcpiPmRegisterReadPort @ 0x140411CD0 (HalpAcpiPmRegisterReadPort.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
