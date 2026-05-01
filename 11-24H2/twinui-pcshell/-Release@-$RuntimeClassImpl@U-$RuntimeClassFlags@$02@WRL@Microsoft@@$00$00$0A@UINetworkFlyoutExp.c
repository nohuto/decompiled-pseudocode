/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180060000
 * Callers:
 *     ??$MakeAndInitialize@VCNetworkExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180169810 (--$MakeAndInitialize@VCNetworkExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Detail.c)
 *     ?Release@CNetworkExperienceManager@@UEAAKXZ @ 0x1802C3F70 (-Release@CNetworkExperienceManager@@UEAAKXZ.c)
 *     ??1?$ComPtr@VCNetworkExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802CC0B0 (--1-$ComPtr@VCNetworkExperienceManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1803C4EB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UINet_ea_1803C4EB0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1803C4EC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UINet_ea_1803C4EC0.c)
 * Callees:
 *     ?DecrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18006074C (-DecrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::INetworkFlyoutExperienceManager,Windows::Foundation::IClosable>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 32);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::StrongReference::DecrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v1 + 16));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 64LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
