/*
 * XREFs of ?Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z @ 0x14010A7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ @ 0x14010A8C4 (-InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ.c)
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z @ 0x14010AA20 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::Init(
        VIDMM_APERTURE_SEGMENT *this,
        void (*a2)(void *, void *),
        union _LARGE_INTEGER *a3)
{
  __int64 result; // rax
  unsigned int v7; // edi
  __int64 v8; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v8 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v8 + 24) = *((unsigned __int16 *)this + 20);
    *(_QWORD *)(v8 + 32) = this;
    WdLogGlobalForLineNumber = 142;
  }
  if ( (*((_DWORD *)this + 26) & 0x2000) != 0 )
  {
    WdLogSingleEntry0(3LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 146;
  }
  else
  {
    result = VIDMM_SEGMENT::Init(this, a2, a3);
    if ( (int)result >= 0 )
    {
      *((_QWORD *)this + 23) = 0LL;
      result = VIDMM_APERTURE_SEGMENT::InitializeGuardPages(this);
      v7 = result;
      if ( (int)result >= 0 )
      {
        WdLogSingleEntry0(4LL);
        WdLogGlobalForLineNumber = 179;
        WdLogSingleEntry4(4LL, *((_QWORD *)this + 9), *((int *)this + 13));
        result = v7;
        WdLogGlobalForLineNumber = 184;
      }
    }
  }
  return result;
}
