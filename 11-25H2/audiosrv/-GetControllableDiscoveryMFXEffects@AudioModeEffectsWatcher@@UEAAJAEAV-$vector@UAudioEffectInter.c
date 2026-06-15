/*
 * XREFs of ?GetControllableDiscoveryMFXEffects@AudioModeEffectsWatcher@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800826A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U_tlgWrapperPtrSize@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU_tlgWrapperPtrSize@@6@Z @ 0x180001924 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U_tlgWrapperPtrSiz.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??1?$unique_any_array_ptr@EU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@2@@wil@@QEAA@XZ @ 0x1800A2FA4 (--1-$unique_any_array_ptr@EU-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@Uempty_de.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??$_Emplace_back_with_unused_capacity@UAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAAEAUAudioEffectInternal@@$$QEAU2@@Z @ 0x1800B5798 (--$_Emplace_back_with_unused_capacity@UAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$a.c)
 *     ??$_Emplace_reallocate@UAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAPEAUAudioEffectInternal@@QEAU2@$$QEAU2@@Z @ 0x1800B57C0 (--$_Emplace_reallocate@UAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@UAudio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioModeEffectsWatcher::GetControllableDiscoveryMFXEffects(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r15
  __int64 *i; // rsi
  __int64 v6; // rcx
  __int64 j; // rdi
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __int128 v11; // xmm0
  bool v12; // zf
  struct AudioSrvTelemetryProvider *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int16 v17; // [rsp+50h] [rbp-29h] BYREF
  __int64 v18; // [rsp+58h] [rbp-21h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-19h] BYREF
  __int64 v20; // [rsp+68h] [rbp-11h]
  const WCHAR *v21; // [rsp+70h] [rbp-9h] BYREF
  __int64 v22; // [rsp+78h] [rbp-1h] BYREF
  int v23; // [rsp+80h] [rbp+7h]
  __int128 v24; // [rsp+88h] [rbp+Fh] BYREF
  int v25; // [rsp+98h] [rbp+1Fh]
  BOOL v26; // [rsp+9Ch] [rbp+23h]

  v2 = *(__int64 **)(a1 + 88);
  for ( i = *(__int64 **)(a1 + 80); i != v2; ++i )
  {
    v6 = *i;
    pv = 0LL;
    v20 = 0LL;
    LODWORD(v18) = 0;
    if ( (*(int (__fastcall **)(__int64, LPVOID *, __int64 *, _QWORD))(*(_QWORD *)v6 + 32LL))(
           v6,
           &pv,
           &v18,
           *(_QWORD *)(a1 + 56)) >= 0 )
    {
      for ( j = 0LL; (unsigned int)j < (unsigned int)v18; j = (unsigned int)(j + 1) )
      {
        v8 = a2[1];
        v9 = *a2;
        if ( *a2 == v8 )
          goto LABEL_12;
        do
        {
          v10 = *(_QWORD *)v9 - *((_QWORD *)pv + 3 * j);
          if ( *(_QWORD *)v9 == *((_QWORD *)pv + 3 * j) )
            v10 = *(_QWORD *)(v9 + 8) - *((_QWORD *)pv + 3 * j + 1);
          if ( !v10 )
            break;
          v9 += 24LL;
        }
        while ( v9 != v8 );
        if ( v9 == v8 )
        {
LABEL_12:
          v11 = *(_OWORD *)((char *)pv + 24 * j);
          v25 = *((_DWORD *)pv + 6 * j + 4);
          v12 = *((_DWORD *)pv + 6 * j + 5) == 1;
          v24 = v11;
          v26 = v12;
          if ( v8 == a2[2] )
            std::vector<AudioEffectInternal>::_Emplace_reallocate<AudioEffectInternal>(a2, v8, &v24);
          else
            std::vector<AudioEffectInternal>::_Emplace_back_with_unused_capacity<AudioEffectInternal>(a2, &v24);
        }
        else
        {
          *(_DWORD *)(v9 + 20) |= *((_DWORD *)pv + 6 * j + 5) == 1;
          *(_DWORD *)(v9 + 16) |= *((_DWORD *)pv + 6 * j + 4);
        }
      }
      wil::unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>(&pv);
    }
    else if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
      v20 = 0LL;
    }
  }
  v17 = -21845 * ((a2[1] - *a2) >> 3);
  v13 = AudioSrvTelemetryProvider::Instance();
  if ( **((_DWORD **)v13 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v13 + 1), 256LL) )
  {
    v22 = *a2;
    DWORD2(v24) = 2;
    *(_QWORD *)&v24 = &v17;
    v18 = a1 + 40;
    v21 = *(const WCHAR **)(a1 + 32);
    pv = *(LPVOID *)(a1 + 72);
    v23 = 24 * v17;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
      v14,
      (int)&unk_18019E5B2,
      v14,
      v15,
      (__int64)&pv,
      &v21,
      &v18,
      (__int64 *)&v24,
      &v22);
  }
  return 0LL;
}
