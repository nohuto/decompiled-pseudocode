/*
 * XREFs of ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140003144
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140004878 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?InitializeVolumeInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x1400034F4 (-InitializeVolumeInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeMeterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@I@Z @ 0x140003680 (-InitializeMeterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@I@Z.c)
 *     ?SetConnectionFrameCount@CConnectionInstance@@QEAAJIPEAI@Z @ 0x140003838 (-SetConnectionFrameCount@CConnectionInstance@@QEAAJIPEAI@Z.c)
 *     ?InitializeDitherInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140003A44 (-InitializeDitherInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140003B4C (-InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObje.c)
 *     ?InitializeLimiterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140003EB4 (-InitializeLimiterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeMatrixInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000404C (-InitializeMatrixInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeLoopbackConstrictorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140004284 (-InitializeLoopbackConstrictorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessi.c)
 *     ?InitializePlaybackConstrictorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140004314 (-InitializePlaybackConstrictorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessi.c)
 *     ?InitializeSpatializerInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x1400043A4 (-InitializeSpatializerInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject.c)
 *     ?InitializeASARInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x1400044B0 (-InitializeASARInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeSilenceMonitorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x1400045A4 (-InitializeSilenceMonitorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObj.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::InitializeAPOInterfaces(CPipeInstance *this)
{
  CPipeInstance *v2; // rcx
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rsi
  struct IAudioProcessingObject *v6; // rbx
  int v7; // eax
  CPipeInstance *v8; // rcx
  unsigned int v9; // ebp
  int v10; // eax
  struct CProcessNode *v11; // rdx
  CPipeInstance *v12; // rcx
  int v13; // eax
  CPipeInstance *v14; // rcx
  int v15; // ebp
  int v16; // eax
  struct CProcessNode *v17; // rdx
  unsigned int v18; // esi
  int v19; // eax
  struct CProcessNode *v20; // rdx
  int v21; // eax
  struct CProcessNode *v22; // rdx
  int v23; // eax
  struct CProcessNode *v24; // rdx
  struct CProcessNode *v25; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // rbx
  CConnectionInstance *v28; // rcx
  int v29; // eax
  __int64 v31; // rdx
  __int64 v32; // rdx
  int v33; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v35; // [rsp+50h] [rbp+8h] BYREF
  struct IAudioProcessingObject *v36; // [rsp+58h] [rbp+10h] BYREF

  v35 = *((_DWORD *)this + 37);
  v2 = (CPipeInstance *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
  }
  v3 = *((_QWORD *)this + 9);
  v4 = *((_QWORD *)this + 3);
  while ( 1 )
  {
    if ( !v3 )
    {
      *((_DWORD *)this + 36) = v35;
      return 0LL;
    }
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 16);
      v4 = *(_QWORD *)(v4 + 8);
      if ( *(_DWORD *)(v5 + 40) == 2 )
        break;
    }
LABEL_22:
    v26 = *(_QWORD **)(v3 + 16);
    v3 = *(_QWORD *)(v3 + 8);
    v27 = (_QWORD *)*v26;
    while ( v27 )
    {
      v28 = (CConnectionInstance *)v27[2];
      v27 = (_QWORD *)*v27;
      v29 = CConnectionInstance::SetConnectionFrameCount(v28, v35, &v35);
      v18 = v29;
      if ( v29 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFD5,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v29,
          v33);
        return v18;
      }
    }
  }
  v6 = *(struct IAudioProcessingObject **)(*(_QWORD *)(v5 + 32) + 40LL);
  v36 = v6;
  if ( v6 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v6->lpVtbl->AddRef)(v6);
  v7 = CPipeInstance::InitializeVolumeInterface(v2, (struct CProcessNode *)v5, v6);
  v9 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC1,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v7,
      v33);
    if ( v6 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v6->lpVtbl->Release)(v6);
    return v9;
  }
  v10 = CPipeInstance::InitializeMeterInterface(v8, (struct CProcessNode *)v5, v6, v35);
  v9 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC2,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v10,
      v33);
    if ( v6 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v6->lpVtbl->Release)(v6);
    return v9;
  }
  v13 = CPipeInstance::InitializeDitherInterface(v12, v11, v6);
  v9 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC3,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v13,
      v33);
    if ( v6 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v6->lpVtbl->Release)(v6);
    return v9;
  }
  v15 = CPipeInstance::InitializeRateConverterInterface(this, (struct CProcessNode *)v5, v6);
  if ( v15 < 0 )
  {
    v32 = 4036LL;
LABEL_53:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v15,
      v33);
    v18 = v15;
    goto LABEL_54;
  }
  v15 = CPipeInstance::InitializeMatrixInterface(v14, (struct CProcessNode *)v5, v6);
  if ( v15 < 0 )
  {
    v32 = 4037LL;
    goto LABEL_53;
  }
  v16 = CPipeInstance::InitializeLimiterInterface(this, (struct CProcessNode *)v5, v6);
  v18 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC6,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v16,
      v33);
    if ( v6 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v6->lpVtbl->Release)(v6);
    return v18;
  }
  v19 = CPipeInstance::InitializeLoopbackConstrictorInterface(this, v17, v6);
  v18 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC7,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v19,
      v33);
    if ( v6 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v6->lpVtbl->Release)(v6);
    return v18;
  }
  v21 = CPipeInstance::InitializePlaybackConstrictorInterface(this, v20, v6);
  v18 = v21;
  if ( v21 >= 0 )
  {
    v23 = CPipeInstance::InitializeSilenceMonitorInterface(this, v22, v6);
    v18 = v23;
    if ( v23 < 0 )
    {
      v31 = 4041LL;
    }
    else
    {
      v23 = CPipeInstance::InitializeSpatializerInterface(this, v24, v6);
      v18 = v23;
      if ( v23 < 0 )
      {
        v31 = 4042LL;
      }
      else
      {
        v23 = CPipeInstance::InitializeASARInterface(this, v25, v6);
        v18 = v23;
        if ( v23 >= 0 )
        {
          if ( v6 )
            ((void (__fastcall *)(struct IAudioProcessingObject *))v6->lpVtbl->Release)(v6);
          goto LABEL_22;
        }
        v31 = 4043LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v23,
      v33);
LABEL_54:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v36);
    return v18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFC8,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)(unsigned int)v21,
    v33);
  if ( v6 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v6->lpVtbl->Release)(v6);
  return v18;
}
