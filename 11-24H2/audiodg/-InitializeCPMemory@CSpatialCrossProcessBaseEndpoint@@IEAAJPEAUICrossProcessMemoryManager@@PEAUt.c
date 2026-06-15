/*
 * XREFs of ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14008E55C
 * Callers:
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x140090820 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x140008004 (--4-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@A.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400089AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000EDB0 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14000F110 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??4?$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x140015D50 (--4-$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x140018FCC (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ??$copy_to@UICrossProcessEvent@@@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICrossProcessEvent@@@Z @ 0x140042C08 (--$copy_to@UICrossProcessEvent@@@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@w.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     memcpy_0 @ 0x14005B481 (memcpy_0.c)
 *     ??$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@3@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@0@@Z @ 0x14008D724 (--$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@-$AtomicObjBase@UClockingSec.c)
 *     ??$make_unique@VSpatialBlock@@$$V$0A@@std@@YA?AV?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@0@XZ @ 0x14008D8A4 (--$make_unique@VSpatialBlock@@$$V$0A@@std@@YA-AV-$unique_ptr@VSpatialBlock@@U-$default_delete@VS.c)
 *     ??1?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@std@@QEAA@XZ @ 0x14008DAAC (--1-$unique_ptr@VSpatialBlock@@U-$default_delete@VSpatialBlock@@@std@@@std@@QEAA@XZ.c)
 *     ?Create@SpatialBlock@@QEAAJPEAEIIIII@Z @ 0x14008DCB4 (-Create@SpatialBlock@@QEAAJPEAEIIIII@Z.c)
 *     ?GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z @ 0x14008E18C (-GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z.c)
 *     ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUSpatialControlData@@@Z @ 0x14008F03C (-ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUSpatialControlData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSpatialCrossProcessBaseEndpoint::InitializeCPMemory(
        CSpatialCrossProcessBaseEndpoint *this,
        struct ICrossProcessMemoryManager *a2,
        struct tWAVEFORMATEX *a3,
        char *a4,
        unsigned int a5,
        unsigned int a6,
        DWORD a7,
        unsigned int a8,
        unsigned int a9,
        struct ICrossProcessMemory **a10)
{
  unsigned int v11; // r15d
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  unsigned __int64 v14; // rsi
  int MemoryRequirement; // eax
  unsigned int v16; // ebx
  __int64 result; // rax
  DWORD v18; // r14d
  __int64 (__fastcall *v19)(struct ICrossProcessMemoryManager *, _QWORD, __int64 *); // rbx
  int v20; // eax
  unsigned int v21; // ebx
  const char *v22; // r9
  int v23; // eax
  unsigned int v24; // ebx
  int v25; // eax
  unsigned int v26; // ebx
  char *v27; // rsi
  volatile __int32 *v28; // rcx
  __int64 *v29; // rax
  _OWORD *v30; // r11
  int v31; // eax
  unsigned int v32; // ebx
  _OWORD *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  SpatialBlock *v36; // rax
  __int64 v37; // [rsp+40h] [rbp-78h] BYREF
  SpatialBlock *v38; // [rsp+48h] [rbp-70h] BYREF
  PVOID pvAddress; // [rsp+50h] [rbp-68h] BYREF
  std::_Ref_count_base *v40[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v41; // [rsp+68h] [rbp-50h] BYREF
  std::_Ref_count_base *v42; // [rsp+70h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v11 = a6;
  v12 = a7;
  v13 = a6 + a7;
  if ( a6 + a7 < a6 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)0x80070216LL);
    return 2147942934LL;
  }
  v14 = 4LL * a5;
  if ( v14 > 0xFFFFFFFF )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)0x80070216LL);
    return 2147942934LL;
  }
  a6 = 0;
  MemoryRequirement = SpatialBlock::GetMemoryRequirement(v14, a8, a9, v13, &a6);
  v16 = MemoryRequirement;
  if ( MemoryRequirement < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)(unsigned int)MemoryRequirement);
    return v16;
  }
  v18 = a6 + 832;
  if ( a6 >= 0xFFFFFCC0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)0x80070216LL);
    return 2147942934LL;
  }
  v37 = 0LL;
  v19 = *(__int64 (__fastcall **)(struct ICrossProcessMemoryManager *, _QWORD, __int64 *))(*(_QWORD *)a2 + 32LL);
  wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset(&v37);
  try
  {
    v20 = v19(a2, v18, &v37);
    v21 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)(unsigned int)v20);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v37);
      return v21;
    }
    a7 = 0;
    pvAddress = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64, DWORD *, PVOID *))(*(_QWORD *)v37 + 32LL))(v37, &a7, &pvAddress);
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)(unsigned int)v23);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v37);
      return v24;
    }
    if ( a7 < v18 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)0x8007000ELL);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v37);
      return 2147942414LL;
    }
    std::make_unique<SpatialBlock,,0>(&v38);
    if ( !v38 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)0x8007000ELL);
      std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>(&v38);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v37);
      return 2147942414LL;
    }
    v25 = SpatialBlock::Create(v38, (unsigned __int8 *)pvAddress + 832, a6, v14, a8, a9, v13);
    v26 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x50,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)(unsigned int)v25);
      std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>(&v38);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v37);
      return v26;
    }
    v27 = (char *)pvAddress;
    *((_QWORD *)this + 163) = (char *)pvAddress + 8;
    *(_DWORD *)v27 = 806;
    *((_DWORD *)v27 + 1) = 1396785988;
    memset_0(*((void **)this + 163), 0, 0x4CuLL);
    v28 = (volatile __int32 *)(*((_QWORD *)this + 163) + 40LL);
    *((_QWORD *)this + 89) = v28;
    _InterlockedExchange(v28, 6);
    *(_OWORD *)v40 = 0LL;
    v29 = util::MakeAtomicObj<ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
            &v41,
            (__int64)(v27 + 84));
    std::shared_ptr<CSerialWorkQueue>::operator=(v40, v29);
    if ( v42 )
      std::_Ref_count_base::_Decref(v42);
    if ( !v40[0] )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x60,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)0x8007000ELL);
      if ( v40[1] )
        std::_Ref_count_base::_Decref(v40[1]);
      std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>(&v38);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v37);
      return 2147942414LL;
    }
    if ( a3->cbSize > 0x100u )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x63,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)0x80070057LL);
      if ( v40[1] )
        std::_Ref_count_base::_Decref(v40[1]);
      std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>(&v38);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v37);
      return 2147942487LL;
    }
    memcpy_0((char *)this + 300, a3, a3->cbSize + 18LL);
    *((_DWORD *)this + 71) = a5;
    *((_DWORD *)this + 72) = v11;
    *((_DWORD *)this + 73) = v12;
    *((_DWORD *)this + 74) = v18;
    v30 = (_OWORD *)((char *)this + 156);
    if ( a4 && (v31 = StringCchCopyW((char *)this + 156, 64LL, a4), v32 = v31, v31 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)(unsigned int)v31);
      if ( !v40[1] )
      {
LABEL_31:
        std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>(&v38);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v37);
        return v32;
      }
    }
    else
    {
      v33 = v27 + 388;
      v34 = 3LL;
      do
      {
        *v33 = *v30;
        v33[1] = v30[1];
        v33[2] = v30[2];
        v33[3] = v30[3];
        v33[4] = v30[4];
        v33[5] = v30[5];
        v33[6] = v30[6];
        v33 += 8;
        *(v33 - 1) = v30[7];
        v30 += 8;
        --v34;
      }
      while ( v34 );
      *v33 = *v30;
      v33[1] = v30[1];
      *((_WORD *)v33 + 16) = *((_WORD *)v30 + 16);
      v35 = CSpatialCrossProcessBaseEndpoint::ValidateControlData(this, (const struct SpatialControlData *)v27);
      v32 = v35;
      if ( v35 >= 0 )
      {
        WerRegisterMemoryBlock(v27, v18);
        wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((__int64 *)this + 11, v37);
        v36 = v38;
        v38 = 0LL;
        *((_QWORD *)this + 164) = v36;
        std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::operator=((_QWORD *)this + 90, v40);
        wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::copy_to<ICrossProcessEvent>(&v37, a10);
        if ( v40[1] )
          std::_Ref_count_base::_Decref(v40[1]);
        std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>(&v38);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v37);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x73,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)(unsigned int)v35);
      if ( !v40[1] )
        goto LABEL_31;
    }
    std::_Ref_count_base::_Decref(v40[1]);
    goto LABEL_31;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x88,
                           (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
                           v22);
  }
  return result;
}
