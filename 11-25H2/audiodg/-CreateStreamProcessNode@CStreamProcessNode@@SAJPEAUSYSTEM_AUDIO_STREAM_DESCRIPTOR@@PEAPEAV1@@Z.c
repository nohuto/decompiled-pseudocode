/*
 * XREFs of ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140024058
 * Callers:
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400241A8 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 * Callees:
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140039CF4 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CreateAudioMediaType @ 0x14005B1F4 (CreateAudioMediaType.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStreamProcessNode::CreateStreamProcessNode(const WAVEFORMATEX **a1, struct CStreamProcessNode **a2)
{
  IAudioMediaType **v4; // rax
  struct CStreamProcessNode *v5; // rbx
  int v6; // r9d
  HRESULT AudioMediaType; // edi

  v4 = (IAudioMediaType **)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = (struct CStreamProcessNode *)v4;
  if ( v4 )
  {
    v6 = *(_DWORD *)a1;
    v4[1] = 0LL;
    v4[2] = 0LL;
    *((_DWORD *)v4 + 10) = 3;
    v4[4] = 0LL;
    *((_DWORD *)v4 + 6) = v6 != 0;
    *v4 = (IAudioMediaType *)&CStreamProcessNode::`vftable';
    v4[6] = 0LL;
    *((_DWORD *)v4 + 14) = 0;
    AudioMediaType = CreateAudioMediaType(a1[16], a1[16]->cbSize + 18, v4 + 6);
    if ( AudioMediaType >= 0 )
    {
      *((_DWORD *)v5 + 14) = *((_DWORD *)a1 + 3);
      *((_DWORD *)v5 + 15) = *(_DWORD *)a1;
      ATL::CComPtr<IAudioMediaType>::operator=((char *)v5 + 8, (char *)v5 + 48);
      ATL::CComPtr<IAudioMediaType>::operator=((char *)v5 + 16, (char *)v5 + 48);
      *a2 = v5;
      return (unsigned int)AudioMediaType;
    }
    (**(void (__fastcall ***)(struct CStreamProcessNode *, __int64))v5)(v5, 1LL);
  }
  else
  {
    AudioMediaType = -2147024882;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_c1831df7ab483f3d860eb31c248acfa4_Traceguids);
  }
  AudDGTraceLoggingErrorHelper("CStreamProcessNode::CreateStreamProcessNode", 0x1ABu, AudioMediaType);
  return (unsigned int)AudioMediaType;
}
