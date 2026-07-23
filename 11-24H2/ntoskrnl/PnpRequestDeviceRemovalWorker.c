/*
 * XREFs of PnpRequestDeviceRemovalWorker @ 0x1409BF7EC
 * Callers:
 *     PnpRequestDeviceRemoval @ 0x1409BF73C (PnpRequestDeviceRemoval.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1409BF7EC (PnpRequestDeviceRemovalWorker.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     PipIsDevNodeDNStarted @ 0x1404DD25C (PipIsDevNodeDNStarted.c)
 *     PiListEntryToDependencyEdge @ 0x1404F5EF8 (PiListEntryToDependencyEdge.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1409BF7EC (PnpRequestDeviceRemovalWorker.c)
 *     PipDeviceRemovalCheckDeviceNodeState @ 0x1409BF8FC (PipDeviceRemovalCheckDeviceNodeState.c)
 */

__int64 __fastcall PnpRequestDeviceRemovalWorker(int a1, __int64 a2, char a3, int a4, char a5)
{
  __int64 result; // rax
  int v10; // r8d
  _QWORD *i; // rdi
  __int64 v12; // rbx
  __int64 *v13; // rbx
  __int64 *v14; // rdi
  __int64 v15; // rax

  if ( a4 == 2 || a5 )
    result = PipDeviceRemovalCheckDeviceNodeState(a2);
  else
    result = PipIsDevNodeDNStarted(a2);
  if ( (_BYTE)result )
  {
    PipSetDevNodeState(a2, 785 - (a3 != 0));
    for ( i = *(_QWORD **)(a2 + 8); i; i = (_QWORD *)*i )
    {
      LOBYTE(v10) = 1;
      PnpRequestDeviceRemovalWorker(a1, (_DWORD)i, v10, a4, 1);
    }
    result = *(_QWORD *)(a2 + 32);
    if ( result && (result = *(_QWORD *)(result + 312), (v12 = *(_QWORD *)(result + 80)) != 0) )
      v13 = (__int64 *)(v12 + 32);
    else
      v13 = &PiDependencyNodeEmptyList;
    v14 = (__int64 *)*v13;
    while ( v14 != v13 )
    {
      v15 = PiListEntryToDependencyEdge((__int64)v14, 1);
      v14 = (__int64 *)*v14;
      result = *(_QWORD *)(*(_QWORD *)(v15 + 40) + 48LL);
      if ( result )
        result = PnpRequestDeviceRemovalWorker(a1, *(_QWORD *)(*(_QWORD *)(result + 312) + 40LL), 0, 1, 0);
    }
  }
  return result;
}
