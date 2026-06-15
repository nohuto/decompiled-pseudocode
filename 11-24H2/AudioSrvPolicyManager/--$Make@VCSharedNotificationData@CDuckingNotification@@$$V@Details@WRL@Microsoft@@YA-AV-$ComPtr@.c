/*
 * XREFs of ??$Make@VCSharedNotificationData@CDuckingNotification@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCSharedNotificationData@CDuckingNotification@@@12@XZ @ 0x18002B5C8
 * Callers:
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x18002D5AC (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180019A8C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001F850 (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800206BC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029FB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<CDuckingNotification::CSharedNotificationData,>(__int64 *a1)
{
  _QWORD *v2; // rbx
  volatile int *v3; // rdx
  _OWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v2 = v5;
  if ( v5 )
  {
    *v5 = 0LL;
    v2[2] = 0LL;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(v2);
    *((_DWORD *)v2 + 4) = 0;
    *v2 = &CDuckingNotification::CSharedNotificationData::`vftable';
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(
        *a1,
        v3);
    v5 = 0LL;
    *a1 = (__int64)v2;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>((void **)&v5);
  return a1;
}
