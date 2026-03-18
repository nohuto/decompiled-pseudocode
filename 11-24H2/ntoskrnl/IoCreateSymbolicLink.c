/*
 * XREFs of IoCreateSymbolicLink @ 0x140A298B0
 * Callers:
 *     DifIoCreateSymbolicLinkWrapper @ 0x140627660 (DifIoCreateSymbolicLinkWrapper.c)
 *     IopCreateArcName @ 0x140A75840 (IopCreateArcName.c)
 *     IopCreateArcNamesCd @ 0x140C1BE30 (IopCreateArcNamesCd.c)
 *     WmipDriverEntry @ 0x140C3C9C0 (WmipDriverEntry.c)
 *     CimfsInitialize @ 0x140C5DD6C (CimfsInitialize.c)
 *     RamdiskCreateSymbolicLink @ 0x140C5E4D8 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     IoCreateSymbolicLink2 @ 0x140A298F0 (IoCreateSymbolicLink2.c)
 */

NTSTATUS __stdcall IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName)
{
  int v3; // [rsp+20h] [rbp-28h] BYREF
  _OWORD v4[2]; // [rsp+24h] [rbp-24h]

  v3 = 0;
  v4[0] = 0LL;
  *(UNICODE_STRING *)((char *)v4 + 4) = *DeviceName;
  return IoCreateSymbolicLink2(SymbolicLinkName, &v3);
}
