/*
 * XREFs of SecureDmaEnabler_FreeCommonBufferPage @ 0x14003C838
 * Callers:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x140017334 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     CommonBuffer_ReleaseBuffer @ 0x14001F6A4 (CommonBuffer_ReleaseBuffer.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x14002991C (XilCoreCommonBuffer_FreeUnusedResources.c)
 *     XilCoreCommonBuffer_ReleaseBufferInternal @ 0x14002F794 (XilCoreCommonBuffer_ReleaseBufferInternal.c)
 *     XilCoreCommonBuffer_AllocateBuffer @ 0x140056294 (XilCoreCommonBuffer_AllocateBuffer.c)
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x14000DA20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000DC30 (Controller_LowerAndTrackIrql.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

char __fastcall SecureDmaEnabler_FreeCommonBufferPage(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  char v4; // si
  struct _MDL *v5; // rcx
  char result; // al

  v3 = (__int64 *)(a1 + 8);
  v4 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    Controller_LowerAndTrackIrql((_QWORD *)*v3);
    v4 = 1;
  }
  v5 = *(struct _MDL **)(a2 + 88);
  if ( v5 )
    IoFreeMdl(v5);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1664))(
             WdfDriverGlobals,
             *(_QWORD *)(a2 + 16));
  if ( v4 )
    return Controller_RaiseAndTrackIrql(*v3);
  return result;
}
