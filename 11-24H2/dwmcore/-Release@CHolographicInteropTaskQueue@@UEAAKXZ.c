/*
 * XREFs of ?Release@CHolographicInteropTaskQueue@@UEAAKXZ @ 0x1801F8CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHolographicInteropTaskQueue::Release(CHolographicInteropTaskQueue *this)
{
  return CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(this);
}
