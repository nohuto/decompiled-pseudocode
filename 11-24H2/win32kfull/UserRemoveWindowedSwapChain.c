/*
 * XREFs of UserRemoveWindowedSwapChain @ 0x140169910
 * Callers:
 *     <none>
 * Callees:
 *     RemoveVisRgnTracker @ 0x1400308C8 (RemoveVisRgnTracker.c)
 *     InternalRemoveProp @ 0x140031360 (InternalRemoveProp.c)
 *     IsWindowBeingDestroyed @ 0x1400911AC (IsWindowBeingDestroyed.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x140169A24 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x140169A74 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1402BEF70 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UserRemoveWindowedSwapChain(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagWND *v8; // rbx
  __int64 UserSessionState; // rax
  CSwapChainProp *v11; // rax
  CSwapChainProp *v12; // rsi
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  EnterCrit(1LL, 0LL);
  v5 = ValidateHwnd(a1);
  v8 = (struct tagWND *)v5;
  if ( v5 )
  {
    v7 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFF;
    if ( (_DWORD)v7 != 669 )
    {
      v13 = 0LL;
      if ( a2 )
      {
        if ( (unsigned int)CWindowProp::GetProp<CSwapChainProp>(v5, &v13) )
          *(_DWORD *)(v13 + 32) = 1;
      }
      else
      {
        UserSessionState = W32GetUserSessionState(v7, v6);
        v11 = (CSwapChainProp *)InternalRemoveProp((__int64)v8, *(unsigned __int16 *)(UserSessionState + 42322), 1u);
        v12 = v11;
        if ( v11 )
        {
          *((_QWORD *)v11 + 2) = 0LL;
          CSwapChainProp::ClearCompositionSurfaceObj(v11);
          if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v8) )
            CSwapChainProp::NotifyDwm(v12, v8);
          (**(void (__fastcall ***)(CSwapChainProp *))v12)(v12);
          RemoveVisRgnTracker((__int64)v8, 2u);
        }
      }
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
