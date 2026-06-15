/*
 * XREFs of ??$MakeAndInitialize@VCAastPreStartContext@@UIAudioStreamPreStartContext@@AEAPEAUIAudioStreamInfo@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioStreamPreStartContext@@AEAPEAUIAudioStreamInfo@@@Z @ 0x18003C3C8
 * Callers:
 *     ?RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPreStartContext@@@Z @ 0x180029D80 (-RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPre.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointVolumeStateManager@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18001F5DC (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointVolumeStateMa.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001F850 (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800206BC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003C6AC (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAastPreStartContext,IAudioStreamPreStartContext,IAudioStreamInfo * &>(
        _QWORD *a1,
        struct IAudioStreamInfo **a2)
{
  char *v4; // rax
  char *v5; // rbx
  int v6; // edi
  __int64 v7; // rax
  char *v9; // [rsp+40h] [rbp+8h] BYREF
  char *v10; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v4 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v9 = v4;
  if ( v4 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointVolumeStateManager>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointVolumeStateManager>((__int64)v4);
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioStreamPreStartContext>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v5 = &CAastPreStartContext::`vftable';
    v5[16] = 0;
    *((_DWORD *)v5 + 5) = 0;
    *(_OWORD *)(v5 + 24) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    *((_QWORD *)v5 + 6) = 7LL;
    *((_WORD *)v5 + 12) = 0;
    v10 = v5;
    v9 = 0LL;
    v6 = CAastPreStartContext::RuntimeClassInitialize((CAastPreStartContext *)v5, *a2);
    v7 = *(_QWORD *)v5;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(char *, GUID *, _QWORD *))v7)(v5, &GUID_52004e04_018e_41fc_a946_f5027192635b, a1);
      (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    else
    {
      (*(void (__fastcall **)(char *))(v7 + 16))(v5);
    }
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>((void **)&v9);
  return (unsigned int)v6;
}
