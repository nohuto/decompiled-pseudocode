/*
 * XREFs of ?reset@?$unique_ptr@VCAudioHistoryBufferManager@@U?$default_delete@VCAudioHistoryBufferManager@@@wistd@@@wistd@@QEAAXPEAVCAudioHistoryBufferManager@@@Z @ 0x140066750
 * Callers:
 *     CreateHistoryBufferManager @ 0x1400660C0 (CreateHistoryBufferManager.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioHistoryBufferManager@@QEAA@XZ @ 0x140065E70 (--1CAudioHistoryBufferManager@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<CAudioHistoryBufferManager,wistd::default_delete<CAudioHistoryBufferManager>>::reset(
        struct _RTL_CRITICAL_SECTION **a1,
        struct _RTL_CRITICAL_SECTION *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    CAudioHistoryBufferManager::~CAudioHistoryBufferManager(v2);
    operator delete(v2);
  }
}
