/*
 * XREFs of ??1CCheckLLHookTime@@QEAA@XZ @ 0x1401A52D0
 * Callers:
 *     xxxHkCallHook @ 0x140080630 (xxxHkCallHook.c)
 * Callees:
 *     ?TraceLoggingSlowLowLevelHook@@YAXI_K0@Z @ 0x140218DC8 (-TraceLoggingSlowLowLevelHook@@YAXI_K0@Z.c)
 */

void __fastcall CCheckLLHookTime::~CCheckLLHookTime(CCheckLLHookTime *this)
{
  unsigned __int64 v1; // rdx

  v1 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
     - *(_QWORD *)this;
  if ( v1 > 0x14 )
    TraceLoggingSlowLowLevelHook(*((_DWORD *)this + 2), v1, *((_QWORD *)this + 2));
}
