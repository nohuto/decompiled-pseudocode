/*
 * XREFs of ?CreateStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUMODE_PARAMS@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18004D800
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUMODE_PARAMS@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18004D720 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGrap.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180022D84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Allocate@CComAllocator@ATL@@SAPEAX_K@Z @ 0x18004E38C (-Allocate@CComAllocator@ATL@@SAPEAX_K@Z.c)
 *     ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAKPEAUIAudioModeEffectsWatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK$$QEAPEAUIAudioModeEffectsWatcher@@@Z @ 0x1800590C4 (--$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristic.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U1@U2@U?$_tlgWrapperByVal@$00@@U6@U6@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@34AEBU?$_tlgWrapperByVal@$00@@88@Z @ 0x180072874 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByV.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x1800767F0 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18008788C (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteris.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphManager::CreateStreamGroup(
        CDeviceGraphManager *this,
        struct EndpointCharacteristicsDescriptor *a2,
        struct IDeviceGraphObjectsStore *a3,
        struct StreamGroupParams *a4,
        char a5,
        struct MODE_PARAMS *a6,
        struct IStreamGroupProxy **a7)
{
  struct IStreamGroupProxy **v9; // r13
  struct MODE_PARAMS **v10; // r14
  char *v11; // rsi
  unsigned int v12; // r15d
  char *v13; // rax
  char *v14; // rbx
  int v15; // esi
  int v16; // eax
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // ecx
  unsigned int v20; // edx
  int v21; // eax
  struct MODE_PARAMS *v22; // rax
  _DWORD *v23; // rcx
  int v24; // r8d
  int v25; // r9d
  __int64 *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v30; // [rsp+88h] [rbp-31h] BYREF
  __int16 v31[2]; // [rsp+90h] [rbp-29h] BYREF
  int v32; // [rsp+94h] [rbp-25h] BYREF
  int v33; // [rsp+98h] [rbp-21h] BYREF
  int v34; // [rsp+9Ch] [rbp-1Dh] BYREF
  __int64 v35; // [rsp+A0h] [rbp-19h] BYREF
  char *v36; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-1h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[7]; // [rsp+C0h] [rbp+7h] BYREF
  struct EndpointCharacteristicsDescriptor *v40; // [rsp+110h] [rbp+57h] BYREF
  char v41; // [rsp+118h] [rbp+5Fh] BYREF
  struct StreamGroupParams *v42; // [rsp+120h] [rbp+67h] BYREF

  v42 = a4;
  v40 = a2;
  v9 = a7;
  *a7 = 0LL;
  (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)a3 + 80LL))(
    a3,
    lpCriticalSection);
  v30 = 0LL;
  v10 = (struct MODE_PARAMS **)a6;
  v11 = (char *)a6 + 8;
  if ( a6 )
    v12 = *(_DWORD *)(*(_QWORD *)v11 + 64LL);
  else
    v12 = 0;
  v13 = (char *)ATL::CComAllocator::Allocate(16LL * v12 + 88);
  v14 = v13;
  a7 = (struct IStreamGroupProxy **)v13;
  if ( v13 )
  {
    *(_DWORD *)v13 = *((_DWORD *)a4 + 2);
    *(_QWORD *)(v13 + 4) = *((unsigned __int8 *)a4 + 48);
    if ( v10 )
      v16 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v11 + 16LL) + 16LL) + 18;
    else
      v16 = 0;
    *((_DWORD *)v14 + 3) = v16;
    if ( v10 )
      v17 = *(_QWORD *)(*(_QWORD *)v11 + 16LL);
    else
      v17 = 0LL;
    *((_QWORD *)v14 + 2) = v17;
    *((_QWORD *)v14 + 3) = *(_QWORD *)a4;
    *((_DWORD *)v14 + 9) = *(unsigned __int16 *)(*((_QWORD *)a4 + 2) + 16LL) + 18;
    *((_QWORD *)v14 + 5) = *((_QWORD *)a4 + 2);
    *((_QWORD *)v14 + 6) = *((_QWORD *)a4 + 3);
    if ( v10 )
      v18 = *(_DWORD *)(*(_QWORD *)v11 + 32LL);
    else
      v18 = 0;
    *((_DWORD *)v14 + 14) = v18;
    *(_OWORD *)(v14 + 60) = *((_OWORD *)a4 + 2);
    *((_DWORD *)v14 + 21) = v12;
    *((_DWORD *)v14 + 8) = *((unsigned __int8 *)a4 + 50);
    if ( v10 )
      v19 = *(_DWORD *)(*(_QWORD *)v11 + 56LL);
    else
      v19 = 0;
    *((_DWORD *)v14 + 19) = v19;
    *((_DWORD *)v14 + 20) = *((_BYTE *)a4 + 49) != 0 ? 3 : 0;
    v20 = 0;
    if ( v12 )
    {
      do
      {
        *(_OWORD *)&v14[16 * v20 + 88] = *(_OWORD *)(*(_QWORD *)v11 + 16LL * v20 + 68);
        ++v20;
      }
      while ( v20 < *((_DWORD *)v14 + 21) );
    }
    if ( *((_BYTE *)a4 + 48) )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v30);
      v21 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveStreamGroupProxy,IStreamGroupProxy,EndpointCharacteristicsDescriptor * &,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
              (unsigned int)&v30,
              (unsigned int)&v40,
              (unsigned int)&v42,
              (unsigned int)&a7,
              (__int64)&a5);
    }
    else
    {
      if ( v10 )
        v22 = *v10;
      else
        v22 = 0LL;
      a6 = v22;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v30);
      v21 = Microsoft::WRL::Details::MakeAndInitialize<CSharedStreamGroupProxy,IStreamGroupProxy,EndpointCharacteristicsDescriptor * &,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &,IAudioModeEffectsWatcher *>(
              (unsigned int)&v30,
              (unsigned int)&v40,
              (unsigned int)&v42,
              (unsigned int)&a7,
              (__int64)&a5,
              (__int64)&a6);
    }
    v15 = v21;
    v23 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v23 > 4u )
    {
      LOBYTE(a7) = *((_BYTE *)a4 + 50);
      LOBYTE(a6) = *((_BYTE *)a4 + 49);
      v41 = *((_BYTE *)a4 + 48);
      v32 = *((_DWORD *)a4 + 2);
      v35 = *((_QWORD *)a4 + 3);
      v36 = (char *)a4 + 32;
      v31[0] = *(_WORD *)(*((_QWORD *)a4 + 2) + 2LL);
      v33 = *(_DWORD *)(*((_QWORD *)a4 + 2) + 4LL);
      v37 = *(_QWORD *)a4;
      v34 = v15;
      v38 = v30;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        (_DWORD)v23,
        (unsigned int)&unk_1801A19F5,
        v24,
        v25,
        (__int64)&v38,
        (__int64)&v34,
        (__int64)&v37,
        (__int64)&v33,
        (__int64)v31,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v32,
        (__int64)&v41,
        (__int64)&a6,
        (__int64)&a7);
    }
    if ( v15 >= 0 )
    {
      a7 = 0LL;
      a6 = (struct MODE_PARAMS *)&a7;
      v26 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&a6);
      v15 = Microsoft::WRL::AsWeak<IStreamGroupProxy>(v30, v26);
      if ( v15 >= 0 )
        v15 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, struct IStreamGroupProxy ***))(*(_QWORD *)a3 + 48LL))(
                a3,
                &a7);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&a7);
      if ( v15 >= 0 )
      {
        v27 = v30;
        v30 = 0LL;
        *v9 = (struct IStreamGroupProxy *)v27;
      }
    }
  }
  else
  {
    v15 = -2147024882;
  }
  v28 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  CoTaskMemFree(v14);
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  return (unsigned int)v15;
}
