/*
 * XREFs of ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18002D71C
 * Callers:
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18002D430 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800C2E70 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18000CC20 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x18001D668 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800263DC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x180065E90 (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ??$_Assign_counted_range@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x1800C1FC8 (--$_Assign_counted_range@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@-$vec.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18015C850 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::DisconnectStreamList(CAudioSession *this)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  const char *v4; // r9
  struct CAudioStream **i; // rsi
  struct CAudioStream *v6; // rax
  void (__fastcall ***v7)(_QWORD, __int64 *); // rax
  __int64 result; // rax
  __int128 v9; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+40h] [rbp-38h]
  _BYTE v11[40]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v9 = 0LL;
  v2 = 0LL;
  v10 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 136);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  try
  {
    if ( &v9 != (__int128 *)((char *)this + 176) )
    {
      std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Assign_counted_range<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *>(
        &v9,
        *((_QWORD *)this + 22),
        (__int64)(*((_QWORD *)this + 23) - *((_QWORD *)this + 22)) >> 3);
      v2 = v10;
    }
    if ( v3 )
      LeaveCriticalSection(v3);
    for ( i = (struct CAudioStream **)v9; i != *((struct CAudioStream ***)&v9 + 1); ++i )
    {
      v6 = *i;
      if ( *((_BYTE *)*i + 136) )
      {
        if ( *((_BYTE *)v6 + 256) )
        {
          MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", 0LL, 0LL, 1LL);
          (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
          v7 = (void (__fastcall ***)(_QWORD, __int64 *))CAudioStreamStateChanged::CAudioStreamStateChanged(
                                                           v11,
                                                           this,
                                                           1LL);
          CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry(
            (LPCRITICAL_SECTION)((char *)this + 432),
            v7);
          (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
        }
        CAudioSession::RemoveStream(this, *i, 0);
        (*(void (__fastcall **)(__int64))(*((_QWORD *)*i + 1) + 176LL))((__int64)*i + 8);
      }
      else
      {
        (*(void (__fastcall **)(__int64))(*((_QWORD *)v6 + 1) + 184LL))((__int64)v6 + 8);
      }
    }
    if ( (_QWORD)v9 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
        (__int64 *)v9,
        *((__int64 **)&v9 + 1));
      std::_Deallocate<16,0>((char *)v9, (const struct std::nothrow_t *)(8 * ((v2 - (__int64)v9) >> 3)));
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x12DC,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v4);
  }
  return result;
}
