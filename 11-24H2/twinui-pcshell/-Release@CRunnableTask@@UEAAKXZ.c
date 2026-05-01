/*
 * XREFs of ?Release@CRunnableTask@@UEAAKXZ @ 0x180602000
 * Callers:
 *     ?Release@CRunnableTask@@W7EAAKXZ @ 0x180602040 (-Release@CRunnableTask@@W7EAAKXZ.c)
 *     ?Release@CRunnableTask@@WBA@EAAKXZ @ 0x180602050 (-Release@CRunnableTask@@WBA@EAAKXZ.c)
 *     ?Release@CRunnableTask@@WBI@EAAKXZ @ 0x180602060 (-Release@CRunnableTask@@WBI@EAAKXZ.c)
 *     ?Release@CRunnableTask@@WCA@EAAKXZ @ 0x180602070 (-Release@CRunnableTask@@WCA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRunnableTask::Release(CRunnableTask *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v1 && this )
    (*(void (__fastcall **)(CRunnableTask *, __int64))(*(_QWORD *)this + 128LL))(this, 1LL);
  return v1;
}
