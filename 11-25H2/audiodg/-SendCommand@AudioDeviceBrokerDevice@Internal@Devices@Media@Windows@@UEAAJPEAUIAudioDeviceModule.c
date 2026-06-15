/*
 * XREFs of ?SendCommand@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x14007EFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x14001C294 (-KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@K.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027A18 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x14004303C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ??$?0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z @ 0x140077014 (--$-0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z.c)
 *     ??$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIDataWriter@Streams@Storage@1@@Z @ 0x1400770AC (--$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::SendCommand(
        Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *this,
        struct Windows::Media::Devices::IAudioDeviceModule *a2,
        struct Windows::Storage::Streams::IBuffer *a3,
        struct Windows::Storage::Streams::IBuffer **a4)
{
  void *v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  DWORD v12; // r12d
  void *v13; // rax
  struct KSIDENTIFIER *v14; // rbx
  __int64 (__fastcall *v15)(struct Windows::Media::Devices::IAudioDeviceModule *, HSTRING *); // rsi
  int v16; // eax
  const unsigned __int16 *v17; // rdx
  HSTRING *v18; // rax
  int ActivationFactory; // eax
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(__int64, struct Windows::Storage::Streams::IBuffer *, __int64 *); // r14
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r9
  const OLECHAR *StringRawBuffer; // rax
  RTL_SRWLOCK *v26; // r14
  int v27; // eax
  void *v28; // rax
  HSTRING string; // [rsp+30h] [rbp-59h] BYREF
  SIZE_T cb; // [rsp+38h] [rbp-51h] BYREF
  __int64 v32; // [rsp+40h] [rbp-49h] BYREF
  ULONG v33; // [rsp+48h] [rbp-41h] BYREF
  __int64 v34; // [rsp+50h] [rbp-39h] BYREF
  __int64 v35; // [rsp+58h] [rbp-31h] BYREF
  void *v36; // [rsp+60h] [rbp-29h] BYREF
  struct KSIDENTIFIER *v37; // [rsp+68h] [rbp-21h] BYREF
  Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *v38; // [rsp+70h] [rbp-19h]
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-11h] BYREF
  __int64 v40; // [rsp+90h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v38 = this;
  cb = 0LL;
  v33 = 0;
  v37 = 0LL;
  v7 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v32 = 0LL;
  v34 = 0LL;
  string = 0LL;
  if ( a2 )
  {
    if ( !a3 )
    {
      v8 = -2147024809;
      v9 = 2147942487LL;
      v10 = 2546LL;
      goto LABEL_14;
    }
    if ( !a4 )
    {
      v8 = -2147467261;
      v9 = 2147500035LL;
      v10 = 2547LL;
      goto LABEL_14;
    }
    *a4 = 0LL;
    v11 = (*(__int64 (__fastcall **)(struct Windows::Storage::Streams::IBuffer *, char *))(*(_QWORD *)a3 + 56LL))(
            a3,
            (char *)&cb + 4);
    v8 = v11;
    if ( v11 < 0 )
    {
      v10 = 2551LL;
LABEL_13:
      v9 = (unsigned int)v11;
      goto LABEL_14;
    }
    v12 = HIDWORD(cb) + 48;
    v13 = CoTaskMemAlloc((unsigned int)(HIDWORD(cb) + 48));
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v37,
      v13);
    v14 = v37;
    if ( !v37 )
    {
      v8 = -2147024882;
      v9 = 2147942414LL;
      v10 = 2555LL;
      goto LABEL_14;
    }
    v11 = (*(__int64 (__fastcall **)(struct Windows::Media::Devices::IAudioDeviceModule *, ULONG *))(*(_QWORD *)a2 + 64LL))(
            a2,
            &v33);
    v8 = v11;
    if ( v11 < 0 )
    {
      v10 = 2559LL;
      goto LABEL_13;
    }
    v15 = *(__int64 (__fastcall **)(struct Windows::Media::Devices::IAudioDeviceModule *, HSTRING *))(*(_QWORD *)a2 + 48LL);
    WindowsDeleteString(string);
    v16 = v15(a2, &string);
    v8 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA00,
        (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
        (const char *)(unsigned int)v16);
      WindowsDeleteString(string);
      string = 0LL;
      goto LABEL_51;
    }
    if ( v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    v18 = Windows::Internal::StringReference::StringReference(
            (HSTRING *)&hstringHeader,
            (const unsigned __int16 (*)[35])v17);
    ActivationFactory = RoGetActivationFactory(*v18, &GUID_11fcbfc8_f93a_471b_b121_f379e349313c, &v35);
    v8 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA01,
        (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
        (const char *)(unsigned int)ActivationFactory);
      WindowsDeleteString(string);
      string = 0LL;
      goto LABEL_51;
    }
    v20 = v35;
    v21 = *(__int64 (__fastcall **)(__int64, struct Windows::Storage::Streams::IBuffer *, __int64 *))(*(_QWORD *)v35 + 48LL);
    if ( v34 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    v22 = v21(v20, a3, &v34);
    v8 = v22;
    if ( v22 >= 0 )
    {
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct KSIDENTIFIER *))(*(_QWORD *)v34 + 112LL))(
              v34,
              HIDWORD(cb),
              v14 + 2);
      v8 = v22;
      if ( v22 >= 0 )
      {
        v14->Set = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6;
        v14->Id = 2;
        v14->Flags = 1;
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        v22 = CLSIDFromString(StringRawBuffer, &v14[1].Set);
        v8 = v22;
        if ( v22 >= 0 )
        {
          v14[1].Id = v33;
          v26 = (RTL_SRWLOCK *)v38;
          v27 = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
                  (RTL_SRWLOCK *)v38,
                  v14,
                  v12,
                  0LL,
                  0,
                  (unsigned int *)&cb);
          v8 = v27;
          if ( (!v27 || v27 == -2147024662) && (_DWORD)cb )
          {
            v28 = CoTaskMemAlloc((unsigned int)cb);
            wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
              &v36,
              v28);
            v7 = v36;
            if ( !v36 )
            {
              v8 = -2147024882;
              v24 = 2147942414LL;
              v23 = 2584LL;
              goto LABEL_26;
            }
            v22 = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
                    v26,
                    v14,
                    v12,
                    v36,
                    cb,
                    (unsigned int *)&cb);
            v8 = v22;
            if ( v22 < 0 )
            {
              v23 = 2589LL;
              goto LABEL_25;
            }
          }
          else if ( v27 < 0 )
          {
            v24 = (unsigned int)v27;
            v23 = 2593LL;
            goto LABEL_26;
          }
          if ( v32 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
          v40 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(
            &hstringHeader,
            L"Windows.Storage.Streams.DataWriter",
            0x23u,
            0x22u);
          v22 = Windows::Foundation::ActivateInstance<Windows::Storage::Streams::IDataWriter>(v40, &v32);
          v8 = v22;
          if ( v22 >= 0 )
          {
            if ( v7
              && (v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *))(*(_QWORD *)v32 + 96LL))(
                          v32,
                          (unsigned int)cb,
                          v7),
                  v8 = v22,
                  v22 < 0) )
            {
              v23 = 2601LL;
            }
            else
            {
              v22 = (*(__int64 (__fastcall **)(__int64, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v32 + 248LL))(
                      v32,
                      a4);
              v8 = v22;
              if ( v22 >= 0 )
              {
                WindowsDeleteString(string);
                v8 = 0;
                goto LABEL_50;
              }
              v23 = 2603LL;
            }
          }
          else
          {
            v23 = 2597LL;
          }
          goto LABEL_25;
        }
        v23 = 2567LL;
      }
      else
      {
        v23 = 2563LL;
      }
    }
    else
    {
      v23 = 2562LL;
    }
LABEL_25:
    v24 = (unsigned int)v22;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)v24);
    WindowsDeleteString(string);
LABEL_50:
    string = 0LL;
    goto LABEL_51;
  }
  v8 = -2147024809;
  v9 = 2147942487LL;
  v10 = 2545LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)v9);
  WindowsDeleteString(string);
LABEL_51:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v34);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v32);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v35);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v36,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v37,
    0LL);
  return v8;
}
