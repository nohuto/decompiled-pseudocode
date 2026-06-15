/*
 * XREFs of ?RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z @ 0x18007CE04
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointStore@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointStore@@AEAPEBG@Z @ 0x1800A1BEC (--$MakeAndInitialize@VCEndpointStore@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointStore.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Initialize@CAudioSessionManager@@QEAAJPEBG@Z @ 0x1800701D4 (-Initialize@CAudioSessionManager@@QEAAJPEBG@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800A1504 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$make_unique@VCAudioSessionManager@@$$V$0A@@std@@YA?AV?$unique_ptr@VCAudioSessionManager@@U?$default_delete@VCAudioSessionManager@@@std@@@0@XZ @ 0x1800A1AE0 (--$make_unique@VCAudioSessionManager@@$$V$0A@@std@@YA-AV-$unique_ptr@VCAudioSessionManager@@U-$d.c)
 *     ??1?$unique_ptr@VCAudioSessionManager@@U?$default_delete@VCAudioSessionManager@@@std@@@std@@QEAA@XZ @ 0x1800A3274 (--1-$unique_ptr@VCAudioSessionManager@@U-$default_delete@VCAudioSessionManager@@@std@@@std@@QEAA.c)
 *     ??R?$default_delete@VCAudioSessionManager@@@std@@QEBAXPEAVCAudioSessionManager@@@Z @ 0x1800C75E4 (--R-$default_delete@VCAudioSessionManager@@@std@@QEBAXPEAVCAudioSessionManager@@@Z.c)
 *     ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@PEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@$$QEAPEAUIMMDevice@@@Z @ 0x1800FCF0C (--$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@PEAUIMMDevice@@@Detai.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointStore::RuntimeClassInitialize(CEndpointStore *this, const unsigned __int16 *a2)
{
  __int64 (*GetDevice)(void); // rbx
  int v5; // ebx
  const char *v6; // r9
  __int64 result; // rax
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  CAudioSessionManager *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v19; // [rsp+50h] [rbp+18h] BYREF
  __int64 v20; // [rsp+58h] [rbp+20h] BYREF

  v19 = 0LL;
  GetDevice = (__int64 (*)(void))g_DeviceEnumerator->lpVtbl->GetDevice;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v19);
  try
  {
    v5 = GetDevice();
    if ( v5 >= 0 )
    {
      *((_BYTE *)this + 256) = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, __int64))(*(_QWORD *)g_AudioResourceManager
                                                                                                  + 88LL))(
                                 g_AudioResourceManager,
                                 v19);
      v8 = (__int64 *)std::make_unique<CAudioSessionManager,,0>(&v20);
      v9 = *v8;
      *v8 = 0LL;
      v10 = *((_QWORD *)this + 12);
      *((_QWORD *)this + 12) = v9;
      if ( v10 )
        std::default_delete<CAudioSessionManager>::operator()();
      std::unique_ptr<CAudioSessionManager>::~unique_ptr<CAudioSessionManager>(&v20);
      v11 = (CAudioSessionManager *)*((_QWORD *)this + 12);
      if ( v11 )
      {
        v12 = CAudioSessionManager::Initialize(v11, a2);
        v13 = v12;
        if ( v12 >= 0 )
        {
          v20 = v19;
          v14 = *((_QWORD *)this + 13);
          *((_QWORD *)this + 13) = 0LL;
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          v15 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectsStore,IDeviceGraphObjectsStore,IMMDevice *>(
                  (char *)this + 104,
                  &v20);
          v16 = v15;
          if ( v15 >= 0 )
          {
            v17 = -1LL;
            do
              ++v17;
            while ( a2[v17] );
            std::wstring::assign((char *)this + 16, a2);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
            result = 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x73,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
              (const char *)(unsigned int)v15);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
            result = v16;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x71,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
            (const char *)(unsigned int)v12);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
          result = v13;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x70,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
          (const char *)0x8007000ELL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
        result = 2147942414LL;
      }
    }
    else
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
      result = (unsigned int)v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x78,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
                           v6);
  }
  return result;
}
