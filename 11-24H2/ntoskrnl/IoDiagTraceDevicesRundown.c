/*
 * XREFs of IoDiagTraceDevicesRundown @ 0x140A44A50
 * Callers:
 *     PopDiagDeviceRundownWorker @ 0x140A44A30 (PopDiagDeviceRundownWorker.c)
 * Callees:
 *     IoControlPnpDeviceActionQueue @ 0x140498E44 (IoControlPnpDeviceActionQueue.c)
 *     PoDiagTraceDeviceRundown @ 0x140A44AC8 (PoDiagTraceDeviceRundown.c)
 */

__int64 IoDiagTraceDevicesRundown()
{
  _QWORD *v0; // rbx
  _QWORD *i; // rax
  _QWORD *v2; // rax

  IoControlPnpDeviceActionQueue(1);
  v0 = IopRootDeviceNode;
  for ( i = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); i; i = (_QWORD *)i[1] )
    v0 = i;
  while ( v0 != IopRootDeviceNode )
  {
    PoDiagTraceDeviceRundown(v0, v0 + 5, v0 + 7, *((unsigned int *)v0 + 39));
    v2 = (_QWORD *)*v0;
    if ( *v0 )
    {
      do
      {
        v0 = v2;
        v2 = (_QWORD *)v2[1];
      }
      while ( v2 );
    }
    else
    {
      v0 = (_QWORD *)v0[2];
    }
  }
  return IoControlPnpDeviceActionQueue(0);
}
