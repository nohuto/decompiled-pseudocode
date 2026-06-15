/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800C0758
 * Callers:
 *     _lambda_1463bc8540bbc68486c0270114e39042_::operator() @ 0x1800C0A5C (_lambda_1463bc8540bbc68486c0270114e39042_--operator().c)
 * Callees:
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18005FDB8 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x180065178 (-_Change_array@-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$alloca.c)
 *     ?_Calculate_growth@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEBA_K_K@Z @ 0x180068498 (-_Calculate_growth@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@AEA_K@Z @ 0x1800A2284 (--$_Allocate_at_least_helper@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5290 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$construct@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@SAXAEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@1@QEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEBV34@@Z @ 0x1800C08BC (--$construct@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@-$_Default_al.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rdi
  __int64 *v13; // rsi
  __int64 *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *result; // rax
  char *v18; // [rsp+20h] [rbp-48h]
  __int64 *v19; // [rsp+70h] [rbp+8h]
  unsigned __int64 v20; // [rsp+78h] [rbp+10h] BYREF
  __int64 v21; // [rsp+80h] [rbp+18h]
  __int64 *v22; // [rsp+88h] [rbp+20h]

  v21 = a3;
  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v7 = v6 + 1;
  v8 = std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Calculate_growth(a1, v6 + 1);
  v20 = v8;
  v10 = (__int64 *)std::_Allocate_at_least_helper<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
                     v9,
                     &v20);
  v12 = v10;
  v18 = (char *)v10;
  v13 = &v10[v5];
  v14 = v13 + 1;
  v22 = v13 + 1;
  try
  {
    std::_Default_allocator_traits<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>::construct<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>,wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> const &>(
      v11,
      v13,
      v21);
    v19 = v13;
    v15 = a1[1];
    v16 = *a1;
    if ( a2 == v15 )
    {
      v14 = v12;
    }
    else
    {
      std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
        v16,
        a2,
        v12,
        (__int64)a1);
      v19 = v12;
      v16 = a2;
      v15 = a1[1];
    }
    std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
      v16,
      v15,
      v14,
      (__int64)a1);
    std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Change_array(
      (__int64)a1,
      (__int64)v12,
      v7,
      v8);
    result = v13;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(v19, v22);
    std::_Deallocate<16,0>(v18, (const struct std::nothrow_t *)(8 * v20));
    throw;
  }
  return result;
}
