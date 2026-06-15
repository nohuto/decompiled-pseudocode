/*
 * XREFs of ?GetControllableSystemEffectsListRemote@CSystemEffectWrapper@@UEAAJPEAPEAUAudioEffectInternal@@PEAIPEAX@Z @ 0x140072D90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x140063948 (--0-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     ??1?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x14006395C (--1-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     ??A?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAAEAUAUDIO_SYSTEMEFFECT@@_K@Z @ 0x140063968 (--A-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     ??I?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAPEAPEAUAUDIO_SYSTEMEFFECT@@XZ @ 0x14006397C (--I-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetControllableSystemEffectsListRemote(
        CSystemEffectWrapper *this,
        struct AudioEffectInternal **a2,
        unsigned int *a3,
        void *a4)
{
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 (__fastcall *v11)(char *, __int64, unsigned int *, void *); // rbx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  struct AudioEffectInternal *v16; // r10
  unsigned int v17; // eax
  unsigned int i; // r11d
  _OWORD *v19; // rax
  unsigned int v20; // r11d
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // rax
  unsigned int v24; // r11d
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 v27; // rax
  int v28; // r11d
  __int64 v29; // r9
  _QWORD v31[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v33; // [rsp+68h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( !a3 )
    {
      v8 = 855LL;
      goto LABEL_3;
    }
    *a2 = 0LL;
    *a3 = 0;
    if ( !*((_QWORD *)this + 15) )
    {
      v9 = -2147467263;
      v8 = 860LL;
      goto LABEL_4;
    }
    wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(v31);
    v10 = *((_QWORD *)this - 8);
    v33 = 0;
    v11 = *(__int64 (__fastcall **)(char *, __int64, unsigned int *, void *))(v10 + 32);
    v12 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator&((__int64)v31);
    v13 = v11((char *)this - 64, v12, &v33, a4);
    v9 = v13;
    if ( v13 < 0 )
    {
      v14 = (unsigned int)v13;
      v15 = 864LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp",
        (const char *)v14);
LABEL_19:
      wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>((__int64)v31);
      return v9;
    }
    if ( v33 )
    {
      v16 = (struct AudioEffectInternal *)CoTaskMemAlloc(24LL * v33);
      if ( !v16 )
      {
        v9 = -2147024882;
        v15 = 872LL;
        v14 = 2147942414LL;
        goto LABEL_14;
      }
      v17 = v33;
      for ( i = 0; i < v33; v17 = v33 )
      {
        v19 = (_OWORD *)wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                          v31,
                          i);
        *(_OWORD *)(v22 + 8 * v21) = *v19;
        v23 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                v31,
                v20);
        *(_DWORD *)(v26 + 8 * v25 + 16) = *(_DWORD *)(v23 + 16);
        v27 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                v31,
                v24);
        i = v28 + 1;
        *((_DWORD *)v16 + 2 * v29 + 5) = *(_DWORD *)(v27 + 20) == 1;
      }
      *a3 = v17;
      *a2 = v16;
    }
    v9 = 0;
    goto LABEL_19;
  }
  v8 = 854LL;
LABEL_3:
  v9 = -2147467261;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp",
    (const char *)v9);
  return v9;
}
