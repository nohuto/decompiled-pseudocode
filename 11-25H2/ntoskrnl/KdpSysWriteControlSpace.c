/*
 * XREFs of KdpSysWriteControlSpace @ 0x140B69740
 * Callers:
 *     KdSystemDebugControl @ 0x14072E220 (KdSystemDebugControl.c)
 *     KdpWriteControlSpace @ 0x140B6890C (KdpWriteControlSpace.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     KdpCopyMemoryChunks @ 0x140B6AACC (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpSysWriteControlSpace(ULONG a1, __int64 a2, void *a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // rbx

  v5 = a1;
  *a5 = 0;
  if ( a1 < KeQueryActiveProcessorCountEx(0xFFFFu) && KiProcessorBlock[v5] && a2 == 2 )
    return KdpCopyMemoryChunks(a3, 4, (__int64)a5);
  else
    return 3221225473LL;
}
