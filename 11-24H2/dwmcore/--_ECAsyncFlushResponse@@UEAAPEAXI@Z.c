/*
 * XREFs of ??_ECAsyncFlushResponse@@UEAAPEAXI@Z @ 0x1801E5D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180110290 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CAsyncFlushResponse *__fastcall CAsyncFlushResponse::`vector deleting destructor'(CAsyncFlushResponse *this, char a2)
{
  CDrawListCache *v4; // rcx

  *(_QWORD *)this = &CAsyncFlushResponse::`vftable';
  v4 = (CDrawListCache *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v4);
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x38uLL);
  return this;
}
