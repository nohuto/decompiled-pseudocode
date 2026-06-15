/*
 * XREFs of ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14008F138
 * Callers:
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z @ 0x14008FC40 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x140007FD4 (--4-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@A.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14000897C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x140015EC0 (--4-$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??_GSpatialBlock@@QEAAPEAXI@Z @ 0x14008999C (--_GSpatialBlock@@QEAAPEAXI@Z.c)
 *     ?RegisterErrorEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXW4SpatialCpErrorEvent@@I@Z @ 0x14008DAF4 (-RegisterErrorEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXW4SpatialCpErrorEvent@@I@Z.c)
 *     ??$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@3@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@0@@Z @ 0x14008DCA4 (--$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@-$AtomicObjBase@UClockingSec.c)
 *     ??$make_unique@VSpatialBlock@@$$V$0A@@std@@YA?AV?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@0@XZ @ 0x14008DE24 (--$make_unique@VSpatialBlock@@$$V$0A@@std@@YA-AV-$unique_ptr@VSpatialBlock@@U-$default_delete@VS.c)
 *     ??1?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@std@@QEAA@XZ @ 0x14008E02C (--1-$unique_ptr@VSpatialBlock@@U-$default_delete@VSpatialBlock@@@std@@@std@@QEAA@XZ.c)
 *     ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x14008E9B4 (-Initialize@SpatialBlock@@QEAAJPEAEI@Z.c)
 *     ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUSpatialControlData@@@Z @ 0x14008F5BC (-ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUSpatialControlData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSpatialCrossProcessBaseEndpoint::MapCPMemory(
        CSpatialCrossProcessBaseEndpoint *this,
        struct ICrossProcessMemory *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  struct SpatialControlData *v6; // rdi
  volatile __int32 *v7; // rcx
  int v8; // eax
  unsigned int v9; // esi
  _OWORD *v10; // rcx
  _OWORD *v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rax
  SpatialBlock *v14; // rcx
  SpatialBlock *v15; // r14
  std::_Ref_count_base *v16[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  std::_Ref_count_base *v18; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v20; // [rsp+78h] [rbp+38h] BYREF
  SpatialBlock *v21; // [rsp+80h] [rbp+40h] BYREF
  struct SpatialControlData *v22; // [rsp+88h] [rbp+48h] BYREF

  v20 = 0;
  v22 = 0LL;
  v3 = (*(__int64 (__fastcall **)(struct ICrossProcessMemory *, int *, struct SpatialControlData **))(*(_QWORD *)a2 + 32LL))(
         a2,
         &v20,
         &v22);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x97,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  v6 = v22;
  v7 = (volatile __int32 *)((char *)v22 + 48);
  *((_QWORD *)this + 89) = (char *)v22 + 48;
  _InterlockedExchange(v7, 6);
  v8 = CSpatialCrossProcessBaseEndpoint::ValidateControlData(this, v6);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9E,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  v10 = (_OWORD *)((char *)this + 156);
  v11 = (_OWORD *)((char *)v6 + 388);
  v12 = 3LL;
  do
  {
    *v10 = *v11;
    v10[1] = v11[1];
    v10[2] = v11[2];
    v10[3] = v11[3];
    v10[4] = v11[4];
    v10[5] = v11[5];
    v10[6] = v11[6];
    v10 += 8;
    *(v10 - 1) = v11[7];
    v11 += 8;
    --v12;
  }
  while ( v12 );
  *v10 = *v11;
  v10[1] = v11[1];
  *((_WORD *)v10 + 16) = *((_WORD *)v11 + 16);
  *(_OWORD *)v16 = 0LL;
  v13 = util::MakeAtomicObj<ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
          &v17,
          (__int64)v6 + 84);
  std::shared_ptr<CSerialWorkQueue>::operator=(v16, v13);
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  if ( !v16[0] )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)0x8007000ELL);
LABEL_16:
    if ( v16[1] )
      std::_Ref_count_base::_Decref(v16[1]);
    return 2147942414LL;
  }
  v14 = (SpatialBlock *)*((_QWORD *)this + 164);
  if ( v14 )
    SpatialBlock::`scalar deleting destructor'(v14);
  *((_QWORD *)this + 164) = 0LL;
  std::make_unique<SpatialBlock,,0>(&v21);
  v15 = v21;
  if ( !v21 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)0x8007000ELL);
    std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>(&v21);
    goto LABEL_16;
  }
  v9 = SpatialBlock::Initialize(v21, (unsigned __int8 *)v6 + 832, *((_DWORD *)v6 + 132) - 832);
  if ( v9 == -2005139387 )
  {
    CSpatialCrossProcessEndpointTraceLogger::RegisterErrorEvent((__int64)this + 784, 1LL);
    goto LABEL_22;
  }
  if ( (v9 & 0x80000000) != 0 )
  {
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB7,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)v9);
    std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>(&v21);
    if ( v16[1] )
      std::_Ref_count_base::_Decref(v16[1]);
    return v9;
  }
  *((_QWORD *)this + 163) = (char *)v6 + 8;
  std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::operator=((_QWORD *)this + 90, v16);
  v21 = 0LL;
  *((_QWORD *)this + 164) = v15;
  std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>(&v21);
  if ( v16[1] )
    std::_Ref_count_base::_Decref(v16[1]);
  return 0LL;
}
