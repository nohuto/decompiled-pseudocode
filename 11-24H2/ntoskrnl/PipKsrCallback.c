/*
 * XREFs of PipKsrCallback @ 0x140732090
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemInformation @ 0x1406A7A70 (ZwQuerySystemInformation.c)
 *     PipKsrNotifyDrivers @ 0x14073216C (PipKsrNotifyDrivers.c)
 */

void __fastcall PipKsrCallback(PVOID CallbackContext, char *Argument1, int *Argument2)
{
  char *v4; // rdx
  char *v5; // rdx
  char *v6; // rdx
  char *v7; // rdx
  GUID *v8; // rcx
  int v9; // eax
  int SystemInformation; // [rsp+38h] [rbp+10h] BYREF

  if ( Argument1 )
  {
    v4 = Argument1 - 1;
    if ( !v4 )
    {
      if ( !PnpKsrPrepared )
        return;
      PnpKsrPrepared = 0;
      v8 = &GUID_KERNEL_SOFT_RESTART_CANCEL;
      PnpKsrIsHhrPrepare = 0;
      goto LABEL_14;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      v8 = &GUID_KERNEL_SOFT_RESTART_PRE_COMPLETE;
LABEL_14:
      PipKsrNotifyDrivers(v8);
      return;
    }
    v6 = v5 - 3;
    if ( v6 )
    {
      v7 = v6 - 15;
      if ( v7 )
      {
        if ( v7 != (char *)5 )
          return;
        v8 = &GUID_RECOVERY_PCI_PREPARE_SHUTDOWN;
      }
      else
      {
        v8 = &GUID_RECOVERY_NVMED_PREPARE_SHUTDOWN;
      }
      goto LABEL_14;
    }
    if ( *Argument2 >= 0 )
      *Argument2 = PipKsrNotifyDrivers(&GUID_KERNEL_SOFT_RESTART_FINALIZE);
  }
  else if ( *Argument2 >= 0 )
  {
    v9 = PipKsrNotifyDrivers(&GUID_KERNEL_SOFT_RESTART_PREPARE);
    SystemInformation = 0;
    *Argument2 = v9;
    PnpKsrPrepared = 1;
    ZwQuerySystemInformation(SystemSoftRebootInformation, &SystemInformation, 4u, 0LL);
    PnpKsrIsHhrPrepare = (SystemInformation & 0x40) != 0;
  }
}
