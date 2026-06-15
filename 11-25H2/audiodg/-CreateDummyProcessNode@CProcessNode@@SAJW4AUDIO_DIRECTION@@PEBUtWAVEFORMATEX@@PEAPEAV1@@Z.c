/*
 * XREFs of ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x1400392A4
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140010720 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140011698 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400241A8 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140024F54 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14002563C (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140026F5C (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14006BDC4 (-CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBR.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000E2F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CreateAudioMediaType @ 0x14005B1F4 (CreateAudioMediaType.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcessNode::CreateDummyProcessNode(int a1, const WAVEFORMATEX *a2, _QWORD *a3)
{
  void *v6; // rbx
  HRESULT v7; // edi
  IAudioMediaType *v8; // rcx
  IAudioMediaType *ppIAudioMediaType; // [rsp+48h] [rbp+20h] BYREF

  ppIAudioMediaType = 0LL;
  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    *(_QWORD *)v6 = &CProcessNode::`vftable';
    *((_QWORD *)v6 + 1) = 0LL;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_DWORD *)v6 + 6) = a1;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_DWORD *)v6 + 10) = 4;
    v7 = CreateAudioMediaType(a2, a2->cbSize + 18, &ppIAudioMediaType);
    if ( v7 >= 0 )
    {
      v8 = ppIAudioMediaType;
      if ( *((IAudioMediaType **)v6 + 1) != ppIAudioMediaType )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)v6 + 1, (struct IUnknown *)ppIAudioMediaType);
        v8 = ppIAudioMediaType;
      }
      if ( *((IAudioMediaType **)v6 + 2) != v8 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)v6 + 2, (struct IUnknown *)v8);
        v8 = ppIAudioMediaType;
      }
      *a3 = v6;
      goto LABEL_8;
    }
    (**(void (__fastcall ***)(void *, __int64))v6)(v6, 1LL);
  }
  else
  {
    v7 = -2147024882;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_c1831df7ab483f3d860eb31c248acfa4_Traceguids);
  }
  AudDGTraceLoggingErrorHelper("CProcessNode::CreateDummyProcessNode", 0x5Du, v7);
  v8 = ppIAudioMediaType;
LABEL_8:
  if ( v8 )
    ((void (__fastcall *)(IAudioMediaType *))v8->lpVtbl->Release)(v8);
  return (unsigned int)v7;
}
