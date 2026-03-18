/*
 * XREFs of ??_EVIDMM_PROCESS_COMMITMENT_INFO@@QEAAPEAXI@Z @ 0x140037F78
 * Callers:
 *     ??1VIDMM_PROCESS_PHYSICAL_ADAPTER_INFO@@QEAA@XZ @ 0x140037F50 (--1VIDMM_PROCESS_PHYSICAL_ADAPTER_INFO@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ?ZeroIfNeeded@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x140037F40 (-ZeroIfNeeded@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z.c)
 */

char *__fastcall VIDMM_PROCESS_COMMITMENT_INFO::`vector deleting destructor'(
        VIDMM_PROCESS_COMMITMENT_INFO *this,
        struct VIDMM_HEAP_ALLOC *a2)
{
  char *v2; // rsi
  __int64 v3; // rbx
  VIDMM_PROCESS_HEAP *i; // rdi

  v2 = (char *)this - 8;
  v3 = *((_QWORD *)this - 1);
  for ( i = (VIDMM_PROCESS_COMMITMENT_INFO *)((char *)this + 184 * v3); v3; --v3 )
  {
    i = (VIDMM_PROCESS_HEAP *)((char *)i - 184);
    VIDMM_PROCESS_HEAP::ZeroIfNeeded(i, a2);
  }
  operator delete(v2);
  return v2;
}
