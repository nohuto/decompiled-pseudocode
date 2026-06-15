/*
 * XREFs of ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x1400295C0
 * Callers:
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x14002AA70 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x14002AB2C (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14004D7B0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     ?Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ @ 0x140072CA0 (-Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ.c)
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400298F4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x140029CB8 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x14003ACD8 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x140065A40 (WPP_SF_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSystemAudioDeviceSharedBase::Cleanup(CSystemAudioDeviceSharedBase *this)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(_OWORD *)((char *)this + 104);
  EtwEventActivityIdControl(4LL, &v4);
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_14fbdab4759831348651410bb2c6c307_Traceguids);
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 49) )
  {
    CSystemAudioDeviceCollection::Remove(this);
    *((_DWORD *)this + 49) = 0;
    v2 = WPP_GLOBAL_Control;
  }
  if ( !*((_QWORD *)this + 23) )
    goto LABEL_5;
  if ( !*((_DWORD *)this + 48) )
    goto LABEL_8;
  if ( v2 != &WPP_GLOBAL_Control && (*((_DWORD *)v2 + 7) & 0x200) != 0 && *((_BYTE *)v2 + 25) >= 4u )
    WPP_SF_(v2[2], 12LL, &WPP_14fbdab4759831348651410bb2c6c307_Traceguids);
  if ( (int)CSystemAudioDeviceSharedBase::SetGraphState(this, 0LL) >= 0 )
    goto LABEL_29;
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_14fbdab4759831348651410bb2c6c307_Traceguids);
LABEL_29:
    v2 = WPP_GLOBAL_Control;
  }
LABEL_8:
  v3 = *((_QWORD *)this + 23);
  if ( v3 )
  {
    *((_QWORD *)this + 23) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v2 = WPP_GLOBAL_Control;
  }
  if ( v2 != &WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)v2 + 7) & 0x200) != 0 && *((_BYTE *)v2 + 25) >= 4u )
    {
      WPP_SF_(v2[2], 14LL, &WPP_14fbdab4759831348651410bb2c6c307_Traceguids);
      v2 = WPP_GLOBAL_Control;
    }
LABEL_5:
    if ( v2 != &WPP_GLOBAL_Control && (*((_DWORD *)v2 + 7) & 0x200) != 0 && *((_BYTE *)v2 + 25) >= 4u )
      WPP_SF_(v2[2], 15LL, &WPP_14fbdab4759831348651410bb2c6c307_Traceguids);
  }
  PublishDeviceGraphWnfState();
  EtwEventActivityIdControl(4LL, &v4);
}
