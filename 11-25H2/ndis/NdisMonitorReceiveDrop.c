/*
 * XREFs of NdisMonitorReceiveDrop @ 0x1400C0A80
 * Callers:
 *     <none>
 * Callees:
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall NdisMonitorReceiveDrop(ULONG_PTR BugCheckParameter4, __int64 a2, __int64 a3)
{
  if ( *(_BYTE *)BugCheckParameter4 != 17 )
    ndisBugCheckEx(0x34uLL, 1uLL, 1uLL, BugCheckParameter4);
  if ( (_DWORD)a3 )
    ndisBugCheckEx(0x2DuLL, 3uLL, (unsigned int)a3, BugCheckParameter4);
  if ( byte_1401278B0 )
  {
    if ( (*(_DWORD *)(BugCheckParameter4 + 5872) & 2) != 0 )
      PktMonClientNblDropNdis(BugCheckParameter4 + 5816, a2, a3, 1LL, *(_DWORD *)(a2 + 140), -536866801);
  }
}
