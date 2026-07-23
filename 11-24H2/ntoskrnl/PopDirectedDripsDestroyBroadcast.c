/*
 * XREFs of PopDirectedDripsDestroyBroadcast @ 0x140A88168
 * Callers:
 *     PopDirectedDripsSuspendDevices @ 0x140A35914 (PopDirectedDripsSuspendDevices.c)
 *     PopDirectedDripsResumeDevices @ 0x140A35FB0 (PopDirectedDripsResumeDevices.c)
 * Callees:
 *     PoClearBroadcast @ 0x140A881F0 (PoClearBroadcast.c)
 */

__int64 PopDirectedDripsDestroyBroadcast()
{
  volatile signed __int32 *v0; // rdx
  volatile signed __int32 *i; // rax
  volatile signed __int32 *v2; // rax
  int v3; // eax

  v0 = (volatile signed __int32 *)IopRootDeviceNode;
  for ( i = (volatile signed __int32 *)*((_QWORD *)IopRootDeviceNode + 1);
        i;
        i = (volatile signed __int32 *)*((_QWORD *)i + 1) )
  {
    v0 = i;
  }
  while ( v0 != IopRootDeviceNode )
  {
    _InterlockedAnd(v0 + 74, 0xFFFFFEFF);
    *((_QWORD *)v0 + 92) = v0 + 182;
    *((_QWORD *)v0 + 91) = v0 + 182;
    *((_QWORD *)v0 + 94) = v0 + 186;
    *((_QWORD *)v0 + 93) = v0 + 186;
    v3 = *((_DWORD *)v0 + 190);
    *((_DWORD *)v0 + 191) = 0;
    *((_DWORD *)v0 + 190) = v3 & 0xFFF0FFFF;
    v2 = *(volatile signed __int32 **)v0;
    if ( *(_QWORD *)v0 )
    {
      do
      {
        v0 = v2;
        v2 = (volatile signed __int32 *)*((_QWORD *)v2 + 1);
      }
      while ( v2 );
    }
    else
    {
      v0 = (volatile signed __int32 *)*((_QWORD *)v0 + 2);
    }
  }
  return PoClearBroadcast();
}
