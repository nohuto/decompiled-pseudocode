/*
 * XREFs of ?RegisterRawInput@CShellSnapComponent@@AEAAXXZ @ 0x1805A0344
 * Callers:
 *     ?OnMessage@CShellSnapComponent@@UEAAJI_K_J@Z @ 0x18020B2A0 (-OnMessage@CShellSnapComponent@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Register@UIImmersiveRawInputProvider@@P81@EAAJPEAUIUnknown@@W4RAW_INPUT_TYPE@@PEAK@ZP81@EAAJK@ZPEAU2@W43@@SmartCookie@@QEAAJPEAUIImmersiveRawInputProvider@@P81@EAAJPEAUIUnknown@@W4RAW_INPUT_TYPE@@PEAK@ZP81@EAAJK@Z12@Z @ 0x18059AB3C (--$Register@UIImmersiveRawInputProvider@@P81@EAAJPEAUIUnknown@@W4RAW_INPUT_TYPE@@PEAK@ZP81@EAAJK.c)
 *     ?RegisterRawInput@CSnapComponentTelemetry@@SAXXZ @ 0x1805A03FC (-RegisterRawInput@CSnapComponentTelemetry@@SAXXZ.c)
 *     ?UnregisterRawInput@CShellSnapComponent@@AEAAXXZ @ 0x1805A27E4 (-UnregisterRawInput@CShellSnapComponent@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CShellSnapComponent::RegisterRawInput(CShellSnapComponent *this)
{
  __int64 v2; // r8
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_DWORD *)this + 264) )
  {
    CSnapComponentTelemetry::RegisterRawInput();
    v3 = SmartCookie::Register<IImmersiveRawInputProvider,long (IImmersiveRawInputProvider::*)(IUnknown *,enum RAW_INPUT_TYPE,unsigned long *),long (IImmersiveRawInputProvider::*)(unsigned long),IUnknown *,enum RAW_INPUT_TYPE>(
           (__int64)this + 936,
           *((_QWORD *)this + 133),
           v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x85B,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v3);
    if ( GetAsyncKeyState(91) >= 0 && GetAsyncKeyState(92) >= 0 )
    {
      CShellSnapComponent::UnregisterRawInput(this);
      (*(void (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this + 18) + 32LL))((char *)this + 144, 2LL, 8LL);
    }
  }
}
