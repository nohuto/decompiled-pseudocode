/*
 * XREFs of ?CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140049140
 * Callers:
 *     <none>
 * Callees:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x1400048A8 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?GetDeviceGraphObjectCache@@YAJPEBG_JHPEAUtWAVEFORMATEX@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x140005904 (-GetDeviceGraphObjectCache@@YAJPEBG_JHPEAUtWAVEFORMATEX@@PEAPEAUIDeviceGraphObjectCache@@@Z.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000FF08 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027718 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x1400277DC (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400295F4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?ValidateAudioStreamDirection@@YAJW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x1400494C8 (-ValidateAudioStreamDirection@@YAJW4SYSTEM_AUDIO_STREAM_TYPE@@@Z.c)
 *     memcpy_0 @ 0x14005B481 (memcpy_0.c)
 *     ?CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14006BD54 (-CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBR.c)
 *     ?CreateBridgeToApo@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14006C0C4 (-CreateBridgeToApo@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstance::CreateBridgeStreamToTargetStreamGroup(
        CStreamInstance *this,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IStreamGroup *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // r14
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, struct IAudioProcessingObject **); // rdi
  int v14; // eax
  struct tWAVEFORMATEX *v15; // rbx
  void *v16; // rax
  unsigned int v17; // edi
  int DeviceGraphObjectCache; // eax
  struct CPipeInstance *v19; // r9
  __int64 v20; // rdx
  CPipeInstance *v21; // rbx
  struct SYSTEM_AUDIO_STREAM *v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r9
  unsigned int v26; // edx
  struct SYSTEM_AUDIO_STREAM *v27; // [rsp+28h] [rbp-58h]
  void *v28; // [rsp+50h] [rbp-30h] BYREF
  CPipeInstance *v29; // [rsp+58h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+60h] [rbp-20h] BYREF
  __int128 v31; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  struct IDeviceGraphObjectCache *v33; // [rsp+B0h] [rbp+30h] BYREF
  struct IAudioProcessingObject *v34; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+48h] BYREF

  v29 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  v30 = v8;
  *((_DWORD *)a4 + 236) = 0;
  if ( !a2 )
  {
    v10 = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x232,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v10);
LABEL_5:
    if ( v8 )
      LeaveCriticalSection(v8);
    return (unsigned int)v10;
  }
  v10 = ValidateAudioStreamDirection(*(unsigned int *)a2, v9);
  if ( v10 < 0 )
    goto LABEL_4;
  v34 = 0LL;
  v35 = 0LL;
  (**(void (__fastcall ***)(struct IStreamGroup *, GUID *, __int64 *))a3)(
    a3,
    &GUID_78c8e80a_c79b_465b_be08_cd0c3ec0edda,
    &v35);
  v12 = v35;
  if ( v35 )
  {
    v13 = *(__int64 (__fastcall **)(__int64, struct IAudioProcessingObject **))(*(_QWORD *)v35 + 24LL);
    if ( v34 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v34->lpVtbl->Release)(v34);
    v14 = v13(v12, &v34);
    v10 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23A,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
        (const char *)(unsigned int)v14);
      if ( v35 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      if ( v34 )
        ((void (__fastcall *)(struct IAudioProcessingObject *))v34->lpVtbl->Release)(v34);
      goto LABEL_5;
    }
  }
  if ( v34 )
  {
    v15 = 0LL;
    v28 = 0LL;
    if ( *((_DWORD *)a2 + 17) )
    {
      v16 = CoTaskMemAlloc(*((unsigned int *)a2 + 17));
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v28,
        v16);
      v15 = (struct tWAVEFORMATEX *)v28;
      if ( !v28 )
      {
        v17 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x243,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
          (const char *)0x8007000ELL);
LABEL_35:
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &v28,
          0LL);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v35);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v34);
        CSAutoLock<1>::~CSAutoLock<1>(&v30);
        ATL::CAutoPtr<CPipeInstance>::Free(&v29, v26);
        return v17;
      }
      memcpy_0(v28, *((const void **)a2 + 9), *((unsigned int *)a2 + 17));
    }
    v33 = 0LL;
    DeviceGraphObjectCache = GetDeviceGraphObjectCache(
                               *((const unsigned __int16 **)a2 + 7),
                               *((_QWORD *)a2 + 6),
                               *((_DWORD *)a2 + 2) == 1,
                               v15,
                               &v33);
    v17 = DeviceGraphObjectCache;
    if ( DeviceGraphObjectCache < 0 )
    {
      v20 = 584LL;
LABEL_34:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
        (const char *)(unsigned int)DeviceGraphObjectCache);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v33);
      goto LABEL_35;
    }
    DeviceGraphObjectCache = CPipeInstance::CreateBridgeStreamPipeInstanceToTargetApo(v33, a2, v34, v19, v15, v27, &v29);
    v17 = DeviceGraphObjectCache;
    if ( DeviceGraphObjectCache < 0 )
    {
      v20 = 593LL;
      goto LABEL_34;
    }
    v21 = v29;
    DeviceGraphObjectCache = CPipeInstance::Initialize(v29);
    v17 = DeviceGraphObjectCache;
    if ( DeviceGraphObjectCache < 0 )
    {
      v20 = 595LL;
      goto LABEL_34;
    }
    DeviceGraphObjectCache = CPipeInstance::ConnectAPOs(v21, 0LL);
    v17 = DeviceGraphObjectCache;
    if ( DeviceGraphObjectCache < 0 )
    {
      v20 = 596LL;
      goto LABEL_34;
    }
    DeviceGraphObjectCache = CPipeInstance::CreateBridgeToApo(v21, a2, v34, v22);
    v17 = DeviceGraphObjectCache;
    if ( DeviceGraphObjectCache < 0 )
    {
      v20 = 597LL;
      goto LABEL_34;
    }
    v23 = *((_QWORD *)this - 1);
    v24 = *((_QWORD *)a2 + 3);
    v25 = *((_QWORD *)a2 + 6);
    v31 = *((_OWORD *)a2 + 2);
    DeviceGraphObjectCache = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, CPipeInstance *, CPipeInstance *, _QWORD, __int64, __int128 *, __int64))(v23 + 144))(
                               (char *)this - 8,
                               0LL,
                               *(unsigned int *)a2,
                               v21,
                               v21,
                               0LL,
                               v25,
                               &v31,
                               v24);
    v17 = DeviceGraphObjectCache;
    if ( DeviceGraphObjectCache < 0 )
    {
      v20 = 607LL;
      goto LABEL_34;
    }
    *((_BYTE *)this + 256) = 1;
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v33);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v28,
      0LL);
  }
  PublishDeviceGraphWnfState();
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v34 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v34->lpVtbl->Release)(v34);
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
