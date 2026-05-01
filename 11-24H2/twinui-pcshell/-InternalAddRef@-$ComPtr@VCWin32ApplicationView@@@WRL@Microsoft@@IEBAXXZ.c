/*
 * XREFs of ?InternalAddRef@?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18022B7C4
 * Callers:
 *     ?v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ @ 0x1801D0070 (-v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f58beaf1c957ff853694186b2dae5080__&___lambda_f58beaf1c957ff853694186b2dae5080__&_ @ 0x18030F5B4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f58beaf1c957f.c)
 *     _lambda_f58beaf1c957ff853694186b2dae5080_::_lambda_f58beaf1c957ff853694186b2dae5080_ @ 0x18030F8EC (_lambda_f58beaf1c957ff853694186b2dae5080_--_lambda_f58beaf1c957ff853694186b2dae5080_.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

void __fastcall Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalAddRef(__int64 *a1)
{
  __int64 v1; // rdx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(_QWORD *)(v1 + 208);
    while ( v2 >= 0 )
    {
      if ( (_DWORD)v2 != 0x7FFFFFFF )
      {
        v3 = v2;
        v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 208), v2 + 1, v2);
        if ( v3 != v2 )
          continue;
      }
      return;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v2 + 16), (volatile int *)v1);
  }
}
