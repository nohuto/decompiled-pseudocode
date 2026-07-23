/*
 * XREFs of PopDirectedDripsUmMarkTestDevices @ 0x140AB1B4C
 * Callers:
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140A1BF04 (PopDirectedDripsIdleResiliencyCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403FA3F0 (RtlLookupElementGenericTableAvl.c)
 *     PopDirectedDripsMarkCandidateDevice @ 0x1406F9E54 (PopDirectedDripsMarkCandidateDevice.c)
 *     PopDirectedDripsNotify @ 0x140A627B0 (PopDirectedDripsNotify.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140A9D5CC (IoLockUnlockPnpDeviceTree.c)
 */

__int64 PopDirectedDripsUmMarkTestDevices()
{
  __int64 result; // rax
  int v1; // ett
  _QWORD *v2; // rbx
  _QWORD *i; // rax
  _QWORD *v4; // rax
  _DWORD Buffer[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  _m_prefetchw(&PopDirectedDripsUmTestDeviceCount);
  LODWORD(result) = PopDirectedDripsUmTestDeviceCount;
  do
  {
    v1 = result;
    result = (unsigned int)_InterlockedCompareExchange(&PopDirectedDripsUmTestDeviceCount, result, result);
  }
  while ( v1 != (_DWORD)result );
  if ( (_DWORD)result )
  {
    PopAcquireRwLockShared(&PopDirectedDripsUmLock);
    v7 = PopWnfCsEnterScenarioId;
    PopDirectedDripsNotify(PopDirectedDripsUmTestPermissive != 0 ? 4 : 2, (char *)&v7);
    IoLockUnlockPnpDeviceTree(1);
    v2 = IopRootDeviceNode;
    for ( i = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); i; i = (_QWORD *)i[1] )
      v2 = i;
    while ( v2 != IopRootDeviceNode )
    {
      if ( v2[10] )
      {
        Buffer[1] = *((unsigned __int16 *)v2 + 20) >> 1;
        v6 = v2[6];
        Buffer[0] = 1;
        if ( RtlLookupElementGenericTableAvl(&PopDirectedDripsUmTestDeviceTable, Buffer) )
          PopDirectedDripsMarkCandidateDevice(v2[10]);
      }
      v4 = (_QWORD *)*v2;
      if ( *v2 )
      {
        do
        {
          v2 = v4;
          v4 = (_QWORD *)v4[1];
        }
        while ( v4 );
      }
      else
      {
        v2 = (_QWORD *)v2[2];
      }
    }
    IoLockUnlockPnpDeviceTree(0);
    PopDirectedDripsNotify(PopDirectedDripsUmTestPermissive != 0 ? 5 : 3, (char *)&v7);
    return PopReleaseRwLock(&PopDirectedDripsUmLock);
  }
  return result;
}
