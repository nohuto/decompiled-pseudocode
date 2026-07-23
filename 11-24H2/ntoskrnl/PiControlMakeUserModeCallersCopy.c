/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1408CDB40
 * Callers:
 *     NtReplacePartitionUnit @ 0x1406A2880 (NtReplacePartitionUnit.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1408B33C4 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiControlGetDeviceDepth @ 0x1408B90D0 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureObjectInputData @ 0x1408BC4E0 (PiCMCaptureObjectInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1408C2BE0 (PiCMCapturePropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1408C3160 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x14094B8B8 (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1409FF604 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMCaptureDeviceListInputData @ 0x140A16020 (PiCMCaptureDeviceListInputData.c)
 *     PiControlQueryDeviceRelations @ 0x140A341F0 (PiControlQueryDeviceRelations.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140A79294 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140AB4128 (PiCMCaptureCreateDeviceInputData.c)
 * Callees:
 *     PiControlCopyUserModeCallersBuffer @ 0x1408CDC30 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiControlMakeUserModeCallersCopy(void **a1, void *a2, unsigned int a3, __int64 a4, char a5, int a6)
{
  __int64 Pool2; // rax
  int v9; // r15d

  if ( a5 )
  {
    if ( a3 )
    {
      if ( a6 && (Pool2 = ExAllocatePool2(0x101uLL, a3, 0x20207050u), (*a1 = (void *)Pool2) == 0LL) )
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
