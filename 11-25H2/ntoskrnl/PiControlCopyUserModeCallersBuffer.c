/*
 * XREFs of PiControlCopyUserModeCallersBuffer @ 0x1408CDD90
 * Callers:
 *     PiControlGetPropertyData @ 0x140834060 (PiControlGetPropertyData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1408C7380 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1408C7770 (PiCMCapturePropertyInputData.c)
 *     NtPlugPlayControl @ 0x1408CD560 (NtPlugPlayControl.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CD7B0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1408CDCA0 (PiControlMakeUserModeCallersCopy.c)
 *     PiControlGetSetDeviceStatus @ 0x1408CEC60 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetRelatedDevice @ 0x140932E90 (PiControlGetRelatedDevice.c)
 *     PiCMCaptureObjectInputData @ 0x140934730 (PiCMCaptureObjectInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x14095BC40 (PiCMCaptureRegistryInputData.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
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
