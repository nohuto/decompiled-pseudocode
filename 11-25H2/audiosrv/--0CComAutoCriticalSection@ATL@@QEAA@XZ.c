/*
 * XREFs of ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x1800E60F0
 * Callers:
 *     ??0CConstraintModelResourceManager@@AEAA@XZ @ 0x1800E612C (--0CConstraintModelResourceManager@@AEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18009FAB0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

ATL::CComAutoCriticalSection *__fastcall ATL::CComAutoCriticalSection::CComAutoCriticalSection(
        ATL::CComAutoCriticalSection *this)
{
  int v2; // eax

  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v2 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)this);
  if ( v2 < 0 )
    ATL::AtlThrowImpl(v2);
  return this;
}
