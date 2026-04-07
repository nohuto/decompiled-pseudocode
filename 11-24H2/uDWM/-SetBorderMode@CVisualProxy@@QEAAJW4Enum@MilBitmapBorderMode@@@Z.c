/*
 * XREFs of ?SetBorderMode@CVisualProxy@@QEAAJW4Enum@MilBitmapBorderMode@@@Z @ 0x18007F2D4
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180028E60 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetBorderMode(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(*(_QWORD *)(a1 + 24));
}
