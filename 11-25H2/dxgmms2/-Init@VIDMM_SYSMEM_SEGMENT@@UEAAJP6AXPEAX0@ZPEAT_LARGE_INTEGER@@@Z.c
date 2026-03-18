/*
 * XREFs of ?Init@VIDMM_SYSMEM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z @ 0x1400A2D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z @ 0x14010CD20 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::Init(
        VIDMM_SYSMEM_SEGMENT *this,
        void (*a2)(void *, void *),
        union _LARGE_INTEGER *a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  unsigned int v8; // esi

  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v6 + 24) = *((unsigned __int16 *)this + 20);
    *(_QWORD *)(v6 + 32) = this;
    WdLogGlobalForLineNumber = 130;
  }
  result = VIDMM_SEGMENT::Init(this, a2, a3);
  v8 = result;
  if ( (int)result >= 0 )
  {
    *((_QWORD *)this + 23) = 0LL;
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 151;
    WdLogSingleEntry4(4LL, *((_QWORD *)this + 9), *((int *)this + 13));
    result = v8;
    WdLogGlobalForLineNumber = 156;
  }
  return result;
}
