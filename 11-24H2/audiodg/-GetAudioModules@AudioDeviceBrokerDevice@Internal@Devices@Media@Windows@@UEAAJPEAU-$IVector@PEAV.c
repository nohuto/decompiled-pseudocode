/*
 * XREFs of ?GetAudioModules@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x14001BC40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x14001BF94 (-KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@K.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027718 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x140032024 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     ??$Make@VAudioDeviceModule@Devices@Media@Windows@@PEAUHSTRING__@@AEAKPEAU5@AEAKAEAKPEAVAudioDeviceBrokerDevice@Internal@234@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModule@Devices@Media@Windows@@@12@$$QEAPEAUHSTRING__@@AEAK011$$QEAPEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x140076050 (--$Make@VAudioDeviceModule@Devices@Media@Windows@@PEAUHSTRING__@@AEAKPEAU5@AEAKAEAKPEAVAudioDevi.c)
 *     ?GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z @ 0x14007A104 (-GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::GetAudioModules(
        Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *this,
        __int64 a2)
{
  int v4; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  LPVOID v8; // rax
  unsigned int *v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // r9
  struct _GUID *v12; // r14
  unsigned int v13; // r12d
  const unsigned __int16 *v14; // rsi
  HRESULT v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rdx
  void *v18; // [rsp+40h] [rbp-29h] BYREF
  UINT32 length[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v20; // [rsp+50h] [rbp-19h] BYREF
  HSTRING v21; // [rsp+58h] [rbp-11h] BYREF
  struct _GUID v22; // [rsp+60h] [rbp-9h] BYREF
  struct KSIDENTIFIER v23; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  SIZE_T cb; // [rsp+D8h] [rbp+6Fh] BYREF
  HSTRING string; // [rsp+E0h] [rbp+77h] BYREF
  HSTRING v27; // [rsp+E8h] [rbp+7Fh] BYREF

  v18 = 0LL;
  LODWORD(cb) = 0;
  if ( a2 )
  {
    v23.Set = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6;
    *(&v23.Alignment + 2) = 0x100000001LL;
    v4 = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
           this,
           &v23,
           0x20u,
           0LL,
           0,
           (unsigned int *)&cb);
    if ( ((int)(v4 + 0x80000000) < 0 || v4 == -2147024662) && (_DWORD)cb )
    {
      v8 = CoTaskMemAlloc((unsigned int)cb);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v18,
        v8);
      v9 = (unsigned int *)v18;
      if ( !v18 )
      {
        v6 = -2147024882;
        v7 = 2458LL;
        goto LABEL_29;
      }
      memset_0(v18, 0, (unsigned int)cb);
      v10 = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
              this,
              &v23,
              0x20u,
              v9,
              cb,
              (unsigned int *)&cb);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = (unsigned int)v10;
        v7 = 2466LL;
        goto LABEL_30;
      }
      if ( (unsigned int)cb < 8 )
      {
        v6 = -2147418113;
        v7 = 2469LL;
        goto LABEL_29;
      }
      if ( (unsigned int)cb < 8 * (unsigned __int64)v9[1] + 8 )
      {
        v6 = -2147418113;
        v7 = 2471LL;
        goto LABEL_29;
      }
      v12 = (struct _GUID *)(v9 + 2);
      v13 = 0;
      v14 = (const unsigned __int16 *)(v9 + 9);
      while ( v13 < v9[1] )
      {
        string = 0LL;
        *(_QWORD *)length = 0LL;
        WindowsDeleteString(0LL);
        v27 = 0LL;
        v22 = *v12;
        v15 = GuidToHString(&v22, &v27);
        v6 = v15;
        if ( v15 < 0 )
        {
          v17 = 2481LL;
          goto LABEL_25;
        }
        v15 = StringCchLengthW(v14, 0x80uLL, (unsigned __int64 *)length);
        v6 = v15;
        if ( v15 < 0 )
        {
          v17 = 2482LL;
          goto LABEL_25;
        }
        WindowsDeleteString(string);
        string = 0LL;
        v15 = WindowsCreateString(v14, length[0], &string);
        v6 = v15;
        if ( v15 < 0 )
        {
          v17 = 2483LL;
LABEL_25:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v17,
            (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
            (const char *)(unsigned int)v15);
          goto LABEL_26;
        }
        *(_QWORD *)length = this;
        v21 = string;
        *(_QWORD *)&v22.Data1 = v27;
        Microsoft::WRL::Details::Make<Windows::Media::Devices::AudioDeviceModule,HSTRING__ *,unsigned long &,HSTRING__ *,unsigned long &,unsigned long &,Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>(
          (unsigned int)&v20,
          (unsigned int)&v22,
          (_DWORD)v14 - 12,
          (unsigned int)&v21,
          (__int64)(v14 - 4),
          (__int64)(v14 - 2),
          (__int64)length);
        v16 = v20;
        if ( !v20 )
        {
          v6 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x9BB,
            (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
            (const char *)0x8007000ELL);
LABEL_26:
          WindowsDeleteString(string);
          string = 0LL;
          WindowsDeleteString(v27);
          v27 = 0LL;
          goto LABEL_31;
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 104LL))(a2, v20);
        v12 = (struct _GUID *)((char *)v12 + 284);
        v14 += 142;
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        WindowsDeleteString(string);
        string = 0LL;
        WindowsDeleteString(v27);
        ++v13;
      }
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v18,
        0LL);
    }
    return 0LL;
  }
  v6 = -2147024809;
  v7 = 2429LL;
LABEL_29:
  v11 = v6;
LABEL_30:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)v11);
LABEL_31:
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v18,
    0LL);
  return v6;
}
