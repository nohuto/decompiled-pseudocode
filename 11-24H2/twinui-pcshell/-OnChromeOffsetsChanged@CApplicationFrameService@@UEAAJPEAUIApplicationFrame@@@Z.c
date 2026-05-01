/*
 * XREFs of ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180099950
 * Callers:
 *     ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x1800990E0 (-SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180038040 (-InternalAddRef@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x18009A168 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009A190 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_18009A190.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationFrameService::OnChromeOffsetsChanged(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2)
{
  __int64 v4; // rbx
  unsigned __int64 i; // rcx
  __int64 *v6; // r8
  unsigned __int64 j; // rcx
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 v10; // rcx
  __int64 *v12; // r8
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h] BYREF
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF

  v17 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationFrame *, __int128 *))(*(_QWORD *)a2 + 120LL))(a2, &v17) >= 0 )
  {
    v14 = 0;
    if ( (*(int (__fastcall **)(struct IApplicationFrame *, int *))(*(_QWORD *)a2 + 128LL))(a2, &v14) >= 0 )
    {
      v16 = 0LL;
      if ( (*(int (__fastcall **)(struct IApplicationFrame *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v16) >= 0 )
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v13 = 0LL;
        v4 = v16;
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v13);
        v13 = 0LL;
        for ( i = 0LL; i < *((_QWORD *)this + 12); ++i )
        {
          v6 = (__int64 *)(*((_QWORD *)this + 11) + 8 * i);
          if ( *(_QWORD *)(*v6 + 80) == v4 )
          {
LABEL_19:
            Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef(v6);
            v13 = *v12;
            v15 = 0LL;
            v8 = *((_QWORD *)this + 15);
            v9 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v8 + 48LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
            if ( v9(v8, (v13 + 8) & -(__int64)(v13 != 0), &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v15) >= 0 )
            {
              *(_OWORD *)(v13 + 88) = v17;
              *(_DWORD *)(v13 + 104) = v14;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 488LL))(v15);
            }
            v10 = v15;
            if ( v15 )
            {
              v15 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            }
            goto LABEL_13;
          }
        }
        for ( j = 0LL; j < *((_QWORD *)this + 8); ++j )
        {
          v6 = (__int64 *)(*((_QWORD *)this + 7) + 8 * j);
          if ( *(_QWORD *)(*v6 + 80) == v4 )
            goto LABEL_19;
        }
LABEL_13:
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v13 )
        {
          v13 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::Release();
        }
      }
    }
  }
  return 0LL;
}
