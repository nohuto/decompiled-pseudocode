/*
 * XREFs of ?ReleaseExclusive@CTreeLock@@QEAAXXZ @ 0x1801BCFD8
 * Callers:
 *     ?ProcessDeviceLost@CDeviceManager@@IEAAXXZ @ 0x1800319C0 (-ProcessDeviceLost@CDeviceManager@@IEAAXXZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1801BCE1C (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
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
