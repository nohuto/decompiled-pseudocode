/*
 * XREFs of ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x1400333F0
 * Callers:
 *     ?RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x140032CF4 (-RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREA.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027A18 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x1400340F0 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     ??1?$out_param_t@V?$unique_ptr@UAPO_REG_PROPERTIES@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x14003DC14 (--1-$out_param_t@V-$unique_ptr@UAPO_REG_PROPERTIES@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall FillAuxiliaryInputInitStruct(
        struct BRIDGE_STREAM_DESCRIPTOR *a1,
        struct IAudioProcessingObject *a2,
        struct APOInitSystemEffects2 *a3)
{
  HRESULT v6; // eax
  int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v13; // eax
  int v14; // eax
  struct _GUID *v16; // [rsp+30h] [rbp-30h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-28h] BYREF
  struct _GUID v18; // [rsp+40h] [rbp-20h] BYREF
  char v19; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct IMMDevice *v21; // [rsp+98h] [rbp+38h] BYREF

  ppv = 0LL;
  v6 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v21 = 0LL;
    v8 = *(_QWORD *)ppv;
    v21 = 0LL;
    v9 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(v8 + 40))(ppv, *((_QWORD *)a1 + 7), &v21);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v16 = 0LL;
      lpVtbl = a2->lpVtbl;
      *(_QWORD *)&v18.Data1 = &v16;
      *(_QWORD *)v18.Data4 = 0LL;
      v19 = 1;
      v7 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, unsigned __int8 *))lpVtbl->GetRegistrationProperties)(
             a2,
             v18.Data4);
      wil::details::out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v18);
      if ( v7 >= 0 )
      {
        v13 = *((_DWORD *)a1 + 2);
        v18 = (struct _GUID)*((_OWORD *)a1 + 2);
        v14 = FillAPOInitSystemEffectsStructure(v21, v16, &v18, 0, v13, a3);
        v7 = v14;
        if ( v14 >= 0 )
        {
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v16,
            0LL);
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v21);
          v7 = 0;
          goto LABEL_12;
        }
        v11 = (unsigned int)v14;
        v12 = 27LL;
      }
      else
      {
        v11 = (unsigned int)v7;
        v12 = 25LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp",
        (const char *)v11);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v16,
        0LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp",
        (const char *)(unsigned int)v9);
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v21);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp",
      (const char *)(unsigned int)v6);
  }
LABEL_12:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppv);
  return (unsigned int)v7;
}
