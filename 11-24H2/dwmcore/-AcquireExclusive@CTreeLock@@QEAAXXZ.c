/*
 * XREFs of ?AcquireExclusive@CTreeLock@@QEAAXXZ @ 0x1800ED658
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1800ED3DC (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?ProcessDeviceLost@CDeviceManager@@IEAAXXZ @ 0x1800F3500 (-ProcessDeviceLost@CDeviceManager@@IEAAXXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 */

void __fastcall CTreeLock::AcquireExclusive(RTL_SRWLOCK *this)
{
  DWORD CurrentThreadId; // eax
  DWORD v3; // ecx
  _DWORD *Value; // rbx
  CThreadContext *v5; // rax
  CThreadContext *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  AcquireSRWLockExclusive(this);
  CurrentThreadId = GetCurrentThreadId();
  v3 = CThreadContext::s_dwTlsIndex;
  LODWORD(this[1].Ptr) = CurrentThreadId;
  Value = TlsGetValue(v3);
  if ( !Value )
  {
    v5 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v5 || (v6 = CThreadContext::CThreadContext(v5), (Value = v6) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x94,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
        (const char *)0x8007000ELL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v6);
  }
  ++Value[10];
}
