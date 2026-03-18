/*
 * XREFs of ?ReleaseExclusive@CTreeLock@@QEAAXXZ @ 0x1800ED598
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

void __fastcall CTreeLock::ReleaseExclusive(CTreeLock *this)
{
  _DWORD *Value; // rbx
  CThreadContext *v2; // rax
  CThreadContext *v3; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_DWORD *)this + 2) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v2 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v2 || (v3 = CThreadContext::CThreadContext(v2), (Value = v3) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9E,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
        (const char *)0x8007000ELL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v3);
  }
  --Value[10];
}
