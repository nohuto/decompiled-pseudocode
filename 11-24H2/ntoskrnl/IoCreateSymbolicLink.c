/*
 * XREFs of IoCreateSymbolicLink @ 0x140A1E270
 * Callers:
 *     DifIoCreateSymbolicLinkWrapper @ 0x140625C20 (DifIoCreateSymbolicLinkWrapper.c)
 *     IopCreateArcName @ 0x140A6FCE0 (IopCreateArcName.c)
 *     IopCreateArcNamesCd @ 0x140C1DE70 (IopCreateArcNamesCd.c)
 *     WmipDriverEntry @ 0x140C3EB10 (WmipDriverEntry.c)
 *     CimfsInitialize @ 0x140C5FEBC (CimfsInitialize.c)
 *     RamdiskCreateSymbolicLink @ 0x140C60628 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     IoCreateSymbolicLink2 @ 0x140A1E2B0 (IoCreateSymbolicLink2.c)
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
