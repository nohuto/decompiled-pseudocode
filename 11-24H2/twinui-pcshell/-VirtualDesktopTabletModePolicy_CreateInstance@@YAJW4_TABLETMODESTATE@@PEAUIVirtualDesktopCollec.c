/*
 * XREFs of ?VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800987EC
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x180096284 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedForegroundOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180098E7C (-InternalRelease@-$ComPtr@VCPrivilegedForegroundOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedForegroundOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180098EB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedForeg.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIVirtualDesktopTabletModePolicy@@UIVirtualDesktopTabletModePolicyService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIVirtualDesktopTabletModePolicy@@UIVirtualDesktopTabletModePolicyService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800DAD6C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$_ea_1800DAD6C.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopTabletModePolicy@@QEAA@XZ @ 0x1805593A0 (--0VirtualDesktopTabletModePolicy@@QEAA@XZ.c)
 */

__int64 __fastcall VirtualDesktopTabletModePolicy_CreateInstance(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        VirtualDesktopTabletModePolicy *a7)
{
  VirtualDesktopTabletModePolicy *v7; // rdi
  VirtualDesktopTabletModePolicy *v12; // rax
  int v13; // ebx
  __int64 v14; // rdx
  VirtualDesktopTabletModePolicy *v15; // rcx
  VirtualDesktopTabletModePolicy *v17; // rbx
  volatile int *v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = a7;
  a7 = 0LL;
  *(_QWORD *)v7 = 0LL;
  Microsoft::WRL::ComPtr<CPrivilegedForegroundOperations>::InternalRelease(&a7);
  a7 = 0LL;
  v12 = (VirtualDesktopTabletModePolicy *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v17 = VirtualDesktopTabletModePolicy::VirtualDesktopTabletModePolicy(v12);
    *((_DWORD *)v17 + 24) = a1;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v17 + 6, a2);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v17 + 7, a3);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v17 + 8, a4);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v17 + 9, a5);
    if ( v17 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((VirtualDesktopTabletModePolicy *)((char *)v17 + 44), v18);
      a7 = v17;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedForegroundOperations,Microsoft::WRL::FtmBase>::Release(v17);
      v17 = a7;
    }
    else
    {
      a7 = 0LL;
    }
    v13 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopTabletModePolicy,IVirtualDesktopTabletModePolicyService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>>(
            v17,
            &GUID_1a147df6_551e_4e5a_b227_8a9ad37f7f78,
            v7);
    if ( v13 >= 0 )
      goto LABEL_4;
    v14 = 153LL;
  }
  else
  {
    v13 = -2147024882;
    v14 = 152LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
    (const char *)(unsigned int)v13);
LABEL_4:
  v15 = a7;
  if ( a7 )
  {
    a7 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedForegroundOperations,Microsoft::WRL::FtmBase>::Release(v15);
  }
  return (unsigned int)v13;
}
