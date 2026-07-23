/*
 * XREFs of PiControlCopyUserModeCallersBuffer @ 0x1408CDC30
 * Callers:
 *     PiControlGetPropertyData @ 0x1408BAE00 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x1408BB1F0 (PiControlGetRelatedDevice.c)
 *     NtPlugPlayControl @ 0x1408CD400 (NtPlugPlayControl.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CD650 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1408CDB40 (PiControlMakeUserModeCallersCopy.c)
 *     PiControlGetSetDeviceStatus @ 0x1408CED40 (PiControlGetSetDeviceStatus.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall PiControlCopyUserModeCallersBuffer(
        char *a1,
        const void *a2,
        unsigned int a3,
        int a4,
        char a5,
        int a6)
{
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx

  if ( a5 )
  {
    if ( a6 )
    {
      if ( a3 )
      {
        if ( ((a4 - 1) & (unsigned int)a2) != 0 )
          ExRaiseDatatypeMisalignment();
      }
    }
    else if ( a3 )
    {
      v7 = (unsigned __int64)a1;
      if ( ((a4 - 1) & (unsigned int)a1) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = (unsigned __int64)&a1[a3 - 1];
      if ( (unsigned __int64)a1 > v8 || v8 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v9 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v7 = *(_BYTE *)v7;
        v7 = (v7 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v7 != v9 );
    }
    else
    {
      a3 = 0;
    }
    memmove(a1, a2, a3);
    return 0LL;
  }
  else
  {
    memmove(a1, a2, a3);
    return 0LL;
  }
}
