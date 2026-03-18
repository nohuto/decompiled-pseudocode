/*
 * XREFs of HalpAcpiPmRegisterWrite @ 0x14041ED40
 * Callers:
 *     HaliAcpiSleep @ 0x14049B670 (HaliAcpiSleep.c)
 *     HalpPowerWriteResetCommand @ 0x140542254 (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x1405424B8 (HalpShutdown.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x140557B94 (HalpCheckWakeupTimeAndAdjust.c)
 *     HalpDpPostReplace @ 0x140B3F880 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140B3FB3C (HalpDpPreReplace.c)
 *     HalpAcpiPostSleep @ 0x140B5AABC (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140B5D4E8 (HalpAcpiPreSleep.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
    guard_dispatch_icall_no_overrides(v9, v7);
  }
  if ( a5 )
    *a5 = *((_DWORD *)v8 + 6);
  return 0LL;
}
