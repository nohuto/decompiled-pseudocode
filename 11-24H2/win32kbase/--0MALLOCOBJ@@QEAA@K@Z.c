/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x14015B81C
 * Callers:
 *     ?CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ @ 0x14014D984 (-CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ.c)
 *     EtwTraceTrappedAppContainerRender @ 0x1401CD9B0 (EtwTraceTrappedAppContainerRender.c)
 * Callees:
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 */

MALLOCOBJ *__fastcall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this, unsigned int a2)
{
  __int64 v3; // rax

  *(_QWORD *)this = 0LL;
  v3 = PALLOCMEM(a2, 0x706D7447u);
  *(_QWORD *)this = v3;
  if ( !v3 )
    EngSetLastError(8u);
  return this;
}
