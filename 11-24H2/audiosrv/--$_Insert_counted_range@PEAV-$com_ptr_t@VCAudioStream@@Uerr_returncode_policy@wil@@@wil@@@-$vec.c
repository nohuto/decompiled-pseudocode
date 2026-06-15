/*
 * XREFs of ??$_Insert_counted_range@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x18001DF24
 * Callers:
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18001DA80 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180019110 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??4?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002644C (--4-$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV0.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18005FDB8 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x180065178 (-_Change_array@-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$alloca.c)
 *     ?_Calculate_growth@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEBA_K_K@Z @ 0x180068498 (-_Calculate_growth@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@AEA_K@Z @ 0x1800A2284 (--$_Allocate_at_least_helper@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5290 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$_Uninitialized_copy_n@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@_K0AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800C084C (--$_Uninitialized_copy_n@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 */

unsigned __int64 __fastcall std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Insert_counted_range<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *>(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 *v8; // r13
  __int64 *v9; // r14
  unsigned __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 *v15; // rdi
  __int64 *v16; // r8
  __int64 v17; // r12
  __int64 *v18; // rdi
  _QWORD *v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+20h] [rbp-48h]
  char *v21; // [rsp+20h] [rbp-48h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]
  __int64 *v23; // [rsp+70h] [rbp+8h]
  __int64 v24; // [rsp+78h] [rbp+10h] BYREF
  __int64 v25; // [rsp+80h] [rbp+18h]
  __int64 *v26; // [rsp+88h] [rbp+20h]

  v26 = (__int64 *)a4;
  v25 = a3;
  v24 = (__int64)a2;
  v19 = a1 + 1;
  v8 = (__int64 *)*a1;
  v9 = (__int64 *)a1[1];
  result = (__int64)(a1[2] - (_QWORD)v9) >> 3;
  if ( a4 )
  {
    if ( a4 <= result )
    {
      v17 = 8 * a4;
      if ( a4 >= v9 - a2 )
      {
        v26 = &a2[(unsigned __int64)v17 / 8];
        a1[1] = std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
                  a2,
                  v9,
                  &a2[(unsigned __int64)v17 / 8],
                  a1,
                  v19);
        std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(a2, v9);
        return std::_Uninitialized_copy_n<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
                 a3,
                 a4,
                 a2);
      }
      else
      {
        v18 = &v9[v17 / 0xFFFFFFFFFFFFFFF8uLL];
        a1[1] = std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
                  &v9[v17 / 0xFFFFFFFFFFFFFFF8uLL],
                  v9,
                  v9,
                  a1,
                  v19);
        while ( v18 != a2 )
        {
          --v18;
          wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>::operator=(
            &v18[(unsigned __int64)v17 / 8],
            v18);
        }
        std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
          a2,
          &a2[(unsigned __int64)v17 / 8]);
        return std::_Uninitialized_copy_n<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
                 v25,
                 a4,
                 a2);
      }
    }
    else
    {
      v11 = v9 - v8;
      if ( a4 > 0x1FFFFFFFFFFFFFFFLL - v11 )
        std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength(
          v11,
          a2);
      v22 = v11 + a4;
      v24 = std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Calculate_growth(a1, v11 + a4);
      v13 = std::_Allocate_at_least_helper<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
              v12,
              &v24);
      v20 = v13;
      v14 = a2 - v8;
      v26 = (__int64 *)(v13 + 8 * (v14 + a4));
      try
      {
        v15 = (__int64 *)(v13 + 8 * v14);
        std::_Uninitialized_copy_n<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
          v25,
          a4,
          v15);
        v23 = v15;
        if ( a4 == 1 && a2 == v9 )
        {
          v16 = (__int64 *)v13;
        }
        else
        {
          std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
            v8,
            a2,
            v13,
            a1,
            v13);
          v23 = (__int64 *)v13;
          v8 = a2;
          v16 = v26;
        }
        std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
          v8,
          v9,
          v16,
          a1,
          v20);
        result = std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Change_array(a1, v13, v22, v24);
      }
      catch ( ... )
      {
        std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(v23, v26);
        std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(8 * v24));
        throw;
      }
    }
  }
  return result;
}
