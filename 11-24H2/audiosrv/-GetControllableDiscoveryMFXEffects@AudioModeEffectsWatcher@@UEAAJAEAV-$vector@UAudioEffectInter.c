/*
 * XREFs of ?GetControllableDiscoveryMFXEffects@AudioModeEffectsWatcher@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x18006F970
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U_tlgWrapperPtrSize@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU_tlgWrapperPtrSize@@6@Z @ 0x180001924 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U_tlgWrapperPtrSiz.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??0?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x1800AB988 (--0-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??1?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x1800AB99C (--1-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??A?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAAEAUAUDIO_SYSTEMEFFECT@@_K@Z @ 0x1800AB9A8 (--A-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     ??I?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAPEAPEAUAUDIO_SYSTEMEFFECT@@XZ @ 0x1800AB9BC (--I-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     ??$_Emplace_back_with_unused_capacity@UAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAAEAUAudioEffectInternal@@$$QEAU2@@Z @ 0x1800B4B88 (--$_Emplace_back_with_unused_capacity@UAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$a.c)
 *     ??$_Emplace_reallocate@UAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAPEAUAudioEffectInternal@@QEAU2@$$QEAU2@@Z @ 0x1800B4BB0 (--$_Emplace_reallocate@UAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@UAudio.c)
 *     _lambda_a8a3ec141be49a0429a3d190c13e56dc_::_lambda_a8a3ec141be49a0429a3d190c13e56dc_ @ 0x1800B4E3C (_lambda_a8a3ec141be49a0429a3d190c13e56dc_--_lambda_a8a3ec141be49a0429a3d190c13e56dc_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioModeEffectsWatcher::GetControllableDiscoveryMFXEffects(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // r12
  __int64 *i; // r15
  __int64 v6; // rsi
  __int64 v7; // rbx
  int (__fastcall *v8)(__int64, __int64, _QWORD **, __int64); // rdi
  __int64 v9; // rax
  __m128i *v10; // rax
  unsigned int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // r8
  __m128i v14; // xmm0
  __int64 v15; // r11
  _QWORD *v16; // rax
  _QWORD *v17; // r8
  _QWORD *v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r10
  __int128 v22; // xmm0
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // r8
  struct AudioSrvTelemetryProvider *v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int16 v32; // [rsp+50h] [rbp-49h] BYREF
  const WCHAR *v33; // [rsp+58h] [rbp-41h] BYREF
  _QWORD *v34; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v35[3]; // [rsp+68h] [rbp-31h] BYREF
  __m128i v36; // [rsp+80h] [rbp-19h] BYREF
  __int64 v37; // [rsp+90h] [rbp-9h] BYREF
  int v38; // [rsp+98h] [rbp-1h]
  __int128 v39; // [rsp+A0h] [rbp+7h] BYREF
  int v40; // [rsp+B0h] [rbp+17h]
  BOOL v41; // [rsp+B4h] [rbp+1Bh]

  v2 = (__int64 *)a1[11];
  for ( i = (__int64 *)a1[10]; i != v2; ++i )
  {
    wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(v35);
    v6 = *i;
    LODWORD(v34) = 0;
    v7 = a1[7];
    v8 = *(int (__fastcall **)(__int64, __int64, _QWORD **, __int64))(*(_QWORD *)v6 + 32LL);
    v9 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator&(v35);
    if ( v8(v6, v9, &v34, v7) >= 0 )
    {
      LODWORD(v33) = 0;
      if ( (_DWORD)v34 )
      {
        do
        {
          v10 = (__m128i *)lambda_a8a3ec141be49a0429a3d190c13e56dc_::_lambda_a8a3ec141be49a0429a3d190c13e56dc_(
                             &v37,
                             v35,
                             &v33);
          v12 = a2[1];
          v13 = *a2;
          v14 = *v10;
          v36 = *v10;
          if ( v13 == v12 )
            goto LABEL_11;
          v15 = *(unsigned int *)_mm_srli_si128(v14, 8).m128i_u32[0];
          do
          {
            v16 = (_QWORD *)wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                              v36.m128i_i64[0],
                              v15);
            v19 = *v17 - *v16;
            if ( *v17 == *v16 )
              v19 = v17[1] - v16[1];
            if ( !v19 )
              break;
            v17 += 3;
          }
          while ( v17 != v18 );
          if ( v17 == v18 )
          {
LABEL_11:
            v20 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                    v35,
                    v11);
            v22 = *(_OWORD *)v20;
            v40 = *(_DWORD *)(v20 + 16);
            v23 = *(_DWORD *)(v20 + 20) == 1;
            v39 = v22;
            v41 = v23;
            if ( v21 == a2[2] )
              std::vector<AudioEffectInternal>::_Emplace_reallocate<AudioEffectInternal>(a2, v21, &v39);
            else
              std::vector<AudioEffectInternal>::_Emplace_back_with_unused_capacity<AudioEffectInternal>(a2, &v39);
          }
          else
          {
            v24 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                    v35,
                    v11);
            *(_DWORD *)(v25 + 20) |= *(_DWORD *)(v24 + 20) == 1;
            v26 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                    v35,
                    (unsigned int)v33);
            *(_DWORD *)(v27 + 16) |= *(_DWORD *)(v26 + 16);
          }
          LODWORD(v33) = (_DWORD)v33 + 1;
        }
        while ( (unsigned int)v33 < (unsigned int)v34 );
      }
    }
    wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(v35);
  }
  v32 = -21845 * ((a2[1] - *a2) >> 3);
  v28 = AudioSrvTelemetryProvider::Instance();
  if ( **((_DWORD **)v28 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v28 + 1), 256LL) )
  {
    v37 = *a2;
    v36.m128i_i32[2] = 2;
    v36.m128i_i64[0] = (__int64)&v32;
    v34 = a1 + 5;
    v33 = (const WCHAR *)a1[4];
    v35[0] = a1[9];
    v38 = 24 * v32;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
      v29,
      (int)&unk_1801A8FE7,
      v29,
      v30,
      (__int64)v35,
      &v33,
      (__int64 *)&v34,
      v36.m128i_i64,
      &v37);
  }
  return 0LL;
}
