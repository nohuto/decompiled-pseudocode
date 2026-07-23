/*
 * XREFs of PopDirectedDripsInitializeBroadcast @ 0x140A35AD4
 * Callers:
 *     PopDirectedDripsSuspendDevices @ 0x140A35914 (PopDirectedDripsSuspendDevices.c)
 * Callees:
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x140488370 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     IoControlPnpDeviceActionQueue @ 0x140493724 (IoControlPnpDeviceActionQueue.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1404C2478 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopDirectedDripsDiagTraceTransition @ 0x14076407C (PopDirectedDripsDiagTraceTransition.c)
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x140764740 (PopDirectedDripsBuildBroadcastTreePartial.c)
 *     PopPowerAggregatorHandleIntent @ 0x1409A26D0 (PopPowerAggregatorHandleIntent.c)
 *     PopDirectedDripsInitializeDeviceTree @ 0x140A35D00 (PopDirectedDripsInitializeDeviceTree.c)
 *     PoInitializeBroadcast @ 0x140A36214 (PoInitializeBroadcast.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopDirectedDripsInitializeBroadcast(volatile signed __int32 *a1)
{
  char v2; // bp
  ULONG HandleAttributes; // eax
  ULONG v4; // ett
  int v5; // r8d
  int v6; // r15d
  int v7; // r12d
  unsigned int v8; // r12d
  _OWORD *v9; // rdi
  int v10; // r14d
  char v11; // al
  volatile signed __int32 *v12; // rcx
  volatile signed __int32 *i; // rax
  volatile signed __int32 *v14; // rax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _OWORD v24[3]; // [rsp+20h] [rbp-38h] BYREF
  int v25; // [rsp+60h] [rbp+8h] BYREF

  v24[0] = 0LL;
  _InterlockedOr(a1, 0);
  v2 = 0;
  _m_prefetchw(&PopDirectedDripsState);
  HandleAttributes = PopDirectedDripsState.HandleAttributes;
  do
  {
    v4 = HandleAttributes;
    HandleAttributes = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&PopDirectedDripsState,
                         HandleAttributes,
                         HandleAttributes);
  }
  while ( v4 != HandleAttributes );
  v5 = dword_140F0DFF0 & 1;
  if ( (dword_140F0DFF0 & 2) != 0 )
    v5 |= 2u;
  v6 = (HandleAttributes >> 10) & 1 | 2;
  if ( (HandleAttributes & 0x800) == 0 )
    v6 = (HandleAttributes >> 10) & 1;
  v7 = (HandleAttributes >> 12) & 1 | 2;
  if ( (HandleAttributes & 0x2000) == 0 )
    v7 = (HandleAttributes >> 12) & 1;
  v8 = v6 | v5 & v7;
  if ( v8 )
  {
    IoControlPnpDeviceActionQueue(1);
    PopDirectedDripsInitializeDeviceTree();
    PopFxBuildDirectedDripsCandidateDeviceList(v24);
    v9 = *(_OWORD **)&v24[0];
    v10 = 0;
    v25 = 0;
    while ( v9 != v24 )
    {
      v19 = PopDirectedDripsBuildBroadcastTreePartial(*((_QWORD *)v9 - 108), v8, &v25);
      v15 = v19;
      if ( v19 < 0 )
      {
        if ( v19 != -1073741637 )
          goto LABEL_28;
      }
      else
      {
        ++v10;
      }
      v9 = *(_OWORD **)v9;
    }
    if ( v10 && (v11 = v25, v25) )
    {
      if ( (v25 & 1) != 0 && (v6 & 1) == 0 )
      {
        _InterlockedOr(a1, 0x400u);
        v11 = v25;
      }
      if ( (v11 & 2) == 0 || (v6 & 2) != 0 )
      {
        v12 = (volatile signed __int32 *)IopRootDeviceNode;
        for ( i = (volatile signed __int32 *)*((_QWORD *)IopRootDeviceNode + 1);
              i;
              i = (volatile signed __int32 *)*((_QWORD *)i + 1) )
        {
          v12 = i;
        }
        while ( v12 != IopRootDeviceNode )
        {
          if ( (v12[190] & 0x30000) != 0 )
          {
            PopDirectedDripsDiagTraceTransition((__int64)v12);
            _InterlockedOr(v12 + 74, 0x100u);
          }
          v14 = *(volatile signed __int32 **)v12;
          if ( *(_QWORD *)v12 )
          {
            do
            {
              v12 = v14;
              v14 = (volatile signed __int32 *)*((_QWORD *)v14 + 1);
            }
            while ( v14 );
          }
          else
          {
            v12 = (volatile signed __int32 *)*((_QWORD *)v12 + 2);
          }
        }
        v15 = PoInitializeBroadcast(1LL);
      }
      else
      {
        v2 = 1;
        v15 = -1073741267;
      }
    }
    else
    {
      v15 = -1073741823;
    }
LABEL_28:
    PopFxDestroyDirectedDripsCandidateDeviceList((_QWORD **)v24);
    if ( v15 < 0 )
      IoControlPnpDeviceActionQueue(0);
    if ( v2 )
    {
      PopAcquirePolicyLock(v17, v16);
      PopPowerAggregatorHandleIntent(4u, 0LL, 0, 0x2Au);
      PopReleasePolicyLock(v21, v20, v22, v23, *(_QWORD *)&v24[0]);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v15;
}
