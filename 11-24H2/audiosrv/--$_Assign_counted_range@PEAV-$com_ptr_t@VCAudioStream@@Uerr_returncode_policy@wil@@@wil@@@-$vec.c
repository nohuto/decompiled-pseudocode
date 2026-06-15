/*
 * XREFs of ??$_Assign_counted_range@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x1800C0614
 * Callers:
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18001DD6C (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180019110 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??4?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18005937C (--4-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Calculate_growth@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEBA_K_K@Z @ 0x180068498 (-_Calculate_growth@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@AEA_K@Z @ 0x1800A2284 (--$_Allocate_at_least_helper@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5290 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$_Uninitialized_copy_n@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@_K0AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800C084C (--$_Uninitialized_copy_n@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Assign_counted_range<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *>(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3)
{
  __int64 *v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 *v9; // rax
  __int64 *v10; // r8
  unsigned __int64 v11; // r14
  __int64 *i; // r14
  __int64 result; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(__int64 **)a1;
  v4 = a3;
  if ( a3 > (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3 )
  {
    if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
    v8 = std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Calculate_growth((_QWORD *)a1, a3);
    if ( v3 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
        v3,
        *(__int64 **)(a1 + 8));
      std::_Deallocate<16,0>(
        *(char **)a1,
        (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    v14 = v8;
    v9 = (__int64 *)std::_Allocate_at_least_helper<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
                      v7,
                      (unsigned __int64 *)&v14);
    *(_QWORD *)a1 = v9;
    v10 = v9;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = &v9[v8];
    goto LABEL_14;
  }
  v10 = *(__int64 **)(a1 + 8);
  v11 = v10 - v3;
  if ( v4 > v11 )
  {
    while ( v3 != v10 )
    {
      wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>::operator=(v3, a2);
      v10 = *(__int64 **)(a1 + 8);
      ++v3;
      ++a2;
    }
    v4 -= v11;
LABEL_14:
    result = std::_Uninitialized_copy_n<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
               a2,
               v4,
               v10);
    *(_QWORD *)(a1 + 8) = result;
    return result;
  }
  for ( i = &v3[v4]; v4; --v4 )
    wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>::operator=(v3++, a2++);
  result = std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
             i,
             *(__int64 **)(a1 + 8));
  *(_QWORD *)(a1 + 8) = i;
  return result;
}
