/*
 * XREFs of HalpAcpiPmRegisterWrite @ 0x14041C1F0
 * Callers:
 *     HaliAcpiSleep @ 0x1404D9F00 (HaliAcpiSleep.c)
 *     HalpPowerWriteResetCommand @ 0x140544B14 (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x140544D7C (HalpShutdown.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x14055A494 (HalpCheckWakeupTimeAndAdjust.c)
 *     HaliAcpiSleepOld @ 0x140569940 (HaliAcpiSleepOld.c)
 *     HalpDpPostReplace @ 0x140B4F880 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140B4FB3C (HalpDpPreReplace.c)
 *     HalpAcpiPostSleep @ 0x140B6A5BC (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140B6C5C8 (HalpAcpiPreSleep.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpAcpiPmRegisterWrite(int a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4, _DWORD *a5)
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
  if ( *(__int64 (__fastcall **)(unsigned __int16, int, unsigned __int8 *))&PmRegisters[8 * v6 + 40] == HalpAcpiPmRegisterWritePort )
  {
    switch ( (_DWORD)v7 )
    {
      case 1:
        __outbyte(v9, *a3);
        break;
      case 2:
        __outword(v9, *(_WORD *)a3);
        break;
      case 4:
        __outdword(v9, *(_DWORD *)a3);
        break;
    }
  }
  else
  {
    guard_dispatch_icall_no_overrides(v9, v7, a3, HalpAcpiPmRegisterWritePort);
  }
  if ( a5 )
    *a5 = *((_DWORD *)v8 + 6);
  return 0LL;
}
