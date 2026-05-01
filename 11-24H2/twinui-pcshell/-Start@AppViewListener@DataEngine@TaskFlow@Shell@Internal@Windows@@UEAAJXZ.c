/*
 * XREFs of ?Start@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ @ 0x180402C20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::Start(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  LPVOID v5; // rbx
  __int64 (__fastcall *v6)(LPVOID, GUID *, GUID *, __int64 *); // rdi
  __int64 *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID ppv; // [rsp+48h] [rbp+10h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v2 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = ppv;
    v6 = *(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL);
    v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)this + 12);
    v2 = v6(v5, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, v7);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 12) + 96LL))(
             *((_QWORD *)this + 12),
             ((unsigned __int64)this + 16) & -(__int64)(this != 0LL),
             (char *)this + 104);
      v3 = v2;
      if ( v2 >= 0 )
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *))(**((_QWORD **)this + 11) + 48LL))(
               *((_QWORD *)this + 11),
               this);
        v3 = v2;
        if ( v2 >= 0 )
        {
          v3 = 0;
          goto LABEL_11;
        }
        v4 = 67LL;
      }
      else
      {
        v4 = 51LL;
      }
    }
    else
    {
      v4 = 49LL;
    }
  }
  else
  {
    v4 = 48LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
    (const char *)(unsigned int)v2);
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  return v3;
}
