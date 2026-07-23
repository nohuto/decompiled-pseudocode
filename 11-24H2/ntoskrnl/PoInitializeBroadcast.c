/*
 * XREFs of PoInitializeBroadcast @ 0x140A36214
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x140A35AD4 (PopDirectedDripsInitializeBroadcast.c)
 *     PnprQuiesceDevices @ 0x140B565F4 (PnprQuiesceDevices.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmBeginHighPerfRequest @ 0x140464930 (PpmBeginHighPerfRequest.c)
 *     PopHaltDeviceIdle @ 0x1404CF51C (PopHaltDeviceIdle.c)
 *     PopBuildDeviceNotifyList @ 0x140B6AED8 (PopBuildDeviceNotifyList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 PoInitializeBroadcast()
{
  unsigned int v0; // edi
  _QWORD *Pool2; // rsi
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax

  v0 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x1D8uLL, 0x73734450u);
  if ( Pool2 )
  {
    v2 = Pool2 + 12;
    Pool2[2] = KeGetCurrentThread();
    v3 = 5LL;
    Pool2[1] = 0LL;
    Pool2[55] = Pool2 + 54;
    Pool2[54] = Pool2 + 54;
    do
    {
      *(v2 - 2) = v2 - 3;
      *(v2 - 3) = v2 - 3;
      *v2 = v2 - 1;
      *(v2 - 1) = v2 - 1;
      v2[2] = v2 + 1;
      v2[1] = v2 + 1;
      v4 = v2 + 3;
      v2[4] = v2 + 3;
      v2 += 9;
      *v4 = v4;
      --v3;
    }
    while ( v3 );
    PpmBeginHighPerfRequest();
    PopCurrentBroadcast = 0uLL;
    qword_140F0B910 = Pool2;
    PopBuildDeviceNotifyList(Pool2 + 6);
    PopHaltDeviceIdle();
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v0;
}
