/*
 * XREFs of SecureDmaEnabler_FreeCommonBufferPage @ 0x14003C8A8
 * Callers:
 *     CommonBuffer_ReleaseBuffer @ 0x1400034F4 (CommonBuffer_ReleaseBuffer.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x140020234 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     XilCoreCommonBuffer_ReleaseBufferInternal @ 0x14003075C (XilCoreCommonBuffer_ReleaseBufferInternal.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x140034C3C (XilCoreCommonBuffer_FreeUnusedResources.c)
 *     XilCoreCommonBuffer_AllocateBuffer @ 0x140056E34 (XilCoreCommonBuffer_AllocateBuffer.c)
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x140019630 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x14001C700 (Controller_RaiseAndTrackIrql.c)
 *     Feature_UMPERS__private_IsEnabledDeviceUsageNoInline @ 0x14003F574 (Feature_UMPERS__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

char __fastcall SecureDmaEnabler_FreeCommonBufferPage(__int64 a1, __int64 a2)
{
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _MDL *v8; // rcx
  char result; // al

  v4 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 8));
    v4 = 1;
  }
  if ( (unsigned int)Feature_UMPERS__private_IsEnabledDeviceUsageNoInline(v6, v5, v7) )
  {
    v8 = *(struct _MDL **)(a2 + 88);
    if ( v8 )
      IoFreeMdl(v8);
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1664))(
             WdfDriverGlobals,
             *(_QWORD *)(a2 + 16));
  if ( v4 )
    return Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  return result;
}
