/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1408D0150
 * Callers:
 *     NtReplacePartitionUnit @ 0x1406A1830 (NtReplacePartitionUnit.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1408B5AD4 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiControlGetDeviceDepth @ 0x1408BB720 (PiControlGetDeviceDepth.c)
 *     PiCMCapturePropertyInputData @ 0x1408C5220 (PiCMCapturePropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1408C5760 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1409FE9F0 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMCaptureDeviceListInputData @ 0x140A1A15C (PiCMCaptureDeviceListInputData.c)
 *     PiControlQueryDeviceRelations @ 0x140A3E880 (PiControlQueryDeviceRelations.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140A6E830 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140AB50F4 (PiCMCaptureCreateDeviceInputData.c)
 * Callees:
 *     PiControlCopyUserModeCallersBuffer @ 0x1408D0240 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiControlMakeUserModeCallersCopy(void **a1, void *a2, int a3, __int64 a4, char a5, int a6)
{
  __int64 Pool2; // rax
  int v9; // r15d

  if ( a5 )
  {
    if ( a3 )
    {
      if ( a6 && (Pool2 = ExAllocatePool2(0x101uLL), (*a1 = (void *)Pool2) == 0LL) )
      {
        return 3221225626LL;
      }
      else
      {
        v9 = 0;
        if ( *a1 )
        {
          v9 = PiControlCopyUserModeCallersBuffer(*a1, a5, a6);
          if ( v9 < 0 )
          {
            if ( a6 )
            {
              ExFreePoolWithTag(*a1, 0);
              *a1 = 0LL;
            }
          }
        }
        return (unsigned int)v9;
      }
    }
    else
    {
      *a1 = 0LL;
      return 0LL;
    }
  }
  else
  {
    *a1 = a2;
    return 0LL;
  }
}
