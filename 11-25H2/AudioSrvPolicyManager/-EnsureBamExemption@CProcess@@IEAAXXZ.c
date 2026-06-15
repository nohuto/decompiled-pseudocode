/*
 * XREFs of ?EnsureBamExemption@CProcess@@IEAAXXZ @ 0x18001CD88
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180002360 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800174C0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?CancelDeferredBamExemptionRelease@CProcess@@IEAAXXZ @ 0x18001983C (-CancelDeferredBamExemptionRelease@CProcess@@IEAAXXZ.c)
 */

void __fastcall CProcess::EnsureBamExemption(CProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  void **v3; // rsi
  __int64 v4; // rbx

  CProcess::CancelDeferredBamExemptionRelease(this);
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 536);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 536));
  v3 = (void **)((char *)this + 576);
  if ( ((*((_QWORD *)this + 72) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v4 = *((_QWORD *)this + 19);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v3,
      0LL);
    NtAcquireProcessActivityReference(v3, v4, 0LL);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
