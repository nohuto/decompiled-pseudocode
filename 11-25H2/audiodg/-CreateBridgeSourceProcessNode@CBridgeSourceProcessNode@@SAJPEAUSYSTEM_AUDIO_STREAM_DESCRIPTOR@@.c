/*
 * XREFs of ?CreateBridgeSourceProcessNode@CBridgeSourceProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVCStreamProcessNode@@@Z @ 0x14006C610
 * Callers:
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400241A8 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140039CF4 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CreateAudioMediaType @ 0x14005B1F4 (CreateAudioMediaType.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBridgeSourceProcessNode::CreateBridgeSourceProcessNode(
        const WAVEFORMATEX **a1,
        IAudioMediaType ***a2)
{
  IAudioMediaType **v4; // rax
  IAudioMediaType **v5; // rbx
  int v6; // r9d
  HRESULT AudioMediaType; // eax
  unsigned int v8; // ebp
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (IAudioMediaType **)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_DWORD *)a1;
    v4[1] = 0LL;
    v4[2] = 0LL;
    *((_DWORD *)v4 + 10) = 5;
    v4[4] = 0LL;
    *((_DWORD *)v4 + 6) = v6 != 0;
    v4[6] = 0LL;
    *((_DWORD *)v4 + 14) = 0;
    v4[8] = 0LL;
    *v4 = (IAudioMediaType *)&CBridgeSourceProcessNode::`vftable';
    AudioMediaType = CreateAudioMediaType(a1[16], a1[16]->cbSize + 18, v4 + 6);
    v8 = AudioMediaType;
    if ( AudioMediaType >= 0 )
    {
      *((_DWORD *)v5 + 15) = *(_DWORD *)a1;
      *((_DWORD *)v5 + 14) = *((_DWORD *)a1 + 3);
      ATL::CComPtr<IAudioMediaType>::operator=(v5 + 1, v5 + 6);
      ATL::CComPtr<IAudioMediaType>::operator=(v5 + 2, v5 + 6);
      v5[8] = (IAudioMediaType *)a1[14];
      result = 0LL;
      *a2 = v5;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x374,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
        (const char *)(unsigned int)AudioMediaType);
      ((void (__fastcall *)(IAudioMediaType **, __int64))(*v5)->lpVtbl)(v5, 1LL);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x370,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
