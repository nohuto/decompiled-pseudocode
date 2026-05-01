/*
 * XREFs of _lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator() @ 0x18014BE20
 * Callers:
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x18014B9C0 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180163AB4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator()(struct IUnknown ****a1, __int64 *a2)
{
  char v3; // bp
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  struct IUnknown ***v7; // rsi
  struct IUnknown *v8; // rbx
  unsigned __int64 v9; // rdi
  struct IUnknown **v10; // r14
  char v11; // bl
  struct IUnknown ***v12; // rbx
  struct IUnknown **v13; // rdx
  struct IUnknown **v14; // rcx
  struct IUnknown **v15; // rdx
  struct IUnknown **v17; // rsi
  struct IUnknown *v18; // [rsp+60h] [rbp+18h] BYREF
  struct IUnknown *v19; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v18 = 0LL;
  v4 = *a2;
  v5 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a2 + 80LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v18);
  if ( v5(v4, AddressOf) >= 0 )
  {
    v7 = *a1;
    v8 = v18;
    v19 = v18;
    if ( v18 )
      ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->AddRef)(v18);
    v3 = 1;
    v9 = 0LL;
    v10 = v7[1];
    if ( !v10 )
    {
LABEL_5:
      v11 = 1;
      goto LABEL_6;
    }
    v17 = *v7;
    while ( !(unsigned int)SHIsSameObject(*v17, v8) )
    {
      ++v9;
      ++v17;
      if ( v9 >= (unsigned __int64)v10 )
        goto LABEL_5;
    }
  }
  v11 = 0;
LABEL_6:
  if ( (v3 & 1) != 0 )
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
  if ( v11 )
  {
    v12 = *a1;
    v13 = (*a1)[1];
    if ( v13 != (*a1)[3]
      || (int)CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::_EnsureCapacity(
                *a1,
                (char *)v13 + 1) >= 0 )
    {
      v14 = v12[1];
      v12[1] = (struct IUnknown **)((char *)v14 + 1);
      v15 = &(*v12)[(_QWORD)v14];
      if ( v15 )
      {
        *v15 = v18;
        if ( v18 )
          ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->AddRef)(v18);
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
  return 1;
}
