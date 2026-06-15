/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18001BD04
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x18001B650 (-FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioS.c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x18001D850 (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ??$_Emplace_back@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@?$_Uninitialized_backout_al@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800185DC (--$_Emplace_back@V-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@-$_U.c)
 *     ??$construct@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V12@@?$_Default_allocator_traits@V?$allocator@U?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@QEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@$$QEAV34@@Z @ 0x180018600 (--$construct@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V12@@-$_Defaul.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180019110 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18005FDB8 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@AEA_K@Z @ 0x1800A2284 (--$_Allocate_at_least_helper@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil.c)
 */

_QWORD *__fastcall std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  _QWORD *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 *v16; // rcx
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+28h] [rbp-50h] BYREF
  __int64 *v22; // [rsp+30h] [rbp-48h]
  __int64 *v23; // [rsp+38h] [rbp-40h]
  _QWORD *v24; // [rsp+80h] [rbp+8h] BYREF
  __int64 v25; // [rsp+88h] [rbp+10h]
  __int64 *v26; // [rsp+90h] [rbp+18h]
  _QWORD *v27; // [rsp+98h] [rbp+20h]

  v26 = a3;
  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  v25 = v7;
  v24 = (_QWORD *)v7;
  v11 = std::_Allocate_at_least_helper<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
          v9,
          &v24);
  v12 = (_QWORD *)(v11 + 8 * v5);
  v27 = v12 + 1;
  std::_Default_allocator_traits<std::allocator<std::_List_node<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,void *>>>::construct<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>(
    v13,
    v12,
    v26);
  v24 = v12;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 == v14 )
  {
    v21 = v11;
    v16 = (__int64 *)v11;
    v22 = (__int64 *)v11;
    v23 = a1;
    if ( v15 != v14 )
    {
      do
      {
        std::_Uninitialized_backout_al<std::allocator<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>::_Emplace_back<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>(
          (__int64)&v21,
          v15);
        v15 = v17 + 8;
      }
      while ( v15 != v18 );
      v16 = v22;
    }
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(v16, v16);
  }
  else
  {
    std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
      *a1,
      a2,
      v11,
      a1,
      v11);
    v24 = (_QWORD *)v11;
    std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
      a2,
      a1[1],
      v12 + 1,
      a1,
      v20);
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
      (__int64 *)*a1,
      (__int64 *)a1[1]);
    std::_Deallocate<16,0>((char *)*a1, (const struct std::nothrow_t *)((a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *a1 = v11;
  a1[1] = v11 + 8 * v8;
  a1[2] = v11 + 8 * v7;
  return v12;
}
