/*
 * XREFs of IopAllocateUnicodeString @ 0x14096AEDC
 * Callers:
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x1407131A4 (PiBuildAndOpenDeviceDirectoryPath.c)
 *     PiCreateServiceKeyUnderPath @ 0x14071386C (PiCreateServiceKeyUnderPath.c)
 *     PiGetDriverMutableStateDirectory @ 0x140713AB8 (PiGetDriverMutableStateDirectory.c)
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 *     PiOpenDriverRedirectedStateKey @ 0x14088F1D8 (PiOpenDriverRedirectedStateKey.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1409690E0 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpConcatenateUnicodeStrings @ 0x14096AEA0 (PnpConcatenateUnicodeStrings.c)
 *     PiDeviceRegistration @ 0x140A46BD8 (PiDeviceRegistration.c)
 *     PiDeferSetInterfaceState @ 0x140A8B230 (PiDeferSetInterfaceState.c)
 *     PnpLogVetoInformation @ 0x140A99FDC (PnpLogVetoInformation.c)
 * Callees:
 *     RtlUShortAdd @ 0x140472A24 (RtlUShortAdd.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
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
