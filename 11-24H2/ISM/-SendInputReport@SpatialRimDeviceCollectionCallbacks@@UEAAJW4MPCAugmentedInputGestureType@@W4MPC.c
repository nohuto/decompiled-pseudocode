/*
 * XREFs of ?SendInputReport@SpatialRimDeviceCollectionCallbacks@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEBUHandStateMsg@Internal@Spatial@Input@UI@Windows@@UMatrix4x4@Numerics@Foundation@9@_J4444_N@Z @ 0x1800D8750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialRimDeviceCollectionCallbacks::SendInputReport(__int64 a1, unsigned int a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 144LL))(*(_QWORD *)(a1 + 16), a2);
}
