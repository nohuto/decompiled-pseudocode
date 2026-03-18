/*
 * XREFs of ??1ScopeGuard@@QEAA@XZ @ 0x140155AC4
 * Callers:
 *     InitCreateSharedSection @ 0x1402E4F6C (InitCreateSharedSection.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall ScopeGuard::~ScopeGuard(void (**this)(void))
{
  if ( *this )
    (*this)();
}
