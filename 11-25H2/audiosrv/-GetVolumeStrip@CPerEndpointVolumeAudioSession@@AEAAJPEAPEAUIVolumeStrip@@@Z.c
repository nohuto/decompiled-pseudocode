/*
 * XREFs of ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x18007D0D8
 * Callers:
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x18006D320 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800806F0 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ @ 0x1800885D0 (-Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800C2C30 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18001F790 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x180029FB0 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x18007D32C (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1800C4B94 (WPP_SF_qqq.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPerEndpointVolumeAudioSession::GetVolumeStrip(
        CPerEndpointVolumeAudioSession *this,
        struct IVolumeStrip **a2)
{
  int EndpointVolumeInformation; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  _QWORD *v6; // r14
  struct IVolumeProvider *v7; // rdi
  __int64 (__fastcall *v8)(struct IVolumeProvider *, const unsigned __int16 *, struct IUnknown **); // rbx
  const unsigned __int16 *Buffer; // rax
  struct IUnknown *v10; // rbx
  const unsigned __int16 *v11; // rdx
  struct IUnknown *v13; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+70h] [rbp+18h]

  EndpointVolumeInformation = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 928);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 928));
  v14 = v5;
  v6 = (_QWORD *)((char *)this + 968);
  if ( !*((_QWORD *)this + 121) )
  {
    v13 = 0LL;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 32LL, &WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids, this);
    }
    v7 = g_pVolumeProvider;
    v8 = *(__int64 (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, struct IUnknown **))(*(_QWORD *)g_pVolumeProvider + 40LL);
    Buffer = CAudioEndpointId::GetBuffer((CPerEndpointVolumeAudioSession *)((char *)this + 584));
    EndpointVolumeInformation = v8(v7, Buffer, &v13);
    if ( EndpointVolumeInformation < 0 )
    {
      if ( v13 )
        ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
      goto LABEL_19;
    }
    v10 = v13;
    CAudioEndpointId::GetBuffer((CPerEndpointVolumeAudioSession *)((char *)this + 584));
    EndpointVolumeInformation = CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation(
                                  this,
                                  v11,
                                  (struct IVolumeStrip *)v10);
    if ( EndpointVolumeInformation < 0 )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
LABEL_19:
      AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::GetVolumeStrip", 1652, EndpointVolumeInformation);
      goto LABEL_31;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids, this);
    }
    EndpointVolumeInformation = ((__int64 (__fastcall *)(struct IUnknown *, unsigned __int64))v13->lpVtbl[9].Release)(
                                  v13,
                                  ((unsigned __int64)this + 920) & -(__int64)(this != 0LL));
    if ( EndpointVolumeInformation < 0 )
    {
      if ( v13 )
        ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
      goto LABEL_19;
    }
    if ( (struct IUnknown *)*v6 != v13 )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 121, v13);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
  }
  if ( a2 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qqq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        34LL,
        &WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids,
        this,
        *v6,
        a2);
    }
    *a2 = (struct IVolumeStrip *)*v6;
    if ( *v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 8LL))(*v6);
    EndpointVolumeInformation = 0;
  }
LABEL_31:
  if ( v5 )
    LeaveCriticalSection(v5);
  return (unsigned int)EndpointVolumeInformation;
}
