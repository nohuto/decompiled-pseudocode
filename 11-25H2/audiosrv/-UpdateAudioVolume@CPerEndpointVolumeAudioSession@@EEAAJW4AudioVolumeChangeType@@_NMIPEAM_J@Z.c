/*
 * XREFs of ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x18006D320
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x18000F2C8 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x18007D0D8 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_dg @ 0x1800C4774 (WPP_SF_dg.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::UpdateAudioVolume(
        CPerEndpointVolumeAudioSession *a1,
        int a2,
        unsigned __int8 a3,
        float a4,
        unsigned int a5,
        float *a6)
{
  unsigned int v6; // esi
  int VolumeStrip; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  _QWORD **v13; // rbp
  __int64 v14; // r8
  unsigned int v15; // ebx
  unsigned int v16; // esi
  float *v17; // rdi
  _QWORD *v18; // rcx
  int v19; // eax
  struct IVolumeStrip *v20[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v22; // [rsp+78h] [rbp+10h] BYREF

  v6 = a3;
  CAudioSession::SetVolumeAllStreams((__int64)a1, a2, 0, 1.0, 0, 0LL);
  if ( (unsigned int)(a2 - 2) <= 1 )
    return 0LL;
  v20[0] = 0LL;
  VolumeStrip = CPerEndpointVolumeAudioSession::GetVolumeStrip(a1, v20);
  v11 = VolumeStrip;
  if ( VolumeStrip >= 0 )
  {
    v13 = (_QWORD **)((char *)a1 + 264);
    VolumeStrip = (*(__int64 (__fastcall **)(struct IVolumeStrip *, _QWORD, _QWORD **, _QWORD))(*(_QWORD *)v20[0] + 144LL))(
                    v20[0],
                    v6,
                    (_QWORD **)a1 + 33,
                    0LL);
    v11 = VolumeStrip;
    if ( VolumeStrip >= 0 )
    {
      v22 = 0;
      VolumeStrip = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *))(**((_QWORD **)a1 + 121) + 48LL))(
                      *((_QWORD **)a1 + 121),
                      &v22);
      v11 = VolumeStrip;
      if ( VolumeStrip >= 0 )
      {
        v15 = 0;
        v16 = a5;
        if ( a5 )
        {
          v17 = a6;
          v18 = WPP_GLOBAL_Control;
          do
          {
            if ( v18 != &WPP_GLOBAL_Control && (*((_DWORD *)v18 + 7) & 0x200000) != 0 && *((_BYTE *)v18 + 25) >= 4u )
            {
              WPP_SF_dg(v18[2], 70LL, &WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids, v15, (float)(a4 * *v17));
              v18 = WPP_GLOBAL_Control;
            }
            if ( v15 < v22 )
            {
              v19 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, _QWORD, __int64, _QWORD **))(*(_QWORD *)v20[0]
                                                                                                 + 96LL))(
                      v20[0],
                      v15,
                      v14,
                      v13);
              if ( v19 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x1105,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                  (const char *)(unsigned int)v19,
                  0);
              v18 = WPP_GLOBAL_Control;
            }
            ++v15;
            ++v17;
          }
          while ( v15 < v16 );
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v20);
        return 0LL;
      }
      v12 = 4348LL;
    }
    else
    {
      v12 = 4345LL;
    }
  }
  else
  {
    v12 = 4338LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)VolumeStrip);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v20);
  return v11;
}
