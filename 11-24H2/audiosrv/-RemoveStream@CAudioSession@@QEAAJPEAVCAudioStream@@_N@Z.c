/*
 * XREFs of ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180026188
 * Callers:
 *     ??1CVADServer@@UEAA@XZ @ 0x180010938 (--1CVADServer@@UEAA@XZ.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18001DD6C (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180080980 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180081050 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x1800256F0 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 *     ??4?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002644C (--4-$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV0.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x180026484 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x180026528 (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     ?erase@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1800279C8 (-erase@-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 *     ??4?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18005937C (--4-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     WPP_SF_qq @ 0x1800A21B4 (WPP_SF_qq.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x180165600 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSession::RemoveStream(CAudioSession *this, struct CAudioStream *a2, char a3)
{
  struct CAudioStream *v6; // rbx
  struct CAudioStream **i; // rsi
  struct CAudioStream **v8; // rbp
  struct CAudioStream **j; // rsi
  __int64 v11; // r9
  void (__fastcall **v12[4])(_QWORD, __int64 *); // [rsp+30h] [rbp-48h] BYREF
  struct CAudioStream *v13; // [rsp+80h] [rbp+8h] BYREF
  char v14; // [rsp+88h] [rbp+10h] BYREF

  v6 = 0LL;
  v13 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_ea93f1868512325b454513e390c361b8_Traceguids, this);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  for ( i = (struct CAudioStream **)*((_QWORD *)this + 14); i != *((struct CAudioStream ***)this + 15) && *i != a2; ++i )
    ;
  if ( i != *((struct CAudioStream ***)this + 15) )
  {
    v6 = *i;
    v13 = v6;
    if ( v6 )
      (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v6 + 8LL))(v6);
    v8 = (struct CAudioStream **)*((_QWORD *)this + 15);
    while ( ++i != v8 )
      wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>::operator=(i - 1, i);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(*((_QWORD *)this + 15) - 8LL));
    *((_QWORD *)this + 15) -= 8LL;
  }
  if ( this != (CAudioSession *)-64LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( !v6 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
    for ( j = (struct CAudioStream **)*((_QWORD *)this + 22); j != *((struct CAudioStream ***)this + 23) && *j != a2; ++j )
      ;
    if ( j != *((struct CAudioStream ***)this + 23) )
    {
      wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>::operator=(&v13, j);
      std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::erase((char *)this + 176, &v14, j);
      v6 = v13;
    }
    if ( this != (CAudioSession *)-136LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  }
  (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)a2 + 64LL))(a2);
  if ( v6 )
  {
    if ( *((_BYTE *)v6 + 256) )
      MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", 0LL, 0LL, 1LL);
    v11 = (unsigned int)(*((_DWORD *)this + 26) - 1);
    *((_DWORD *)this + 26) = v11;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_ea93f1868512325b454513e390c361b8_Traceguids, v11);
    }
    if ( a3 )
    {
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
      v12[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioStreamDestroy::`vftable';
      v12[1] = (void (__fastcall **)(_QWORD, __int64 *))this;
      v12[2] = (void (__fastcall **)(_QWORD, __int64 *))v6;
      CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry(
        (LPCRITICAL_SECTION)((char *)this + 432),
        v12);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
    }
    CAudioStream::CloseAudioHandle(v6);
    *((_QWORD *)v6 + 8) = 0LL;
    v13 = 0LL;
    (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v6 + 16LL))(v6);
    CAudioSession::PostStateCheckExpirationWork(this);
  }
  return 0LL;
}
