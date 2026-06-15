/*
 * XREFs of ?DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@PEBUStreamGroupParams@@AEAV?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@@Z @ 0x180018B48
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUMODE_PARAMS@@PEAUStreamGroupParams@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B7A8C (-BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$default_delete@VCAppSubmixClient@@@std@@QEBAXPEAVCAppSubmixClient@@@Z @ 0x1800186C4 (--R-$default_delete@VCAppSubmixClient@@@std@@QEBAXPEAVCAppSubmixClient@@@Z.c)
 *     ??$?4U?$default_delete@UProcessSubmixParams@@@std@@$0A@@?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180018CC8 (--$-4U-$default_delete@UProcessSubmixParams@@@std@@$0A@@-$unique_ptr@UProcessSubmixParams@@U-$de.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DeriveProcessSubmixParametersForStream(__int64 a1, int a2, int a3, int a4, __int64 a5, void *a6)
{
  void *v10; // r15
  __int64 *v11; // rdx
  __int64 *v12; // rax
  __int64 *v13; // rbx
  __int64 v14; // rdi
  char v15; // cl
  bool v16; // al
  void *v17; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = a6;
  v11 = *(__int64 **)a6;
  *(_QWORD *)a6 = 0LL;
  if ( v11 )
    std::default_delete<CAppSubmixClient>::operator()(a1, v11);
  if ( a4 || *(_BYTE *)(a5 + 48) )
    return 0LL;
  v12 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  if ( v12 )
  {
    v12[1] = 0LL;
    v12[2] = 0LL;
    *v12 = 0LL;
    a6 = v12;
    v14 = *v12;
    *v12 = a1;
    if ( a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = 1;
    v16 = a3 != 3 && a3 != 8 && (a2 & 0x1000000) == 0;
    *((_BYTE *)v13 + 8) = v16;
    if ( !v16 && !g_UnrestrictedPerProcessLoopback )
      v15 = 0;
    *((_BYTE *)v13 + 8) = v15;
    v13[2] = a5;
    std::unique_ptr<ProcessSubmixParams>::operator=<std::default_delete<ProcessSubmixParams>,0>(v10, &a6);
    v17 = a6;
    if ( a6 )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)a6);
      operator delete(v17, (const struct std::nothrow_t *)0x18);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x404,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
