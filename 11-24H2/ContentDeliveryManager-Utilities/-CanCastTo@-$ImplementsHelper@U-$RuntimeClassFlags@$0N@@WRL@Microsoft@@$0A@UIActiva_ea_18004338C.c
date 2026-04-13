/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentTriggerManagerStaticsInternal@Internal@TargetedContent@Services@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18004338C
 * Callers:
 *     ??$CreateActivationFactory@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180041410 (--$CreateActivationFactory@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Servic.c)
 *     ?QueryInterface@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044860 (-QueryInterface@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D914 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     InlineIsEqualGUID @ 0x180033DB8 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        struct _GUID *a2)
{
  void **v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx
  __int64 v7; // rsi
  unsigned int CanCastTo; // eax
  _QWORD *v9; // r8
  unsigned int v10; // r9d

  v5 = 0;
  if ( InlineIsEqualGUID(a2, &GUID_00000035_0000_0000_c000_000000000046) )
  {
    *v3 = (void *)v4;
    return 0LL;
  }
  else
  {
    v7 = v4 + 8;
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v4 + 8), a2, v3);
    if ( CanCastTo == -2147467262 )
    {
      if ( InlineIsEqualGUID(a2, &GUID_caf66f56_2471_4426_b393_77a1640adf78) )
        *v9 = v7 + 32;
      else
        return v10;
    }
    else
    {
      return CanCastTo;
    }
    return v5;
  }
}
