/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180123900
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x1801230F0 (--$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800475CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004F0C0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180057AB0 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z @ 0x180060324 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioDevicePropertyWriter::RuntimeClassInitialize(
        SpatialAudioDevicePropertyWriter *this,
        char *a2,
        struct IPropertyStore *a3)
{
  unsigned int v6; // ebx
  char v7; // al
  unsigned __int16 *v8; // r15
  char *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  HRESULT v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  LPVOID v18; // rbx
  __int64 (__fastcall *v19)(LPVOID, _QWORD, __int64, __int64 *); // rdi
  HRESULT Instance; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  LPVOID v24; // rbx
  __int64 (__fastcall *v25)(LPVOID, unsigned __int16 *, __int64 *); // rdi
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, _QWORD, char *); // rsi
  int v29; // [rsp+40h] [rbp-59h] BYREF
  int v30; // [rsp+44h] [rbp-55h] BYREF
  __int64 v31; // [rsp+48h] [rbp-51h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-41h] BYREF
  const CHAR *v34; // [rsp+60h] [rbp-39h] BYREF
  OLECHAR sz[40]; // [rsp+70h] [rbp-29h] BYREF

  v6 = 0;
  *((_BYTE *)this + 101) = 0;
  v7 = byte_1801CE2B8;
  *((_BYTE *)this + 100) = byte_1801CE2B8;
  byte_1801CE2B8 = v7 - 4;
  *((_DWORD *)this + 24) = 0;
  v8 = (unsigned __int16 *)((char *)this + 112);
  v9 = (char *)this + 112;
  if ( a2 )
    StringCchCopyW(v9, 260LL, a2);
  else
    memset_0(v9, 0, 0x208uLL);
  if ( !a3 )
  {
    ppv = 0LL;
    v31 = 0LL;
    memset_0(sz, 0, 0x4EuLL);
    v10 = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, sz, 39);
    v6 = v10;
    if ( v10 < 0 )
    {
      if ( (unsigned int)dword_1801CC2E8 > 2 )
      {
        v29 = v10;
        v30 = 141;
        pv = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v11,
          (unsigned __int8 *)&unk_1801A3DE9,
          v12,
          v13,
          (const CHAR **)&pv,
          (__int64)&v30,
          (__int64)&v29);
      }
      goto LABEL_28;
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
    v14 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &ppv);
    v6 = v14;
    if ( v14 < 0 )
    {
      if ( (unsigned int)dword_1801CC2E8 > 2 )
      {
        v30 = v14;
        v29 = 144;
        pv = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v15,
          (unsigned __int8 *)&unk_1801A3DE9,
          v16,
          v17,
          (const CHAR **)&pv,
          (__int64)&v29,
          (__int64)&v30);
      }
      goto LABEL_28;
    }
    if ( !a2 || !(unsigned int)_o__wcsicmp(a2) )
    {
      v18 = ppv;
      v19 = *(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 32LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v31);
      Instance = v19(v18, 0LL, 1LL, &v31);
      v6 = Instance;
      if ( Instance < 0 )
      {
        if ( (unsigned int)dword_1801CC2E8 > 2 )
        {
          v29 = 149;
LABEL_27:
          v30 = Instance;
          v34 = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v21,
            (unsigned __int8 *)&unk_1801A3DE9,
            v22,
            v23,
            &v34,
            (__int64)&v29,
            (__int64)&v30);
          goto LABEL_28;
        }
        goto LABEL_28;
      }
      pv = 0LL;
      (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v31 + 40LL))(v31, &pv);
      StringCbPrintfW(v8, 0x104uLL, L"%s", pv);
      CoTaskMemFree(pv);
    }
    v24 = ppv;
    v25 = *(__int64 (__fastcall **)(LPVOID, unsigned __int16 *, __int64 *))(*(_QWORD *)ppv + 40LL);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v31);
    Instance = v25(v24, v8, &v31);
    v6 = Instance;
    if ( Instance >= 0 )
    {
      v26 = v31;
      v27 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v31 + 32LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 11);
      Instance = v27(v26, 0LL, (char *)this + 88);
      v6 = Instance;
      if ( Instance >= 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 13);
        Instance = CoCreateInstance(
                     &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                     0LL,
                     1u,
                     &GUID_4495581a_01b9_4a8f_b05c_741a6c983d28,
                     (LPVOID *)this + 13);
        v6 = Instance;
        if ( Instance >= 0 || (unsigned int)dword_1801CC2E8 <= 2 )
          goto LABEL_28;
        v29 = 165;
        goto LABEL_27;
      }
      if ( (unsigned int)dword_1801CC2E8 > 2 )
      {
        v29 = 162;
        goto LABEL_27;
      }
    }
    else if ( (unsigned int)dword_1801CC2E8 > 2 )
    {
      v29 = 159;
      goto LABEL_27;
    }
LABEL_28:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v31);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
    return v6;
  }
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=((__int64 *)this + 11, (__int64)a3);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 13);
  return v6;
}
