/*
 * XREFs of ?QuerySystemMemorySize@VIDMM_GLOBAL@@SA_KPEAX@Z @ 0x1400905D8
 * Callers:
 *     ?ReadConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x140109990 (-ReadConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int64 __fastcall VIDMM_GLOBAL::QuerySystemMemorySize(void *a1)
{
  __int64 v1; // rbx
  _QWORD *PhysicalMemoryRanges; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  unsigned int v5; // r8d

  v1 = 0LL;
  PhysicalMemoryRanges = (_QWORD *)MmGetPhysicalMemoryRangesEx(0LL);
  if ( PhysicalMemoryRanges )
  {
    v4 = PhysicalMemoryRanges[1];
    v5 = 0;
    while ( v4 )
    {
      ++v5;
      v1 += v4;
      v4 = PhysicalMemoryRanges[2 * v5 + 1];
    }
    ExFreePoolWithTag(PhysicalMemoryRanges, 0);
  }
  else
  {
    _InterlockedIncrement(&dword_14008179C);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 48;
    DxgkLogInternalTriageEvent(v3, 262145LL);
    return 0x20000000LL;
  }
  return v1;
}
