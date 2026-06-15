/*
 * XREFs of ?GetControllableSystemEffectsListRemote@CSystemEffectWrapper@@UEAAJPEAPEAUAudioEffectInternal@@PEAIPEAX@Z @ 0x140075290
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAAXXZ @ 0x14004B814 (-reset@-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFre.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetControllableSystemEffectsListRemote(
        CSystemEffectWrapper *this,
        struct AudioEffectInternal **a2,
        unsigned int *a3,
        void *a4)
{
  __int64 v7; // rdx
  unsigned int v8; // ebx
  char *v9; // rdi
  __int64 v10; // rax
  __int64 (__fastcall *v11)(char *, _QWORD *, unsigned int *, void *); // rbx
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  struct AudioEffectInternal *v15; // r8
  unsigned int v16; // eax
  __int64 i; // r9
  __int64 v18; // rdx
  BOOL v19; // ecx
  _QWORD v21[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v23; // [rsp+68h] [rbp+28h] BYREF

  if ( a2 )
  {
    if ( !a3 )
    {
      v7 = 855LL;
      goto LABEL_3;
    }
    *a2 = 0LL;
    *a3 = 0;
    if ( !*((_QWORD *)this + 15) )
    {
      v8 = -2147467263;
      v7 = 860LL;
      goto LABEL_4;
    }
    v21[0] = 0LL;
    v9 = (char *)this - 64;
    v10 = *((_QWORD *)this - 8);
    v21[1] = 0LL;
    v23 = 0;
    v11 = *(__int64 (__fastcall **)(char *, _QWORD *, unsigned int *, void *))(v10 + 32);
    wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)v21);
    v12 = v11(v9, v21, &v23, a4);
    v8 = v12;
    if ( v12 < 0 )
    {
      v13 = (unsigned int)v12;
      v14 = 864LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp",
        (const char *)v13);
LABEL_19:
      wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)v21);
      return v8;
    }
    if ( v23 )
    {
      v15 = (struct AudioEffectInternal *)CoTaskMemAlloc(24LL * v23);
      if ( !v15 )
      {
        v8 = -2147024882;
        v14 = 872LL;
        v13 = 2147942414LL;
        goto LABEL_14;
      }
      v16 = v23;
      for ( i = 0LL; (unsigned int)i < v23; v16 = v23 )
      {
        v18 = 3 * i;
        *(_OWORD *)((char *)v15 + 8 * v18) = *(_OWORD *)(v21[0] + 24 * i);
        *((_DWORD *)v15 + 2 * v18 + 4) = *(_DWORD *)(v21[0] + 24 * i + 16);
        v19 = *(_DWORD *)(v21[0] + 24 * i + 20) == 1;
        i = (unsigned int)(i + 1);
        *((_DWORD *)v15 + 2 * v18 + 5) = v19;
      }
      *a3 = v16;
      *a2 = v15;
    }
    v8 = 0;
    goto LABEL_19;
  }
  v7 = 854LL;
LABEL_3:
  v8 = -2147467261;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp",
    (const char *)v8);
  return v8;
}
