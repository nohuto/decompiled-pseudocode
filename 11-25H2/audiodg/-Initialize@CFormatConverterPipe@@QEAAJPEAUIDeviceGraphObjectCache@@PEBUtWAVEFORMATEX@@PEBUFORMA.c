/*
 * XREFs of ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140042184
 * Callers:
 *     ?CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x140042128 (-CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z.c)
 * Callees:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140004878 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140007BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000FED8 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140026F5C (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027A18 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x140027AB0 (-Reset@CFormatConverterPipe@@QEAAXXZ.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140027ADC (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140027B08 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@UAPO_REG_PROPERTIES@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x14003DC14 (--1-$out_param_t@V-$unique_ptr@UAPO_REG_PROPERTIES@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFormatConverterPipe::Initialize(
        void **this,
        struct IDeviceGraphObjectCache *a2,
        const struct tWAVEFORMATEX *a3,
        const struct FORMAT_CONVERTER_PIPE_DESCRIPTOR *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  CPipeInstance *v11; // rdi
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // edx
  void *v15; // rdx
  void *v16; // [rsp+20h] [rbp-30h] BYREF
  CPipeInstance *v17; // [rsp+28h] [rbp-28h] BYREF
  void **v18; // [rsp+30h] [rbp-20h] BYREF
  struct tWAVEFORMATEX *v19; // [rsp+38h] [rbp-18h] BYREF
  char v20; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  CFormatConverterPipe::Reset(this);
  v17 = 0LL;
  v8 = CPipeInstance::CreateFormatConverterPipeInstance(a2, a4, &v17);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = v17;
    v12 = CPipeInstance::Initialize(v17);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v12 = CPipeInstance::ConnectAPOs(v11, 0LL);
      v9 = v12;
      if ( v12 >= 0 )
      {
        v16 = 0LL;
        v18 = &v16;
        v19 = 0LL;
        v20 = 1;
        v9 = CloneWaveFormat(a3, &v19);
        wil::details::out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v18);
        if ( (v9 & 0x80000000) == 0 )
        {
          v17 = 0LL;
          *this = v11;
          v15 = v16;
          v16 = 0LL;
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            this + 1,
            v15);
          this[2] = (void *)*((_QWORD *)a4 + 3);
          *((_BYTE *)this + 24) = 0;
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            &v16,
            0LL);
          v9 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x33,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)v9);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            &v16,
            0LL);
        }
        goto LABEL_13;
      }
      v13 = 48LL;
    }
    else
    {
      v13 = 47LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v12);
LABEL_13:
    ATL::CAutoPtr<CPipeInstance>::Free(&v17, v14);
    return v9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v8);
  if ( v17 )
    CPipeInstance::`scalar deleting destructor'(v17);
  return v9;
}
