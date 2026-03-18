/*
 * XREFs of IoCreateSymbolicLink @ 0x140A1FD70
 * Callers:
 *     DifIoCreateSymbolicLinkWrapper @ 0x14061B6A0 (DifIoCreateSymbolicLinkWrapper.c)
 *     IopCreateArcName @ 0x140A73568 (IopCreateArcName.c)
 *     IopCreateArcNamesCd @ 0x140C0AC5C (IopCreateArcNamesCd.c)
 *     WmipDriverEntry @ 0x140C2B6E0 (WmipDriverEntry.c)
 *     CimfsInitialize @ 0x140C4C9EC (CimfsInitialize.c)
 *     RamdiskCreateSymbolicLink @ 0x140C4D158 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     IoCreateSymbolicLink2 @ 0x140A1FDB0 (IoCreateSymbolicLink2.c)
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
