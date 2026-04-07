/*
 * XREFs of ?SetInterpolationMode@CVisualProxy@@QEAAJW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180078F10
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180028E60 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x18008FA04 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetInterpolationMode(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 88LL))(*(_QWORD *)(a1 + 24));
}
