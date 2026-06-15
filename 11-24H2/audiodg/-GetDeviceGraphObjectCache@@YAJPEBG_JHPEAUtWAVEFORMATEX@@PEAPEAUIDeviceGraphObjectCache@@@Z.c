/*
 * XREFs of ?GetDeviceGraphObjectCache@@YAJPEBG_JHPEAUtWAVEFORMATEX@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x140005904
 * Callers:
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005FB0 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x140026310 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z.c)
 *     ?CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140049140 (-CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUI.c)
 * Callees:
 *     ?GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z @ 0x140005A9C (-GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall GetDeviceGraphObjectCache(
        const unsigned __int16 *a1,
        __int64 a2,
        int a3,
        struct tWAVEFORMATEX *a4,
        struct IDeviceGraphObjectCache **a5)
{
  int DeviceGraphObjectCacheManager; // eax
  unsigned int v10; // ebx
  __int64 v11; // rbx
  void (__fastcall *v12)(__int64, const struct _tlgProvider_t *); // rdi
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // rax
  int v15; // eax
  struct IDeviceGraphObjectCache *v16; // rax
  int v18; // [rsp+20h] [rbp-58h]
  struct IDeviceGraphObjectCacheManager *v19; // [rsp+30h] [rbp-48h] BYREF
  struct IDeviceGraphObjectCache *v20; // [rsp+38h] [rbp-40h] BYREF
  __int64 v21; // [rsp+40h] [rbp-38h] BYREF
  __int64 v22; // [rsp+48h] [rbp-30h] BYREF
  float nSamplesPerSec; // [rsp+50h] [rbp-28h]
  int nChannels; // [rsp+54h] [rbp-24h]
  int v25; // [rsp+58h] [rbp-20h]
  int v26; // [rsp+5Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  *a5 = 0LL;
  v19 = 0LL;
  DeviceGraphObjectCacheManager = GetDeviceGraphObjectCacheManager(&v19);
  v10 = DeviceGraphObjectCacheManager;
  if ( DeviceGraphObjectCacheManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD3,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)DeviceGraphObjectCacheManager,
      v18);
    if ( v19 )
      (*(void (__fastcall **)(struct IDeviceGraphObjectCacheManager *))(*(_QWORD *)v19 + 16LL))(v19);
    return v10;
  }
  v21 = 0LL;
  (**(void (__fastcall ***)(struct IDeviceGraphObjectCacheManager *, GUID *, __int64 *))v19)(
    v19,
    &GUID_bba447bc_0c11_4b7a_ba32_c5284a54692f,
    &v21);
  v11 = v21;
  v12 = *(void (__fastcall **)(__int64, const struct _tlgProvider_t *))(*(_QWORD *)v21 + 24LL);
  v13 = AudioDgTelemetryProvider::Provider();
  v12(v11, v13);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v26 = 0;
  v22 = a2;
  nSamplesPerSec = (float)(int)a4->nSamplesPerSec;
  nChannels = a4->nChannels;
  v25 = a3;
  v20 = 0LL;
  v14 = *(_QWORD *)v19;
  v20 = 0LL;
  v15 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectCacheManager *, const unsigned __int16 *, __int64 *, struct IDeviceGraphObjectCache **))(v14 + 24))(
          v19,
          a1,
          &v22,
          &v20);
  v10 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE2,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v15,
      v18);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v20);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v19);
    return v10;
  }
  v16 = v20;
  v20 = 0LL;
  *a5 = v16;
  if ( v19 )
    (*(void (__fastcall **)(struct IDeviceGraphObjectCacheManager *))(*(_QWORD *)v19 + 16LL))(v19);
  return 0LL;
}
