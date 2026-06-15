/*
 * XREFs of ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140026438
 * Callers:
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14002563C (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140039CF4 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140050178 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CreateAudioMediaType @ 0x14005B1F4 (CreateAudioMediaType.c)
 *     WPP_SF_ @ 0x140065A40 (WPP_SF_.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDeviceProcessNode::CreateDeviceProcessNode(
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a1,
        struct CDeviceProcessNode **a2)
{
  _QWORD *v4; // rax
  char *v5; // rbx
  int v6; // ecx
  void (__fastcall ***v7)(_QWORD, __int64); // rsi
  HRESULT AudioMediaType; // edi
  _QWORD *v9; // rcx
  struct CEndpointInstance *v11; // [rsp+60h] [rbp+18h] BYREF
  void *v12; // [rsp+68h] [rbp+20h]

  v11 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v4;
  v5 = (char *)v4;
  if ( v4 )
  {
    v6 = *((_DWORD *)a1 + 18);
    v7 = (void (__fastcall ***)(_QWORD, __int64))v4;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[4] = 0LL;
    *((_DWORD *)v4 + 6) = v6;
    *((_DWORD *)v4 + 10) = 1;
    *v4 = &CDeviceProcessNode::`vftable';
    v4[6] = 0LL;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_c1831df7ab483f3d860eb31c248acfa4_Traceguids);
    }
    AudioMediaType = CEndpointInstance::CreateDeviceEndpointInstance(a1, &v11);
    if ( AudioMediaType >= 0 )
    {
      *((_QWORD *)v5 + 4) = v11;
      AudioMediaType = CreateAudioMediaType(
                         *((const WAVEFORMATEX **)a1 + 1),
                         *(unsigned __int16 *)(*((_QWORD *)a1 + 1) + 16LL) + 18,
                         (IAudioMediaType **)v5 + 6);
      if ( AudioMediaType >= 0 )
      {
        ATL::CComPtr<IAudioMediaType>::operator=(v5 + 8, v5 + 48);
        ATL::CComPtr<IAudioMediaType>::operator=(v5 + 16, v5 + 48);
        *a2 = (struct CDeviceProcessNode *)v5;
        return (unsigned int)AudioMediaType;
      }
    }
  }
  else
  {
    v7 = 0LL;
    AudioMediaType = -2147024882;
  }
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_c1831df7ab483f3d860eb31c248acfa4_Traceguids);
    v9 = WPP_GLOBAL_Control;
  }
  if ( v7 )
  {
    (**v7)(v7, 1LL);
    v9 = WPP_GLOBAL_Control;
  }
  if ( v9 != &WPP_GLOBAL_Control && (*((_DWORD *)v9 + 7) & 0x20000) != 0 && *((_BYTE *)v9 + 25) >= 2u )
    WPP_SF_D(v9[2], 15LL, &WPP_c1831df7ab483f3d860eb31c248acfa4_Traceguids);
  AudDGTraceLoggingErrorHelper("CDeviceProcessNode::CreateDeviceProcessNode", 0x16Cu, AudioMediaType);
  return (unsigned int)AudioMediaType;
}
