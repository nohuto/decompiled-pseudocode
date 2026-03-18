/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1408CDCA0
 * Callers:
 *     NtReplacePartitionUnit @ 0x140696650 (NtReplacePartitionUnit.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1408C7380 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1408C7770 (PiCMCapturePropertyInputData.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1409545D8 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x140956F94 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x14095DE04 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCaptureDeviceListInputData @ 0x14095EFEC (PiCMCaptureDeviceListInputData.c)
 *     PiControlQueryDeviceRelations @ 0x140A3A4D0 (PiControlQueryDeviceRelations.c)
 *     PiControlGetDeviceDepth @ 0x140A46480 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140AB0104 (PiCMCaptureCreateDeviceInputData.c)
 * Callees:
 *     PiControlCopyUserModeCallersBuffer @ 0x1408CDD90 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
