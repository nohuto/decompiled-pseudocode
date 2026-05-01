/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180102060
 * Callers:
 *     ?v_RefreshEnterpriseIdIfNeeded@CWinRTApplicationView@@EEAAJXZ @ 0x180074670 (-v_RefreshEnterpriseIdIfNeeded@CWinRTApplicationView@@EEAAJXZ.c)
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x180101B60 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___::_CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___ @ 0x18010200C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___--_CTask.c)
 *     ??1?$ComPtr@VCWinRTApplicationView@@@WRL@Microsoft@@QEAA@XZ @ 0x18010203C (--1-$ComPtr@VCWinRTApplicationView@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180311C80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180311C80.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180311C90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180311C90.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180311CA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180311CA0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@WJA@EAAKXZ @ 0x180311CB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180311CB0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@WJI@EAAKXZ @ 0x180311CD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180311CD0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@WKA@EAAKXZ @ 0x180311CF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180311CF0.c)
 * Callees:
 *     ?DecrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18006074C (-DecrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v4; // ebx
  signed __int64 v5; // rtt

  v1 = *(_QWORD *)(a1 + 200);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646LL;
    v4 = v1 - 1;
    v5 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 200), v1 - 1, v1);
    if ( v5 == v1 )
      goto LABEL_6;
  }
  v4 = Microsoft::WRL::Details::StrongReference::DecrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v1 + 16));
LABEL_6:
  if ( !v4 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 528LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v4;
}
