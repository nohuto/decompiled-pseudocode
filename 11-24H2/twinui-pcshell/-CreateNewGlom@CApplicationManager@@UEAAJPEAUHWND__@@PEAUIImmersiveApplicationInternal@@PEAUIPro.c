/*
 * XREFs of ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x1802E4D50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180016EEC (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$As@UIImmersiveApplication2@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication2@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800911D0 (--$As@UIImmersiveApplication2@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x180091F30 (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x18009E61C (-_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicati.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18009EEE0 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1801C18B4 (-_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::CreateNewGlom(
        CApplicationManager *this,
        HWND a2,
        struct IImmersiveApplicationInternal *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4,
        struct IImmersiveApplicationInternal **a5)
{
  struct IImmersiveApplicationInternal **v9; // r15
  __int64 (__fastcall *v10)(struct IImmersiveApplicationInternal *, GUID *, _QWORD); // rbx
  int ImmersiveApp; // ebx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v14; // r9
  HWND v15; // rdx
  void (__fastcall *v16)(struct IImmersiveApplicationInternal *, struct IImmersiveMonitor **); // rbx
  struct IImmersiveMonitor *v17; // rbx
  int NextGlomId; // eax
  struct IImmersiveApplicationInternal **v19; // rax
  const struct _GUID *v21; // [rsp+30h] [rbp-49h]
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-31h] BYREF
  struct IImmersiveMonitor *v23; // [rsp+50h] [rbp-29h] BYREF
  void *v24; // [rsp+58h] [rbp-21h] BYREF
  __int64 v25; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int16 *v26; // [rsp+68h] [rbp-11h] BYREF
  __int64 v27; // [rsp+70h] [rbp-9h]
  __int64 v28; // [rsp+78h] [rbp-1h]
  unsigned __int64 v29; // [rsp+80h] [rbp+7h] BYREF
  HWND v30; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v31; // [rsp+90h] [rbp+17h] BYREF
  char v32; // [rsp+98h] [rbp+1Fh]
  __int64 v33; // [rsp+E8h] [rbp+6Fh] BYREF

  v9 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v10 = **(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, _QWORD))a3;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  ImmersiveApp = v10(a3, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v22);
  if ( ImmersiveApp >= 0 )
  {
    ImmersiveApp = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication2>(&v22, &v25);
    if ( ImmersiveApp >= 0 )
    {
      v29 = -1LL;
      ImmersiveApp = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v25 + 24LL))(v25, &v29);
      if ( ImmersiveApp >= 0 )
      {
        v26 = 0LL;
        v27 = 0LL;
        v28 = 0LL;
        v12 = v22;
        v13 = (*v22)[4];
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v26);
        v27 = -1LL;
        v28 = -1LL;
        ImmersiveApp = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), unsigned __int16 **))v13)(
                         v12,
                         &v26);
        if ( ImmersiveApp >= 0 )
        {
          v33 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
          v30 = a2;
          v31 = 0LL;
          v32 = 0;
          CApplicationManager::_RemoveWindowFromGlom(
            (CApplicationManager *)((char *)this - 240),
            (__int64)&v30,
            a3,
            v14,
            &v33);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
          v24 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
          ImmersiveApp = CApplicationManager::_IWMFromWindow(
                           (CApplicationManager *)((char *)this - 240),
                           v15,
                           &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
                           &v24);
          if ( ImmersiveApp < 0 )
            goto LABEL_9;
          v23 = 0LL;
          v16 = *(void (__fastcall **)(struct IImmersiveApplicationInternal *, struct IImmersiveMonitor **))(*(_QWORD *)a3 + 464LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
          v16(a3, &v23);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
          v17 = v23;
          NextGlomId = CActivationBasedAppAndGlomCollection::GetNextGlomId(
                         (CApplicationManager *)((char *)this + 384),
                         v26);
          ImmersiveApp = CApplicationManager::_CreateImmersiveApp(
                           (CApplicationManager *)((char *)this - 240),
                           (CallerIdentity *)v26,
                           (unsigned __int16 **)v29,
                           NextGlomId,
                           v17,
                           v21,
                           (void **)&a5);
          if ( ImmersiveApp >= 0 )
            ImmersiveApp = CApplicationManager::_AddViewToGlom(
                             (__int64)this - 240,
                             0LL,
                             (__int64)a5,
                             0,
                             v33,
                             (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a4);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
          if ( ImmersiveApp < 0 )
LABEL_9:
            CApplicationManager::_AddViewToGlom(
              (__int64)this - 240,
              0LL,
              (__int64)a3,
              9,
              v33,
              (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a4);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v26);
        if ( ImmersiveApp >= 0 )
        {
          v19 = a5;
          a5 = 0LL;
          *v9 = (struct IImmersiveApplicationInternal *)v19;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  return (unsigned int)ImmersiveApp;
}
