/*
 * XREFs of ?GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800F16F0
 * Callers:
 *     ?IsStreamingEffectsOverrideLooseMatch@CSharedStreamGroupProxy@@IEAA_NAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@3@@Z @ 0x1800702E8 (-IsStreamingEffectsOverrideLooseMatch@CSharedStreamGroupProxy@@IEAA_NAEBV-$vector@UAudioEffectIn.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBUAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAPEAUAudioEffectInternal@@QEAU2@AEBU2@@Z @ 0x180022B80 (--$_Emplace_reallocate@AEBUAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@UAu.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U_tlgWrapperPtrSize@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU_tlgWrapperPtrSize@@4@Z @ 0x18004C544 (--$Write@U-$_tlgWrapperByVal@$07@@U_tlgWrapperPtrSize@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPro.c)
 *     ??1?$unique_any_array_ptr@EU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@2@@wil@@QEAA@XZ @ 0x1800A2FA4 (--1-$unique_any_array_ptr@EU-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@Uempty_de.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A5F68 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSharedStreamGroupProxy::GetEffectsFromMFXInstantiatedForStreaming(unsigned __int64 a1, __int64 a2)
{
  __int64 *v4; // r12
  __int64 *v5; // r13
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, int **, __int64 *, __int64); // rdi
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  void *v11; // rbx
  void *v12; // rdi
  HANDLE CurrentProcess; // rax
  const char *v14; // r9
  unsigned int LastError; // ebx
  const char *v16; // r9
  __int64 result; // rax
  __int64 v18; // rsi
  __int64 (__fastcall *v19)(__int64, _OWORD **, __int64 *, HANDLE); // rdi
  HANDLE v20; // rbx
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rbx
  int *v24; // rdi
  unsigned int v25; // r8d
  __int64 v26; // rcx
  unsigned int i; // ebx
  __int64 v28; // r8
  __int64 v29; // rdx
  _DWORD *v30; // r8
  int *v31; // [rsp+40h] [rbp-58h] BYREF
  __int64 v32; // [rsp+48h] [rbp-50h]
  _OWORD *v33; // [rsp+50h] [rbp-48h] BYREF
  __int64 v34; // [rsp+58h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v36; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v37; // [rsp+B0h] [rbp+18h] BYREF
  HANDLE TargetHandle; // [rsp+B8h] [rbp+20h] BYREF

  v4 = *(__int64 **)(a1 + 240);
  v5 = *(__int64 **)(a1 + 248);
  try
  {
    while ( v4 != v5 )
    {
      v31 = 0LL;
      v32 = 0LL;
      LODWORD(v37) = 0;
      v6 = *v4;
      v7 = *(__int64 (__fastcall **)(__int64, int **, __int64 *, __int64))(*(_QWORD *)*v4 + 56LL);
      v8 = *(_QWORD *)(a1 + 1792);
      wil::unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>((__int64)&v31);
      v9 = v7(v6, &v31, &v37, v8);
      v10 = v9;
      if ( v9 < 0 )
      {
        if ( v9 != -2147467263 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x64B,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v9);
          wil::unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>((__int64)&v31);
          return v10;
        }
        TargetHandle = 0LL;
        v11 = *(void **)&g_ADGProcess[2].LockCount;
        v12 = *(void **)(a1 + 1792);
        CurrentProcess = GetCurrentProcess();
        if ( !DuplicateHandle(CurrentProcess, v12, v11, &TargetHandle, 0, 0, 2u) )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x637,
                        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                        v14);
          wil::unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>((__int64)&v31);
          return LastError;
        }
        v33 = 0LL;
        v34 = 0LL;
        v18 = *v4;
        v19 = *(__int64 (__fastcall **)(__int64, _OWORD **, __int64 *, HANDLE))(*(_QWORD *)*v4 + 48LL);
        v20 = TargetHandle;
        wil::unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>((__int64)&v33);
        v21 = v19(v18, &v33, &v37, v20);
        v22 = v21;
        if ( v21 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x63A,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v21);
          wil::unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>((__int64)&v33);
          wil::unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>((__int64)&v31);
          return v22;
        }
        v23 = (unsigned int)v37;
        v34 = (unsigned int)v37;
        v24 = (int *)CoTaskMemAlloc(24LL * (unsigned int)v37);
        wil::unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>((__int64)&v31);
        v31 = v24;
        v32 = v23;
        if ( !v24 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x642,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)0x8007000ELL);
          wil::unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>((__int64)&v33);
          wil::unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>((__int64)&v31);
          return 2147942414LL;
        }
        v25 = 0;
        if ( (_DWORD)v37 )
        {
          while ( 1 )
          {
            v26 = 3LL * v25;
            *(_OWORD *)&v24[2 * v26] = v33[v25];
            v31[2 * v26 + 4] = 0;
            v31[2 * v26 + 5] = 1;
            if ( ++v25 >= (unsigned int)v37 )
              break;
            v24 = v31;
          }
        }
        wil::unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>((__int64)&v33);
      }
      else
      {
        v32 = (unsigned int)v37;
      }
      for ( i = 0; i < (unsigned int)v37; ++i )
      {
        v28 = (__int64)&v31[6 * i];
        v29 = *(_QWORD *)(a2 + 8);
        if ( v29 == *(_QWORD *)(a2 + 16) )
        {
          std::vector<AudioEffectInternal>::_Emplace_reallocate<AudioEffectInternal const &>(
            (const void **)a2,
            (_BYTE *)v29,
            v28);
        }
        else
        {
          *(_OWORD *)v29 = *(_OWORD *)v28;
          *(_QWORD *)(v29 + 16) = *(_QWORD *)(v28 + 16);
          *(_QWORD *)(a2 + 8) += 24LL;
        }
      }
      wil::unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>((__int64)&v31);
      ++v4;
    }
    LOWORD(v36) = -21845 * ((__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3);
    v30 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v30 > 4u )
    {
      v33 = *(_OWORD **)a2;
      LODWORD(v34) = 24 * (unsigned __int16)v36;
      v31 = &v36;
      LODWORD(v32) = 2;
      v37 = a1 & ((unsigned __int128)-(__int128)(a1 - 8) >> 64);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        (int)v30,
        (int)&unk_1801A1E88,
        (__int64)v30,
        (__int64)v16,
        (__int64)&v37,
        (__int64 *)&v31,
        (__int64 *)&v33);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x660,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v16);
  }
  return result;
}
