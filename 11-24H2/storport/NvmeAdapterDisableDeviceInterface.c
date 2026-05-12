/*
 * XREFs of NvmeAdapterDisableDeviceInterface @ 0x1400CF764
 * Callers:
 *     NvmeAdapterRemoveDeviceIrp @ 0x14019B714 (NvmeAdapterRemoveDeviceIrp.c)
 *     NvmeAdapterSurpriseRemovalIrp @ 0x14019DCB8 (NvmeAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     StorDeleteSymbolicLink @ 0x14004D4A8 (StorDeleteSymbolicLink.c)
 */

int __fastcall NvmeAdapterDisableDeviceInterface(__int64 a1, __int64 a2)
{
  int result; // eax
  __int64 v4; // rcx

  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 888) )
    result = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 880), 0);
  if ( *(_QWORD *)(a1 + 872) )
    result = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 864), 0);
  if ( (*(_BYTE *)(a1 + 144) & 8) != 0 )
  {
    result = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
    *(_QWORD *)(a1 + 144) &= 0xFFFFFFFFFFFFFFF3uLL;
  }
  v4 = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)v4 != -1 )
  {
    LOBYTE(a2) = 1;
    result = StorDeleteSymbolicLink(v4, a2, (int *)a1);
    *(_DWORD *)(a1 + 56) = -1;
  }
  return result;
}
