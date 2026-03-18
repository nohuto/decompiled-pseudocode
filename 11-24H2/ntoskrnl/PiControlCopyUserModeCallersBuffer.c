/*
 * XREFs of PiControlCopyUserModeCallersBuffer @ 0x1408D0240
 * Callers:
 *     PiControlGetPropertyData @ 0x1408BD4B0 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x1408BD8A0 (PiControlGetRelatedDevice.c)
 *     PiCMCaptureObjectInputData @ 0x1408BEB90 (PiCMCaptureObjectInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1408C5220 (PiCMCapturePropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1408C5760 (PiCMCaptureRegistryPropertyInputData.c)
 *     NtPlugPlayControl @ 0x1408CFA10 (NtPlugPlayControl.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CFC60 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1408D0150 (PiControlMakeUserModeCallersCopy.c)
 *     PiControlGetSetDeviceStatus @ 0x1408D1350 (PiControlGetSetDeviceStatus.c)
 *     PiCMCaptureRegistryInputData @ 0x140963DF8 (PiCMCaptureRegistryInputData.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408C10E0 (ExRaiseAccessViolation.c)
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
