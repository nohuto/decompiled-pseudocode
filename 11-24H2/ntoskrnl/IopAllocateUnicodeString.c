/*
 * XREFs of IopAllocateUnicodeString @ 0x140A0D4B0
 * Callers:
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x14071F2A4 (PiBuildAndOpenDeviceDirectoryPath.c)
 *     PiCreateServiceKeyUnderPath @ 0x14071F96C (PiCreateServiceKeyUnderPath.c)
 *     PiGetDriverMutableStateDirectory @ 0x14071FBB8 (PiGetDriverMutableStateDirectory.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1408B5640 (IopBuildGlobalSymbolicLinkString.c)
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 *     PiDeferSetInterfaceState @ 0x140A0C5A8 (PiDeferSetInterfaceState.c)
 *     PiDeviceRegistration @ 0x140A0CBC4 (PiDeviceRegistration.c)
 *     PnpConcatenateUnicodeStrings @ 0x140A0D474 (PnpConcatenateUnicodeStrings.c)
 *     PiOpenDriverRedirectedStateKey @ 0x140A84618 (PiOpenDriverRedirectedStateKey.c)
 *     PnpLogVetoInformation @ 0x140A9F1B4 (PnpLogVetoInformation.c)
 * Callees:
 *     RtlUShortAdd @ 0x14046B240 (RtlUShortAdd.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateUnicodeString(__int64 a1, USHORT a2)
{
  _WORD *v2; // rdi
  NTSTATUS v4; // ebx
  __int64 Pool2; // rax

  v2 = (_WORD *)(a1 + 2);
  *(_WORD *)a1 = 0;
  v4 = RtlUShortAdd(a2, 2u, (USHORT *)(a1 + 2));
  if ( v4 >= 0 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    *(_QWORD *)(a1 + 8) = Pool2;
    if ( !Pool2 )
    {
      *v2 = 0;
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
