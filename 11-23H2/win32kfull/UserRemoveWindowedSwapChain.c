/*
 * XREFs of UserRemoveWindowedSwapChain @ 0x1C021BA50
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C0023244 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     RemoveVisRgnTracker @ 0x1C0026AAC (RemoveVisRgnTracker.c)
 *     InternalRemoveProp @ 0x1C0026C40 (InternalRemoveProp.c)
 *     IsWindowBeingDestroyed @ 0x1C00AD46C (IsWindowBeingDestroyed.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C021B85C (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C021B97C (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 */

__int64 __fastcall UserRemoveWindowedSwapChain(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagWND *v10; // rbx
  CSwapChainProp *v11; // rax
  CSwapChainProp *v12; // rsi
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  EnterCrit(1LL, 0LL);
  v5 = ValidateHwnd(a1);
  v10 = (struct tagWND *)v5;
  if ( v5 )
  {
    v7 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFF;
    if ( (_DWORD)v7 != 669 )
    {
      v14 = 0LL;
      if ( a2 )
      {
        if ( CWindowProp::GetProp<CSwapChainProp>(v5, &v14) )
          *(_DWORD *)(v14 + 32) = 1;
      }
      else
      {
        v11 = (CSwapChainProp *)InternalRemoveProp(v5, WORD2(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1u);
        v12 = v11;
        if ( v11 )
        {
          *((_QWORD *)v11 + 2) = 0LL;
          CSwapChainProp::ClearCompositionSurfaceObj(v11);
          if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v10) )
            CSwapChainProp::NotifyDwm(v12, v10);
          (**(void (__fastcall ***)(CSwapChainProp *))v12)(v12);
          RemoveVisRgnTracker((__int64)v10, 2u);
        }
      }
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v4;
}
