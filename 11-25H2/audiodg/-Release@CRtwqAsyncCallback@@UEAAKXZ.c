/*
 * XREFs of ?Release@CRtwqAsyncCallback@@UEAAKXZ @ 0x14004AAD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRtwqAsyncCallback::Release(CRtwqAsyncCallback *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v1 )
    operator delete(this);
  return v1;
}
