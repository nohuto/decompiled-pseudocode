/*
 * XREFs of ?IsWireformatHighBpp@@YA_NT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x140056C1C
 * Callers:
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1403A9E94 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsWireformatHighBpp(union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE a1)
{
  return (*(_BYTE *)&a1.0 & 0x30) != 0 || ((a1.Value | ((a1.Value | (a1.Value >> 6)) >> 6)) & 0xC00) != 0;
}
