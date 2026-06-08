/*
 * XREFs of sub_1400285E0 @ 0x1400285E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004599C @ 0x14004599C (sub_14004599C.c)
 *     sub_140047274 @ 0x140047274 (sub_140047274.c)
 */

void __fastcall sub_1400285E0(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  __int64 v2; // rdi
  char v4; // bl

  v2 = Context[31];
  do
  {
    v4 = _InterlockedExchange((volatile __int32 *)(v2 + 1328), 4);
    if ( (v4 & 1) != 0 )
      sub_140047274(DeviceObject, 0LL, "Native Interrupt");
    if ( (v4 & 2) != 0 )
      sub_14004599C(DeviceObject, 0LL, "Native Interrupt");
  }
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 1328), 0, 4) != 4 );
}
