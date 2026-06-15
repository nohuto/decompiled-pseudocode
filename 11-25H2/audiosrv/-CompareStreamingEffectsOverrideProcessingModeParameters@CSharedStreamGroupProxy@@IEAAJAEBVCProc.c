/*
 * XREFs of ?CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x18006FE24
 * Callers:
 *     ?CompareProcessingModeParameters@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x18006FD40 (-CompareProcessingModeParameters@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@PE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperPtrSize@@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperPtrSize@@55555@Z @ 0x1800011D4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U_tlgWrapperPtrSize@@U3@U3@U3@U3@U3@@.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBUAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAPEAUAudioEffectInternal@@QEAU2@AEBU2@@Z @ 0x180022B80 (--$_Emplace_reallocate@AEBUAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@UAu.c)
 *     ?IsStreamingEffectsOverrideLooseMatch@CSharedStreamGroupProxy@@IEAA_NAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@3@@Z @ 0x1800702E8 (-IsStreamingEffectsOverrideLooseMatch@CSharedStreamGroupProxy@@IEAA_NAEBV-$vector@UAudioEffectIn.c)
 *     ?HasSameOverrideWithDifferentStates@@YA_NAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@2@1@Z @ 0x18009F454 (-HasSameOverrideWithDifferentStates@@YA_NAEBV-$vector@UAudioEffectInternal@@V-$allocator@UAudioE.c)
 *     ?_Tidy@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXXZ @ 0x1800A6B00 (-_Tidy@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Emplace_back_with_unused_capacity@UAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAAEAUAudioEffectInternal@@$$QEAU2@@Z @ 0x1800B5798 (--$_Emplace_back_with_unused_capacity@UAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$a.c)
 *     ?AreEffectsOverrideEqual@@YA_NAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@2@1@Z @ 0x1800EFAE4 (-AreEffectsOverrideEqual@@YA_NAEBV-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectIntern.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSharedStreamGroupProxy::CompareStreamingEffectsOverrideProcessingModeParameters(
        CSharedStreamGroupProxy *this,
        const struct CProcessingModeParameters *a2,
        enum PMP_MATCH_TYPE *a3)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  const char *v10; // r9
  __int64 result; // rax
  __int64 i; // rbx
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int16 v17; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v18; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+78h] [rbp-C0h]
  int v20; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v21; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+98h] [rbp-A0h]
  __int64 v23; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-90h] BYREF
  int v25; // [rsp+B0h] [rbp-88h]
  int *v26; // [rsp+B8h] [rbp-80h] BYREF
  int v27; // [rsp+C0h] [rbp-78h]
  __int64 v28; // [rsp+C8h] [rbp-70h] BYREF
  int v29; // [rsp+D0h] [rbp-68h]
  unsigned __int16 *v30; // [rsp+D8h] [rbp-60h] BYREF
  int v31; // [rsp+E0h] [rbp-58h]
  __int64 v32; // [rsp+E8h] [rbp-50h] BYREF
  int v33; // [rsp+F0h] [rbp-48h]
  unsigned __int16 *v34; // [rsp+F8h] [rbp-40h] BYREF
  int v35; // [rsp+100h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]
  int v37; // [rsp+140h] [rbp+8h] BYREF
  unsigned __int16 v38; // [rsp+158h] [rbp+20h] BYREF

  try
  {
    v21 = 0LL;
    v22 = 0LL;
    v6 = (unsigned __int64)this + 8;
    v7 = *((_QWORD *)this + 224);
    if ( v7 && (v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 32LL))(v7, &v21), v9 = v8, v8 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x617,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v8);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7AE,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)v9);
      std::vector<AudioEffectInternal>::_Tidy(&v21);
      result = v9;
    }
    else
    {
      v18 = 0LL;
      v19 = 0LL;
      v13 = *((_QWORD *)&v21 + 1);
      for ( i = v21; i != v13; i += 24LL )
      {
        if ( *(_DWORD *)(i + 16) )
        {
          if ( *((_QWORD *)&v18 + 1) == v19 )
            std::vector<AudioEffectInternal>::_Emplace_reallocate<AudioEffectInternal const &>(
              (const void **)&v18,
              *((_BYTE **)&v18 + 1),
              i);
          else
            std::vector<AudioEffectInternal>::_Emplace_back_with_unused_capacity<AudioEffectInternal>(&v18, i);
        }
      }
      *(_DWORD *)a3 = 0;
      if ( (unsigned __int8)HasSameOverrideWithDifferentStates(&v18, a2, (char *)this + 272) )
      {
        std::vector<AudioEffectInternal>::_Tidy(&v18);
        std::vector<AudioEffectInternal>::_Tidy(&v21);
        result = 0LL;
      }
      else
      {
        if ( (unsigned __int8)CSharedStreamGroupProxy::IsStreamingEffectsOverrideLooseMatch(this, &v18, a2) )
        {
          *(_DWORD *)a3 = 2;
          if ( (unsigned __int8)AreEffectsOverrideEqual(&v18, a2, (char *)this + 272) )
            *(_DWORD *)a3 = 1;
        }
        v38 = -13107 * ((__int64)(*((_QWORD *)a2 + 1) - *(_QWORD *)a2) >> 2);
        v14 = v18;
        v17 = -21845 * ((__int64)(*((_QWORD *)&v18 + 1) - v18) >> 3);
        LOWORD(v37) = -13107 * ((__int64)(*((_QWORD *)this + 35) - *((_QWORD *)this + 34)) >> 2);
        v15 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
        if ( *(_DWORD *)v15 > 4u
          && (*(_DWORD *)(v15 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v15 + 24) & 0x200LL) == *(_QWORD *)(v15 + 24) )
        {
          v24 = *((_QWORD *)this + 34);
          v25 = 20 * (unsigned __int16)v37;
          v26 = &v37;
          v27 = 2;
          v28 = *(_QWORD *)a2;
          v29 = 20 * v38;
          v30 = &v38;
          v31 = 2;
          v32 = v14;
          v33 = 24 * v17;
          v34 = &v17;
          v35 = 2;
          v20 = *(_DWORD *)a3;
          v23 = v6 & -(__int64)(this != 0LL);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
            v15,
            (int)&unk_1801A1DAA,
            v15,
            v16,
            (__int64)&v23,
            (__int64)&v20,
            (__int64 *)&v34,
            &v32,
            (__int64 *)&v30,
            &v28,
            (__int64 *)&v26,
            &v24);
        }
        std::vector<AudioEffectInternal>::_Tidy(&v18);
        std::vector<AudioEffectInternal>::_Tidy(&v21);
        result = 0LL;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7E4,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v10);
  }
  return result;
}
