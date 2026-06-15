/*
 * XREFs of ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14002E5E8
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002E470 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14004F470 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?RemoveConnections@CConnectionInstance@@QEAAXPEAUIAudioProcessor@@_K@Z @ 0x140006DBC (-RemoveConnections@CConnectionInstance@@QEAAXPEAUIAudioProcessor@@_K@Z.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140006DF0 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddConnections@CConnectionInstance@@QEAAJPEAUIAudioProcessor@@_K@Z @ 0x14002E940 (-AddConnections@CConnectionInstance@@QEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     ?SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14002F970 (-SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Window.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140032A94 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140035A70 (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPipeInstance::AddConnectionsAndActivateAPOs(
        CPipeInstance *this,
        struct Windows::Media::Devices::IAudioDeviceModulesManager *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  CConnectionInstance *v9; // rcx
  int v10; // eax
  unsigned int v11; // r14d
  __int64 *v12; // rcx
  unsigned __int64 v13; // rdi
  __int64 **Prev; // rax
  CConnectionInstance **Next; // rax
  int v17; // eax
  unsigned int v18; // esi
  int v19; // eax
  int v20; // eax
  __int64 *v21; // rcx
  unsigned __int64 v22; // rdi
  __int64 **v23; // rax
  CConnectionInstance **v24; // rax
  __int64 *v25; // rcx
  __int64 **v26; // rax
  CConnectionInstance **v27; // rax
  __int64 *v28; // rcx
  __int64 **v29; // rax
  CConnectionInstance **v30; // rax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned __int64 v32; // [rsp+80h] [rbp+30h] BYREF
  __int64 v33; // [rsp+90h] [rbp+40h] BYREF
  __int64 v34; // [rsp+98h] [rbp+48h] BYREF

  v32 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 19) + 32LL))(
         *((_QWORD *)this + 19),
         &v32);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB53,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    v6 = *((_QWORD *)this + 9);
    while ( v6 )
    {
      v7 = *(_QWORD **)(v6 + 16);
      v6 = *(_QWORD *)(v6 + 8);
      v8 = (_QWORD *)*v7;
      while ( v8 )
      {
        v9 = (CConnectionInstance *)v8[2];
        v8 = (_QWORD *)*v8;
        v10 = CConnectionInstance::AddConnections(v9, *((struct IAudioProcessor **)this + 19), v32);
        v11 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB62,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
            (const char *)(unsigned int)v10);
          v13 = v32;
          v34 = *((_QWORD *)this + 9);
          if ( v34 )
          {
            do
            {
              Prev = (__int64 **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(v12, &v34);
              v12 = *Prev;
              v33 = **Prev;
              while ( v33 )
              {
                Next = (CConnectionInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                                 v12,
                                                 &v33);
                CConnectionInstance::RemoveConnections(*Next, *((struct IAudioProcessor **)this + 19), v13);
              }
            }
            while ( v34 );
            v13 = v32;
          }
          (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 19) + 48LL))(
            *((_QWORD *)this + 19),
            v13);
          return v11;
        }
      }
    }
    v17 = CPipeInstance::SetModulesManagerOnAPOs(this, a2);
    v18 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB67,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)(unsigned int)v17);
      v22 = v32;
      v34 = *((_QWORD *)this + 9);
      if ( v34 )
      {
        do
        {
          v23 = (__int64 **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(v21, &v34);
          v21 = *v23;
          v33 = **v23;
          while ( v33 )
          {
            v24 = (CConnectionInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                            v21,
                                            &v33);
            CConnectionInstance::RemoveConnections(*v24, *((struct IAudioProcessor **)this + 19), v22);
          }
        }
        while ( v34 );
        v22 = v32;
      }
    }
    else
    {
      v19 = CPipeInstance::ActivateAPOs(this, v32);
      v18 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB6A,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v19);
        v22 = v32;
        v34 = *((_QWORD *)this + 9);
        if ( v34 )
        {
          do
          {
            v26 = (__int64 **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(v25, &v34);
            v25 = *v26;
            v33 = **v26;
            while ( v33 )
            {
              v27 = (CConnectionInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                              v25,
                                              &v33);
              CConnectionInstance::RemoveConnections(*v27, *((struct IAudioProcessor **)this + 19), v22);
            }
          }
          while ( v34 );
          v22 = v32;
        }
      }
      else
      {
        v20 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 19) + 40LL))(
                *((_QWORD *)this + 19),
                v32);
        v18 = v20;
        if ( v20 >= 0 )
        {
          *((_DWORD *)this + 29) = 1;
          return 0LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB6C,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v20);
        v22 = v32;
        v34 = *((_QWORD *)this + 9);
        if ( v34 )
        {
          do
          {
            v29 = (__int64 **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(v28, &v34);
            v28 = *v29;
            v33 = **v29;
            while ( v33 )
            {
              v30 = (CConnectionInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                              v28,
                                              &v33);
              CConnectionInstance::RemoveConnections(*v30, *((struct IAudioProcessor **)this + 19), v22);
            }
          }
          while ( v34 );
          v22 = v32;
        }
      }
    }
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19), v22);
    return v18;
  }
}
