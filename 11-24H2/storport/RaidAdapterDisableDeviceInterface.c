/*
 * XREFs of RaidAdapterDisableDeviceInterface @ 0x14003DE00
 * Callers:
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401BB518 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1401BB770 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     StorDeleteSymbolicLink @ 0x14004D4A8 (StorDeleteSymbolicLink.c)
 *     RaidAdapterDeleteDevmapEntry @ 0x1400553D0 (RaidAdapterDeleteDevmapEntry.c)
 */

NTSTATUS __fastcall RaidAdapterDisableDeviceInterface(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rcx

  if ( *(_QWORD *)(a1 + 1984) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1976), 0);
  result = RaidAdapterDeleteDevmapEntry(a1);
  if ( (*(_BYTE *)(a1 + 104) & 4) != 0 )
  {
    result = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
    *(_BYTE *)(a1 + 104) &= 0xF9u;
  }
  v3 = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)v3 != -1 )
  {
    result = StorDeleteSymbolicLink(v3, 0LL, a1);
    *(_DWORD *)(a1 + 56) = -1;
  }
  return result;
}
