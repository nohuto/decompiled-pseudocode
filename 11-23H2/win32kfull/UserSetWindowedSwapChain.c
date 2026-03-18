/*
 * XREFs of UserSetWindowedSwapChain @ 0x1C021BB58
 * Callers:
 *     UserSetWindowedSwapChainApiExt @ 0x1C01569A0 (UserSetWindowedSwapChainApiExt.c)
 * Callees:
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C0023244 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     CreateVisRgnTracker @ 0x1C00ABD58 (CreateVisRgnTracker.c)
 *     IsWindowBeingDestroyed @ 0x1C00AD46C (IsWindowBeingDestroyed.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00EDB04 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C021B85C (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     ?CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z @ 0x1C021B8A0 (-CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C021B97C (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 */

__int64 __fastcall UserSetWindowedSwapChain(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagWND *v12; // rsi
  int v13; // eax
  __int64 v14; // r9
  int v15; // r15d
  CSwapChainProp *v16; // rbx
  void *v17; // rbp
  void *v19; // [rsp+30h] [rbp-38h] BYREF
  CSwapChainProp *v20; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v6 = 0;
  EnterCrit(1LL, 0LL);
  v7 = ValidateHwnd(a1);
  v12 = (struct tagWND *)v7;
  if ( !v7 )
    goto LABEL_20;
  v9 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFFu) - 669;
  if ( (v9 & 0xFFFFFFFD) == 0 )
    goto LABEL_20;
  if ( (unsigned int)IsWindowBeingDestroyed(v7) )
    goto LABEL_20;
  v13 = IsWindowDesktopComposed(v9);
  LOBYTE(v14) = 1;
  v15 = v13;
  if ( (int)DxgkReferenceCompositionObject(a3, 1LL, 1LL, v14, &v19) < 0 )
    goto LABEL_20;
  CWindowProp::GetProp<CSwapChainProp>((__int64)v12, (__int64 *)&v20);
  v16 = v20;
  if ( !v20 )
  {
    if ( !(unsigned int)CSwapChainProp::CreateSwapChainProp(v19, &v20) )
      goto LABEL_20;
    v16 = v20;
    v6 = CWindowProp::SetProp(v20, (__int64)v12);
    if ( !v6 )
    {
LABEL_10:
      (**(void (__fastcall ***)(CSwapChainProp *))v16)(v16);
      goto LABEL_20;
    }
    if ( (int)CreateVisRgnTracker(v12, 2) < 0 )
    {
      v6 = 0;
      goto LABEL_10;
    }
    goto LABEL_18;
  }
  v17 = v19;
  if ( *((void **)v20 + 3) == v19 )
  {
    *((_DWORD *)v20 + 8) = 0;
    v6 = 1;
    DxgkReleaseCompositionObjectReference(v19);
    goto LABEL_20;
  }
  if ( a2 || *((_DWORD *)v20 + 8) )
  {
    CSwapChainProp::ClearCompositionSurfaceObj(v20);
    if ( *((_QWORD *)v16 + 3) )
    {
      LODWORD(v20) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 84);
    }
    *((_QWORD *)v16 + 3) = v17;
    *((_DWORD *)v16 + 8) = 0;
LABEL_18:
    v6 = 1;
    if ( v15 )
      v6 = CSwapChainProp::NotifyDwm(v16, v12);
  }
LABEL_20:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v6;
}
