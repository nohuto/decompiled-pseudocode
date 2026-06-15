/*
 * XREFs of _lambda_cb23c6bad18b717dd13912dc63130875_::operator() @ 0x180112C6C
 * Callers:
 *     ?Initialize@CVolumeSoftware@@AEAAJPEAUIMMDevice@@PEBG@Z @ 0x180113B48 (-Initialize@CVolumeSoftware@@AEAAJPEAUIMMDevice@@PEBG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?Initialize@CVolumeControlBase@@MEAAJPEAUIMMDevice@@@Z @ 0x1800498A0 (-Initialize@CVolumeControlBase@@MEAAJPEAUIMMDevice@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x180070134 (-GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFormFactor@@YAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@@Z @ 0x1801132F8 (-GetFormFactor@@YAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_cb23c6bad18b717dd13912dc63130875_::operator()(__int64 a1)
{
  int FormFactor; // eax
  int PolicyConfig; // eax
  int v4; // ebx
  __int64 v5; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  CVolumeControlBase *v8; // rcx
  int v9; // eax
  unsigned __int16 **v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  char v13; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  unsigned __int16 *v15; // [rsp+60h] [rbp+10h] BYREF
  struct IPolicyConfig *v16; // [rsp+68h] [rbp+18h] BYREF

  FormFactor = GetFormFactor(
                 **(struct IMMDevice ***)a1,
                 (enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 *)(*(_QWORD *)(a1 + 8) + 296LL));
  if ( FormFactor < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2222LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)FormFactor);
  v16 = 0LL;
  PolicyConfig = GetPolicyConfig(&v16);
  v4 = PolicyConfig;
  if ( PolicyConfig >= 0 )
  {
    v15 = 0LL;
    v5 = *(_QWORD *)v16;
    v11 = &v15;
    v12 = 0LL;
    v13 = 1;
    v4 = (*(__int64 (__fastcall **)(struct IPolicyConfig *, _QWORD, _QWORD, __int64 *))(v5 + 32))(
           v16,
           **(_QWORD **)(a1 + 16),
           0LL,
           &v12);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v11);
    if ( v4 >= 0 )
    {
      v8 = *(CVolumeControlBase **)(a1 + 8);
      *((_DWORD *)v8 + 29) = v15[1];
      v9 = CVolumeControlBase::Initialize(v8, **(struct IMMDevice ***)a1);
      v4 = v9;
      if ( v9 >= 0 )
      {
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v15,
          0LL);
        v4 = 0;
        goto LABEL_11;
      }
      v6 = (unsigned int)v9;
      v7 = 2231LL;
    }
    else
    {
      v6 = (unsigned int)v4;
      v7 = 2228LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)v6);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v15,
      0LL);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8B1,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)PolicyConfig);
  }
LABEL_11:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
  return (unsigned int)v4;
}
