/*
 * XREFs of Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____lambda_d01d769641b0a3ac426af1e1f82876ea__&_ @ 0x18005F540
 * Callers:
 *     ?RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ @ 0x18005F40C (-RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003BF30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonito.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___::SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___ @ 0x18068295C (SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___--SessionIdleCallback__lambda_d01.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____lambda_d01d769641b0a3ac426af1e1f82876ea____(
        volatile signed __int32 **a1,
        __int64 *a2)
{
  void *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdi
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = *a2;
    v8[0] = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v8[1] = a2[1];
    v6 = SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___::SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___(
           v4,
           v8);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveMonitorNotification>::Release(*a1);
    *a1 = (volatile signed __int32 *)v6;
  }
  return a1;
}
