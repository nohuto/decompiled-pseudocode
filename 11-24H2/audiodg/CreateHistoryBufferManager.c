/*
 * XREFs of CreateHistoryBufferManager @ 0x140066050
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAXXZ @ 0x14001281C (-UpdateRehashThresholds@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     ?reset@?$unique_ptr@VCAudioHistoryBufferManager@@U?$default_delete@VCAudioHistoryBufferManager@@@wistd@@@wistd@@QEAAXPEAVCAudioHistoryBufferManager@@@Z @ 0x1400666E0 (-reset@-$unique_ptr@VCAudioHistoryBufferManager@@U-$default_delete@VCAudioHistoryBufferManager@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateHistoryBufferManager(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  unsigned int v3; // ebx
  struct _RTL_CRITICAL_SECTION *v4; // rax
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v7 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x70uLL);
    InitializeCriticalSectionEx(v5, 0, 0);
    v5[1].DebugInfo = 0LL;
    *(_QWORD *)&v5[1].LockCount = 0LL;
    LODWORD(v5[1].OwningThread) = 17;
    v5[1].SpinCount = 0xFFFFFFFFLL;
    v5[2].DebugInfo = 0LL;
    v5[2].LockCount = 0;
    v5[2].RecursionCount = 10;
    v5[2].OwningThread = 0LL;
    v5[2].LockSemaphore = 0LL;
    HIDWORD(v5[1].OwningThread) = 1061158912;
    LODWORD(v5[1].LockSemaphore) = 1048576000;
    HIDWORD(v5[1].LockSemaphore) = 1074790400;
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::UpdateRehashThresholds((__int64)&v5[1]);
  }
  else
  {
    v5 = 0LL;
  }
  wistd::unique_ptr<CAudioHistoryBufferManager,wistd::default_delete<CAudioHistoryBufferManager>>::reset(
    &qword_1400C57F0,
    v5);
  LOBYTE(v3) = qword_1400C57F0 != 0LL;
  wistd::unique_ptr<CAudioHistoryBufferManager,wistd::default_delete<CAudioHistoryBufferManager>>::reset(&v7, 0LL);
  return v3;
}
