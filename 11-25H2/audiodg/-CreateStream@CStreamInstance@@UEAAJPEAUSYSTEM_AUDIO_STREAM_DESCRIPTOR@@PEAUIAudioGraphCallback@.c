/*
 * XREFs of ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005F80
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140004744 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphOb.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140004878 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?GetDeviceGraphObjectCache@@YAJPEBG_JHPEAUtWAVEFORMATEX@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x1400058D4 (-GetDeviceGraphObjectCache@@YAJPEBG_JHPEAUtWAVEFORMATEX@@PEAPEAUIDeviceGraphObjectCache@@@Z.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000761C (--1CPerfTracker@@QEAA@XZ.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x1400077C4 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079B0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x140007B28 (-ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000FED8 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400241A8 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027A18 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140027ADC (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140027B08 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400298F4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x140041BE0 (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     memcpy_0 @ 0x14005B571 (memcpy_0.c)
 *     ?Add@CAudioHistoryBufferManager@@QEAAJ_KKPEAUICrossProcessMemory@@@Z @ 0x140065F54 (-Add@CAudioHistoryBufferManager@@QEAAJ_KKPEAUICrossProcessMemory@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstance::CreateStream(
        CStreamInstance *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  const struct _tlgProvider_t *v8; // rax
  struct _RTL_CRITICAL_SECTION *v9; // r14
  int v10; // eax
  int v11; // esi
  struct tWAVEFORMATEX *v12; // rdi
  unsigned int v13; // eax
  struct tWAVEFORMATEX *v14; // rax
  int DeviceGraphObjectCache; // eax
  struct IDeviceGraphObjectCache *v16; // rbx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  struct CAudioHistoryBufferManager *v21; // r12
  __int64 v22; // rax
  __int64 v23; // r9
  int v24; // eax
  _OWORD *v25; // rsi
  __int64 v26; // r9
  _OWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // r9
  unsigned int v31; // edx
  unsigned int v33; // edx
  unsigned int v34; // edx
  unsigned int v35; // edx
  int HistoryBufferManager; // eax
  __int64 v37; // rdx
  int v38; // [rsp+28h] [rbp-E0h]
  int v39; // [rsp+28h] [rbp-E0h]
  int v40; // [rsp+28h] [rbp-E0h]
  int v41; // [rsp+28h] [rbp-E0h]
  int v42; // [rsp+28h] [rbp-E0h]
  struct CPipeInstance **v43; // [rsp+30h] [rbp-D8h]
  struct CPipeInstance **v44; // [rsp+30h] [rbp-D8h]
  struct CPipeInstance **v45; // [rsp+30h] [rbp-D8h]
  CPipeInstance *v46; // [rsp+58h] [rbp-B0h] BYREF
  struct ICrossProcessMemory *v47; // [rsp+60h] [rbp-A8h] BYREF
  struct ICrossProcessEvent *v48; // [rsp+68h] [rbp-A0h] BYREF
  struct IDeviceGraphObjectCache *v49; // [rsp+70h] [rbp-98h] BYREF
  struct tWAVEFORMATEX *v50; // [rsp+78h] [rbp-90h] BYREF
  char *v51; // [rsp+80h] [rbp-88h] BYREF
  struct CAudioHistoryBufferManager *v52[2]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v53[296]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v54; // [rsp+1C0h] [rbp+B8h]
  __int128 v55; // [rsp+1D0h] [rbp+C8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+1E8h] [rbp+E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+340h] [rbp+238h]

  v52[0] = this;
  v8 = AudioDgTelemetryProvider::Provider();
  CPerfTracker::CPerfTracker(&PerformanceCount, v8, "SrvStreamInstance_Create", 0LL);
  v46 = 0LL;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  v51 = (char *)this + 216;
  *((_DWORD *)a4 + 236) = 0;
  if ( *((_DWORD *)a2 + 68) )
  {
    v11 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x126,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)0x8000FFFFLL,
      v38);
    goto LABEL_34;
  }
  v10 = ValidateStreamDescriptor(a2);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x129,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v10,
      v38);
LABEL_84:
    CSAutoLock<1>::~CSAutoLock<1>(&v51);
    ATL::CAutoPtr<CPipeInstance>::Free(&v46);
    goto LABEL_32;
  }
  v54 = *((_OWORD *)a2 + 3);
  v55 = v54;
  EtwEventActivityIdControl(4LL, &v55);
  v12 = 0LL;
  v50 = 0LL;
  v13 = *((_DWORD *)a2 + 70);
  if ( !v13 )
    goto LABEL_6;
  v14 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v13);
  v12 = v14;
  v50 = v14;
  if ( !v14 )
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x132,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)0x8007000ELL,
      v38);
    EtwEventActivityIdControl(4LL, &v55);
LABEL_34:
    if ( this != (CStreamInstance *)-216LL )
      LeaveCriticalSection(v9);
    if ( v46 )
      CPipeInstance::`scalar deleting destructor'(v46, v33);
    goto LABEL_32;
  }
  memcpy_0(v14, *((const void **)a2 + 36), *((unsigned int *)a2 + 70));
LABEL_6:
  v49 = 0LL;
  DeviceGraphObjectCache = GetDeviceGraphObjectCache(
                             *((const unsigned __int16 **)a2 + 18),
                             *((_QWORD *)a2 + 4),
                             *((_DWORD *)a2 + 34) & 1,
                             v12,
                             &v49);
  v11 = DeviceGraphObjectCache;
  if ( DeviceGraphObjectCache < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x137,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)DeviceGraphObjectCache,
      v39);
LABEL_83:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v49);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v50,
      0LL);
    EtwEventActivityIdControl(4LL, &v55);
    goto LABEL_84;
  }
  v16 = v49;
  v17 = CPipeInstance::CreateStreamPipeInstance(v49, a2, 0LL, v12, a4, &v46);
  v11 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13E,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v17,
      v40);
    if ( v16 )
      (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)v16 + 16LL))(v16);
    goto LABEL_45;
  }
  v18 = CPipeInstance::Initialize(v46);
  v11 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13F,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v18,
      v40);
    if ( v16 )
      (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)v16 + 16LL))(v16);
    goto LABEL_45;
  }
  v19 = CPipeInstance::ConnectAPOs(v46, a3);
  v11 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x140,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v19,
      v40);
    if ( v16 )
      (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  else
  {
    v48 = 0LL;
    v47 = 0LL;
    v20 = CPipeInstance::CreateStreamInstance(v46, a2, v16, &v47, &v48, a4);
    v11 = v20;
    if ( v20 >= 0 )
    {
      v21 = v52[0];
      v22 = *((_QWORD *)v52[0] - 1);
      v23 = *((_QWORD *)a2 + 31);
      *(_OWORD *)v52 = *(_OWORD *)((char *)a2 + 156);
      HIDWORD(v43) = HIDWORD(v23);
      v42 = (int)v46;
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v22 + 144))(
              (__int64)v21 - 8,
              *((unsigned int *)a2 + 3),
              *(unsigned int *)a2);
      if ( v11 >= 0 )
      {
        v46 = 0LL;
        if ( !*((_QWORD *)a2 + 31) )
          goto LABEL_13;
        v52[0] = 0LL;
        HistoryBufferManager = GetHistoryBufferManager(v52);
        v11 = HistoryBufferManager;
        if ( HistoryBufferManager >= 0 )
        {
          HistoryBufferManager = CAudioHistoryBufferManager::Add(
                                   v52[0],
                                   *((_QWORD *)a2 + 31),
                                   *((_DWORD *)a2 + 78),
                                   v47);
          v11 = HistoryBufferManager;
          if ( HistoryBufferManager >= 0 )
          {
LABEL_13:
            *((_QWORD *)a4 + 4) = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v21 - 1) + 88LL))((__int64)v21 - 8);
            if ( *((_DWORD *)a2 + 74) == 1
              || (v24 = (*(__int64 (__fastcall **)(struct ICrossProcessMemory *, char *))(*(_QWORD *)v47 + 40LL))(
                          v47,
                          (char *)a4 + 944),
                  v11 = v24,
                  v24 >= 0) )
            {
              if ( !v48 )
              {
                v25 = (_OWORD *)((char *)a4 + 640);
                memset_0(v53, 0, sizeof(v53));
                v27 = v53;
                v28 = 2LL;
                do
                {
                  *v25 = *v27;
                  v25[1] = v27[1];
                  v25[2] = v27[2];
                  v25[3] = v27[3];
                  v25[4] = v27[4];
                  v25[5] = v27[5];
                  v25[6] = v27[6];
                  v25 += 8;
                  *(v25 - 1) = v27[7];
                  v27 += 8;
                  --v28;
                }
                while ( v28 );
                *v25 = *v27;
                v25[1] = v27[1];
                *((_QWORD *)v25 + 4) = *((_QWORD *)v27 + 4);
                goto LABEL_19;
              }
              HistoryBufferManager = (*(__int64 (__fastcall **)(struct ICrossProcessEvent *, char *))(*(_QWORD *)v48 + 32LL))(
                                       v48,
                                       (char *)a4 + 640);
              v11 = HistoryBufferManager;
              if ( HistoryBufferManager >= 0 )
              {
LABEL_19:
                *(float *)&v43 = FLOAT_1_0;
                LOBYTE(v26) = 1;
                TrackSystemEffectBehavior(
                  *((_QWORD *)a2 + 18),
                  1LL,
                  0LL,
                  v26,
                  &GUID_00000000_0000_0000_0000_000000000000,
                  v43);
                *(float *)&v44 = FLOAT_1_0;
                LOBYTE(v29) = 1;
                TrackSystemEffectBehavior(
                  *((_QWORD *)a2 + 18),
                  2LL,
                  0LL,
                  v29,
                  &GUID_00000000_0000_0000_0000_000000000000,
                  v44);
                *(float *)&v45 = FLOAT_1_0;
                LOBYTE(v30) = 1;
                TrackSystemEffectBehavior(
                  *((_QWORD *)a2 + 18),
                  3LL,
                  0LL,
                  v30,
                  &GUID_00000000_0000_0000_0000_000000000000,
                  v45);
                PublishDeviceGraphWnfState();
                if ( v48 )
                  (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v48 + 16LL))(v48);
                if ( v47 )
                  (*(void (__fastcall **)(struct ICrossProcessMemory *))(*(_QWORD *)v47 + 16LL))(v47);
                if ( v16 )
                  (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)v16 + 16LL))(v16);
                if ( v12 )
                  CoTaskMemFree(v12);
                EtwEventActivityIdControl(4LL, &v55);
                if ( v9 )
                  LeaveCriticalSection(v9);
                if ( v46 )
                  CPipeInstance::`scalar deleting destructor'(v46, v31);
                v46 = 0LL;
                v11 = 0;
                goto LABEL_32;
              }
              v37 = 364LL;
              goto LABEL_87;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x164,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
              (const char *)(unsigned int)v24,
              v42);
            if ( v48 )
              (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v48 + 16LL))(v48);
            if ( v47 )
              (*(void (__fastcall **)(struct ICrossProcessMemory *))(*(_QWORD *)v47 + 16LL))(v47);
            if ( v16 )
              (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)v16 + 16LL))(v16);
            goto LABEL_45;
          }
          v37 = 345LL;
        }
        else
        {
          v37 = 343LL;
        }
LABEL_87:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v37,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
          (const char *)(unsigned int)HistoryBufferManager,
          v42);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v48);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v47);
        goto LABEL_83;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14E,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
        (const char *)(unsigned int)v11,
        v42);
      if ( v48 )
        (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v48 + 16LL))(v48);
      if ( v47 )
        (*(void (__fastcall **)(struct ICrossProcessMemory *))(*(_QWORD *)v47 + 16LL))(v47);
      if ( v16 )
        (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)v16 + 16LL))(v16);
LABEL_45:
      if ( v12 )
        CoTaskMemFree(v12);
      EtwEventActivityIdControl(4LL, &v55);
      if ( v9 )
        LeaveCriticalSection(v9);
      if ( v46 )
        CPipeInstance::`scalar deleting destructor'(v46, v34);
      v46 = 0LL;
      goto LABEL_32;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x144,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v20,
      v41);
    if ( v48 )
      (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v48 + 16LL))(v48);
    if ( v47 )
      (*(void (__fastcall **)(struct ICrossProcessMemory *))(*(_QWORD *)v47 + 16LL))(v47);
    if ( v16 )
      (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( v12 )
    CoTaskMemFree(v12);
  EtwEventActivityIdControl(4LL, &v55);
  if ( v9 )
    LeaveCriticalSection(v9);
  if ( v46 )
    CPipeInstance::`scalar deleting destructor'(v46, v35);
  v46 = 0LL;
LABEL_32:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return (unsigned int)v11;
}
