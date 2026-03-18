/*
 * XREFs of KdpSysReadControlSpace @ 0x140B79658
 * Callers:
 *     KdSystemDebugControl @ 0x14073A4B0 (KdSystemDebugControl.c)
 *     KdpReadControlSpace @ 0x140B775AC (KdpReadControlSpace.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     KdpCopyMemoryChunks @ 0x140B7AACC (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpSysReadControlSpace(ULONG a1, __int64 a2, void *a3, __int64 a4, _DWORD *a5)
{
  __int64 v6; // rdi
  __int64 v8; // rbx

  v6 = a1;
  *a5 = 0;
  if ( a1 >= KeQueryActiveProcessorCountEx(0xFFFFu) )
    return 3221225473LL;
  if ( !KiProcessorBlock[v6] )
    return 3221225473LL;
  if ( a2 && (v8 = a2 - 1) != 0 && (unsigned __int64)(v8 - 1) > 1 )
    return 3221225473LL;
  else
    return KdpCopyMemoryChunks(a3, 5, (__int64)a5);
}
