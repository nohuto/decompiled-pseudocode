/*
 * XREFs of ?RebuildList@AppList@GamingAudio@@QEAAX_N@Z @ 0x180368070
 * Callers:
 *     ?GetAudioActiveSessionDetails@GamingOverlayExperienceManager@@UEAAJPEAPEAU?$IVectorView@H@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAUHSTRING__@@@345@0000@Z @ 0x18034D950 (-GetAudioActiveSessionDetails@GamingOverlayExperienceManager@@UEAAJPEAPEAU-$IVectorView@H@Collec.c)
 *     ?OnSessionCreated@AppList@GamingAudio@@UEAAJPEAUIAudioSessionControl@@@Z @ 0x180355CD0 (-OnSessionCreated@AppList@GamingAudio@@UEAAJPEAUIAudioSessionControl@@@Z.c)
 *     ?add_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18035FF40 (-add_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEA.c)
 *     ?RelaySessionExpired@SessionInfoItem@GamingAudio@@QEAAXXZ @ 0x180368154 (-RelaySessionExpired@SessionInfoItem@GamingAudio@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f781994c3342d231902f4bb64d9d854_____lambda_8f781994c3342d231902f4bb64d9d854___ @ 0x18036609C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8f781994c3342.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingAudio::AppList::RebuildList(GamingAudio::AppList *this, char a2)
{
  volatile signed __int32 **v4; // rax
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rcx
  DWORD CurrentThreadId; // eax
  volatile signed __int32 *v8; // [rsp+30h] [rbp-38h] BYREF
  GamingAudio::AppList *v9; // [rsp+38h] [rbp-30h] BYREF
  char v10; // [rsp+40h] [rbp-28h]
  GamingAudio::AppList *v11; // [rsp+48h] [rbp-20h] BYREF

  v11 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  v9 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  v10 = a2;
  v4 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f781994c3342d231902f4bb64d9d854_____lambda_8f781994c3342d231902f4bb64d9d854___(
         &v8,
         (__int64)&v9);
  v5 = *v4;
  *v4 = 0LL;
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v6);
  }
  CurrentThreadId = GetCurrentThreadId();
  SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v5 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
}
