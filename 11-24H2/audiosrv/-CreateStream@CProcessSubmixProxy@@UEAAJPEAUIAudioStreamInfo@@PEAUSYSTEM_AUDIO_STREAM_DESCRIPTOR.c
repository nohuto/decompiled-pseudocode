/*
 * XREFs of ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x1800744A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetAudioHandle@CAudioStream@@QEAAJPEAUSystemAudioStream@@KPEAUIStreamInstanceProxy@@@Z @ 0x1800C9DA4 (-SetAudioHandle@CAudioStream@@QEAAJPEAUSystemAudioStream@@KPEAUIStreamInstanceProxy@@@Z.c)
 *     ??$MakeAndInitialize@VCStreamInstanceProxy@@UIStreamInstanceProxy@@AEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAPEAUIAudioGraphCallback@@_JAEAPEAUSystemAudioStream@@@Details@WRL@Microsoft@@YAJPEAPEAUIStreamInstanceProxy@@AEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAPEAUIAudioGraphCallback@@$$QEA_JAEAPEAUSystemAudioStream@@@Z @ 0x1800F3028 (--$MakeAndInitialize@VCStreamInstanceProxy@@UIStreamInstanceProxy@@AEAPEAUSYSTEM_AUDIO_STREAM_DE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcessSubmixProxy::CreateStream(
        unsigned __int64 this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        unsigned int a5,
        struct SystemAudioStream *a6)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IStreamInstanceProxy *v15; // [rsp+60h] [rbp+20h] BYREF
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v16; // [rsp+70h] [rbp+30h] BYREF
  struct IAudioGraphCallback *v17; // [rsp+78h] [rbp+38h] BYREF

  v17 = a4;
  v16 = a3;
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(this + 192) + 304LL))(*(_QWORD *)(this + 192));
  v9 = v8;
  if ( v8 >= 0 )
  {
    v15 = 0LL;
    v13 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
    if ( v15 )
      (*(void (__fastcall **)(struct IStreamInstanceProxy *))(*(_QWORD *)v15 + 16LL))(v15);
    v10 = Microsoft::WRL::Details::MakeAndInitialize<CStreamInstanceProxy,IStreamInstanceProxy,SYSTEM_AUDIO_STREAM_DESCRIPTOR * &,IAudioGraphCallback * &,__int64,SystemAudioStream * &>(
            (unsigned int)&v15,
            (unsigned int)&v16,
            (unsigned int)&v17,
            (unsigned int)&v13,
            (__int64)&a6);
    v9 = v10;
    if ( v10 >= 0 )
    {
      CAudioStream::SetAudioHandle((CAudioStream *)(((unsigned __int64)a2 - 8) & -(__int64)(a2 != 0LL)), a6, a5, v15);
      v10 = (*(__int64 (__fastcall **)(struct IStreamInstanceProxy *, struct IAudioStreamInfo *, unsigned __int64, __int64))(*(_QWORD *)v15 + 64LL))(
              v15,
              a2,
              this & -(__int64)(this != 8),
              1LL);
      v9 = v10;
      if ( v10 >= 0 )
      {
        v9 = 0;
        goto LABEL_11;
      }
      v11 = 3541LL;
    }
    else
    {
      v11 = 3536LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v10);
LABEL_11:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
    return v9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDCD,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
