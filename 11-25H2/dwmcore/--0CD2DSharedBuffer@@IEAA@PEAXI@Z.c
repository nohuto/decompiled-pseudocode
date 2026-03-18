/*
 * XREFs of ??0CD2DSharedBuffer@@IEAA@PEAXI@Z @ 0x1802D2058
 * Callers:
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1802D2088 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180042D58 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

CD2DSharedBuffer *__fastcall CD2DSharedBuffer::CD2DSharedBuffer(CD2DSharedBuffer *this, void *a2)
{
  __int64 v2; // rcx
  CD2DSharedBuffer *result; // rax
  __int64 v4; // rdx
  int v5; // r8d

  CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>();
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)v2 = &CD2DSharedBuffer::`vftable';
  result = (CD2DSharedBuffer *)v2;
  *(_QWORD *)(v2 + 16) = v4;
  *(_DWORD *)(v2 + 24) = v5;
  return result;
}
