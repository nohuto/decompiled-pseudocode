/*
 * XREFs of _dynamic_atexit_destructor_for__g_AudioHistoryManager___0 @ 0x1400974F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioHistoryBufferManager@@QEAA@XZ @ 0x140065E00 (--1CAudioHistoryBufferManager@@QEAA@XZ.c)
 */

void dynamic_atexit_destructor_for__g_AudioHistoryManager___0()
{
  struct _RTL_CRITICAL_SECTION *v0; // rbx

  v0 = (struct _RTL_CRITICAL_SECTION *)qword_1400C57F0;
  qword_1400C57F0 = 0LL;
  if ( v0 )
  {
    CAudioHistoryBufferManager::~CAudioHistoryBufferManager(v0);
    operator delete(v0);
  }
}
