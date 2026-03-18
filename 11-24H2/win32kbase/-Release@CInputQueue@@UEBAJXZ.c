/*
 * XREFs of ?Release@CInputQueue@@UEBAJXZ @ 0x14011C560
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CInputQueue::Release(CInputQueue *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(CInputQueue *, __int64))(*(_QWORD *)this + 56LL))(this, 1LL);
  return v1;
}
