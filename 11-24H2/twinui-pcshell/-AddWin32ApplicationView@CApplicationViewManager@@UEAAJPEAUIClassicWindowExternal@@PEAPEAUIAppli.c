/*
 * XREFs of ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x18002D6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18002CED0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPo.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18002D948 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCApplicationViewBase@@UIWin32Applicat.c)
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x18002DA00 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002EBC0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180038D40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewB.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1802CE208 (-InternalRelease@-$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationViewManager::AddWin32ApplicationView(
        RTL_SRWLOCK *this,
        struct IClassicWindowExternal *a2,
        struct IApplicationView **a3)
{
  int v6; // ebp
  CWin32ApplicationView *v7; // rsi
  CWin32ApplicationView *v8; // rax
  CWin32ApplicationView *v9; // r14
  CWin32ApplicationView *v10; // rax
  int v11; // ebx
  void *v12; // r8
  CWin32ApplicationView *v13; // rbx
  PVOID Ptr; // rdx
  PVOID v15; // rdx
  int *v16; // rax
  __int64 v18; // rdx
  int v19[2]; // [rsp+20h] [rbp-38h] BYREF
  RTL_SRWLOCK *v20; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CWin32ApplicationView *v22; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0LL;
  v22 = 0LL;
  v8 = (CWin32ApplicationView *)operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>(v8);
    *(_QWORD *)v9 = &CWin32ApplicationView::`vftable'{for `IApplicationView'};
    *((_QWORD *)v9 + 1) = &CWin32ApplicationView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationView2,IApplicationViewBase,IApplicationViewWithEnterpriseId>'};
    *((_QWORD *)v9 + 2) = &CWin32ApplicationView::`vftable'{for `IApplicationViewBase'};
    *((_QWORD *)v9 + 3) = &CWin32ApplicationView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationViewWithEnterpriseId>'};
    *((_QWORD *)v9 + 18) = &CWin32ApplicationView::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v9 + 19) = &CWin32ApplicationView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v9 + 20) = &CWin32ApplicationView::`vftable'{for `IAppSizeConstraintsCallback'};
    *((_QWORD *)v9 + 21) = &CWin32ApplicationView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v9 + 27) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IClassicWindowExternal *))(*(_QWORD *)a2 + 8LL))(a2);
    *((_QWORD *)v9 + 28) = 0LL;
    *((_QWORD *)v9 + 29) = 0LL;
    *((_QWORD *)v9 + 30) = 0LL;
    *((_QWORD *)v9 + 31) = 0LL;
    *((_QWORD *)v9 + 32) = 0LL;
    *((_QWORD *)v9 + 33) = 0LL;
    v7 = v9;
    v22 = v9;
    v10 = v9;
  }
  else
  {
    v9 = 0LL;
    v10 = 0LL;
  }
  if ( v10 )
  {
    v11 = CWin32ApplicationView::RuntimeClassInitialize(v7);
    if ( v11 >= 0 )
    {
      v20 = this + 49;
      AcquireSRWLockExclusive(this + 49);
      v13 = v9;
      *(_QWORD *)v19 = v9;
      if ( v9 )
        (*(void (__fastcall **)(CWin32ApplicationView *))(*(_QWORD *)v9 + 8LL))(v9);
      Ptr = this[51].Ptr;
      if ( Ptr != this[53].Ptr
        || (v6 = CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::_EnsureCapacity(
                   (__int64)&this[50],
                   (unsigned __int64)Ptr + 1,
                   v12),
            v6 >= 0) )
      {
        v15 = this[51].Ptr;
        this[51].Ptr = (char *)v15 + 1;
        v16 = (int *)((char *)this[50].Ptr + 8 * (_QWORD)v15);
        if ( v16 )
        {
          *(_QWORD *)v16 = 0LL;
          if ( v16 != v19 )
          {
            *(_QWORD *)v16 = v9;
            v13 = 0LL;
          }
        }
      }
      if ( v13 )
        (*(void (__fastcall **)(CWin32ApplicationView *))(*(_QWORD *)v13 + 16LL))(v13);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x208,
          (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v6);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((CAutoSRWExclusiveLock *)&v20);
        Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalRelease(&v22);
        return (unsigned int)v6;
      }
      else
      {
        CApplicationViewManager::RaiseApplicationViewChanged(this, v9, 0LL, 0LL, *(_QWORD *)v19);
        if ( this != (RTL_SRWLOCK *)-392LL )
          ReleaseSRWLockExclusive(this + 49);
        *a3 = v7;
        return 0LL;
      }
    }
    v18 = 516LL;
  }
  else
  {
    v11 = -2147024882;
    v18 = 515LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v11);
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release(v9);
  return (unsigned int)v11;
}
