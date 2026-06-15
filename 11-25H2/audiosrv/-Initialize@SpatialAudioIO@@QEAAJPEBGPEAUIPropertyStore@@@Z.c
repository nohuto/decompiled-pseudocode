/*
 * XREFs of ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18003B48C
 * Callers:
 *     Create_SpatialAudioDeviceStateReader @ 0x18003B1F0 (Create_SpatialAudioDeviceStateReader.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18003CC58 (--$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800475CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z @ 0x180060324 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioIO::Initialize(
        SpatialAudioIO *this,
        const unsigned __int16 *a2,
        struct IPropertyStore *a3)
{
  HRESULT v5; // eax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  LPVOID v14; // rbx
  __int64 (__fastcall *v15)(LPVOID, const unsigned __int16 *, __int64 *); // rdi
  int v16; // eax
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  LPVOID v20; // rbx
  __int64 (__fastcall *v21)(LPVOID, _QWORD, __int64, __int64 *); // rdi
  int v22; // eax
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, _QWORD, char *); // rsi
  int v28; // eax
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  HRESULT Instance; // eax
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  int v37; // [rsp+40h] [rbp-49h] BYREF
  int v38; // [rsp+44h] [rbp-45h] BYREF
  __int64 v39; // [rsp+48h] [rbp-41h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-39h] BYREF
  const char *v41; // [rsp+58h] [rbp-31h] BYREF
  OLECHAR sz[40]; // [rsp+60h] [rbp-29h] BYREF

  if ( a3 )
  {
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=((char *)this + 528, a3);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 67);
    return (*(unsigned int (__fastcall **)(SpatialAudioIO *))(*(_QWORD *)this + 8LL))(this);
  }
  ppv = 0LL;
  v39 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
  v5 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &ppv);
  v9 = v5;
  if ( v5 >= 0 )
  {
    memset_0(sz, 0, 0x4EuLL);
    v10 = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, sz, 39);
    v9 = v10;
    if ( v10 >= 0 )
    {
      if ( a2 && (unsigned int)_o__wcsicmp(a2) )
      {
        v14 = ppv;
        v15 = *(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)ppv + 40LL);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v39);
        v16 = v15(v14, a2, &v39);
        v9 = v16;
        if ( v16 < 0 )
        {
          if ( (unsigned int)dword_1801CC2E8 > 2 )
          {
            v38 = v16;
            v37 = 51;
            v41 = "SpatialAudioIO::Initialize";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v17,
              (unsigned int)&unk_1801A3DE9,
              v18,
              v19,
              (__int64)&v41,
              (__int64)&v37,
              (__int64)&v38);
          }
          goto LABEL_6;
        }
      }
      else
      {
        v20 = ppv;
        v21 = *(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 32LL);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v39);
        v22 = v21(v20, 0LL, 1LL, &v39);
        v9 = v22;
        if ( v22 < 0 )
        {
          if ( (unsigned int)dword_1801CC2E8 > 2 )
          {
            v38 = v22;
            v37 = 46;
            v41 = "SpatialAudioIO::Initialize";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v23,
              (unsigned int)&unk_1801A3DE9,
              v24,
              v25,
              (__int64)&v41,
              (__int64)&v37,
              (__int64)&v38);
          }
          goto LABEL_6;
        }
      }
      v26 = v39;
      v27 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v39 + 32LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 66);
      v28 = v27(v26, 0LL, (char *)this + 528);
      v9 = v28;
      if ( v28 >= 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 67);
        Instance = CoCreateInstance(
                     &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                     0LL,
                     1u,
                     &GUID_4495581a_01b9_4a8f_b05c_741a6c983d28,
                     (LPVOID *)this + 67);
        v9 = Instance;
        if ( Instance >= 0 )
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v39);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
          return (*(unsigned int (__fastcall **)(SpatialAudioIO *))(*(_QWORD *)this + 8LL))(this);
        }
        if ( (unsigned int)dword_1801CC2E8 > 2 )
        {
          v38 = Instance;
          v37 = 58;
          v41 = "SpatialAudioIO::Initialize";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v33,
            (unsigned int)&unk_1801A3DE9,
            v34,
            v35,
            (__int64)&v41,
            (__int64)&v37,
            (__int64)&v38);
        }
      }
      else if ( (unsigned int)dword_1801CC2E8 > 2 )
      {
        v38 = v28;
        v37 = 55;
        v41 = "SpatialAudioIO::Initialize";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v29,
          (unsigned int)&unk_1801A3DE9,
          v30,
          v31,
          (__int64)&v41,
          (__int64)&v37,
          (__int64)&v38);
      }
    }
    else if ( (unsigned int)dword_1801CC2E8 > 2 )
    {
      v38 = v10;
      v37 = 41;
      v41 = "SpatialAudioIO::Initialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (unsigned int)&unk_1801A3DE9,
        v12,
        v13,
        (__int64)&v41,
        (__int64)&v37,
        (__int64)&v38);
    }
  }
  else if ( (unsigned int)dword_1801CC2E8 > 2 )
  {
    v37 = v5;
    v38 = 37;
    v41 = "SpatialAudioIO::Initialize";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      (unsigned int)&unk_1801A3DE9,
      v7,
      v8,
      (__int64)&v41,
      (__int64)&v38,
      (__int64)&v37);
  }
LABEL_6:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v39);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
  return v9;
}
