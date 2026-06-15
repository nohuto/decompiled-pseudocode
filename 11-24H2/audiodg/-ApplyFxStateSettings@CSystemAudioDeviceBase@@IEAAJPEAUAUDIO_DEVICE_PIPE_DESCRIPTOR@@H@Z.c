/*
 * XREFs of ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x140050990
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140050B10 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14006FD00 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000E320 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z @ 0x14002B358 (-GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ??$QueryInterface@UIAudioLfxControl@@@?$CComPtrBase@UIAudioEndpoint@@@ATL@@QEBAJPEAPEAUIAudioLfxControl@@@Z @ 0x14006ECB0 (--$QueryInterface@UIAudioLfxControl@@@-$CComPtrBase@UIAudioEndpoint@@@ATL@@QEBAJPEAPEAUIAudioLfx.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceBase::ApplyFxStateSettings(
        CSystemAudioDeviceBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        int a3)
{
  unsigned int v6; // ebx
  HRESULT v7; // edi
  _QWORD *v8; // r12
  _QWORD *v9; // r15
  _QWORD *v10; // rsi
  BOOL AggregatedGfxSettings; // eax
  LPVOID v13; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0;
  v7 = 0;
  v13 = 0LL;
  if ( *((_DWORD *)this + 24) )
  {
    *((_DWORD *)this + 25) = *((_DWORD *)a2 + 35);
    v7 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &v13);
    if ( v7 >= 0 )
    {
      v8 = (_QWORD *)((char *)this + 144);
      v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, char *))(*(_QWORD *)v13 + 40LL))(
             v13,
             *((_QWORD *)a2 + 7),
             (char *)this + 144);
      if ( v7 >= 0 )
      {
        v9 = (_QWORD *)((char *)this + 120);
        v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, _QWORD, char *))(*(_QWORD *)*v8 + 24LL))(
               *v8,
               &GUID_eddce3e4_f3c1_453a_b461_223563cbd886,
               1LL,
               0LL,
               (char *)this + 120);
        if ( v7 >= 0 )
        {
          if ( a3 || *((_DWORD *)a2 + 25) != 1 )
          {
            v10 = (_QWORD *)((char *)this + 128);
            if ( *((_QWORD *)this + 16) )
              ATL::AtlComPtrAssign((struct IUnknown **)this + 16, 0LL);
          }
          else
          {
            v10 = (_QWORD *)((char *)this + 128);
            v7 = ATL::CComPtrBase<IAudioEndpoint>::QueryInterface<IAudioLfxControl>(
                   (char *)this + 88,
                   (char *)this + 128);
            if ( v7 < 0 )
              goto LABEL_16;
          }
          if ( !*v9
            || (AggregatedGfxSettings = CSystemAudioDeviceCollection::GetAggregatedGfxSettings(this),
                v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, BOOL))(*(_QWORD *)*v9 + 48LL))(
                       *v9,
                       *v8,
                       AggregatedGfxSettings),
                v7 >= 0) )
          {
            if ( !a3 && *v10 )
            {
              LOBYTE(v6) = *((_DWORD *)this + 25) == 0;
              v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v10 + 24LL))(*v10, v6);
            }
          }
        }
      }
    }
  }
LABEL_16:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v13);
  return (unsigned int)v7;
}
