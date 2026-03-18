/*
 * XREFs of KdpAllowDisable @ 0x140B795A0
 * Callers:
 *     KdDisableDebuggerWithLock @ 0x1405AF918 (KdDisableDebuggerWithLock.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 */

__int64 KdpAllowDisable()
{
  ULONG ActiveProcessorCount; // eax
  __int64 i; // r8

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  for ( i = 0LL; (unsigned int)i < ActiveProcessorCount; i = (unsigned int)(i + 1) )
  {
    if ( *(_BYTE *)(KiProcessorBlock[i] + 328) )
      return 3221225506LL;
  }
  return 0LL;
}
