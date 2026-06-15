/*
 * XREFs of ?PublishAudioEffects@CAudioStream@@AEAAXXZ @ 0x1800C8FD8
 * Callers:
 *     wistd::__function::__func__lambda_6a6f76b54097c0dbebd0b6d97fee1068__void___cdecl(void)_::operator() @ 0x1800C8590 (wistd--__function--__func__lambda_6a6f76b54097c0dbebd0b6d97fee1068__void___cdecl(void)_--operato.c)
 *     ?SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ @ 0x1800CA334 (-SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ.c)
 *     std::_Func_impl_no_alloc__lambda_fd18c6a3b571192092869a19e3ba0802__void_::_Do_call @ 0x1800CA930 (std--_Func_impl_no_alloc__lambda_fd18c6a3b571192092869a19e3ba0802__void_--_Do_call.c)
 * Callees:
 *     ?GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z @ 0x180070928 (-GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U_GUID@@U?$default_delete@$$BY0A@U_GUID@@@std@@@std@@QEAA@XZ @ 0x1800A31D8 (--1-$unique_ptr@$$BY0A@U_GUID@@U-$default_delete@$$BY0A@U_GUID@@@std@@@std@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42AC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?reset@?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAXXZ @ 0x1800AC7B8 (-reset@-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioStream::PublishAudioEffects(CAudioStream *this)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  _DWORD *v4; // rax
  _DWORD *v5; // rcx
  char *v6; // rdx
  __int64 v7; // r9
  struct AudioEffectInternal *v8; // [rsp+30h] [rbp-10h] BYREF
  __int64 v9; // [rsp+38h] [rbp-8h]
  unsigned int v10; // [rsp+58h] [rbp+18h] BYREF
  void *v11; // [rsp+60h] [rbp+20h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::reset((__int64)&v8);
  if ( (int)CAudioStream::GetAudioEffects(this, &v8, &v10) >= 0 )
  {
    if ( v10 )
    {
      v2 = v10;
      v9 = v10;
      v3 = 24LL * v10;
      if ( !is_mul_ok(v10, 0x18uLL) )
        v3 = -1LL;
      v4 = operator new[](v3, (const struct std::nothrow_t *)&std::nothrow);
      v11 = v4;
      if ( v4 )
      {
        if ( v10 )
        {
          v5 = v4 + 4;
          v6 = (char *)(v8 - (struct AudioEffectInternal *)v4);
          v7 = (unsigned int)v2;
          do
          {
            *((_OWORD *)v5 - 1) = *(_OWORD *)((char *)v5 + (_QWORD)v6 - 16);
            *v5 = *(_DWORD *)((char *)v5 + (_QWORD)v6);
            v5[1] = *(_DWORD *)((char *)v5 + (_QWORD)v6 + 4) != 0;
            v5 += 6;
            --v7;
          }
          while ( v7 );
        }
        RtlPublishWnfStateData(*(_QWORD *)((char *)this + 348), 0LL, v4, 24 * v2, 0LL);
      }
      std::unique_ptr<_GUID [0]>::~unique_ptr<_GUID [0]>(&v11);
    }
    else
    {
      RtlPublishWnfStateData(*(_QWORD *)((char *)this + 348), 0LL, 0LL, 0LL, 0LL);
    }
  }
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::reset((__int64)&v8);
}
