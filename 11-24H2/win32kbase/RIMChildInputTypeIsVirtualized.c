/*
 * XREFs of RIMChildInputTypeIsVirtualized @ 0x14014BC20
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x140063CD0 (RIMDirectStartStopDeviceRead.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1401ED2E0 (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 */

char __fastcall RIMChildInputTypeIsVirtualized(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  _DWORD *v4; // rax
  _DWORD *v5; // rdx

  v1 = a1;
  if ( isChildPartition(a1) )
  {
    v4 = (_DWORD *)(W32GetUserSessionState(v2) + 276);
    v5 = v4 + 10;
    while ( v4 != v5 )
    {
      if ( (v1 & v4[1]) != 0 && *v4 )
        return 1;
      v4 += 2;
    }
  }
  return 0;
}
