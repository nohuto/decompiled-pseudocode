/*
 * XREFs of ?UpdatePMPStreamingEffectsOverride@CAudioStream@@AEAAXU_GUID@@H@Z @ 0x1800CB0FC
 * Callers:
 *     ?SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z @ 0x1800CA3C8 (-SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z.c)
 * Callees:
 *     ??4?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180061B0C (--4-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator@UAudioEffectState@CProcess.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??$_Emplace_back_with_unused_capacity@UAudioEffectState@CProcessingModeParameters@@@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAAEAUAudioEffectState@CProcessingModeParameters@@$$QEAU23@@Z @ 0x1800C89D4 (--$_Emplace_back_with_unused_capacity@UAudioEffectState@CProcessingModeParameters@@@-$vector@UAu.c)
 *     ??$_Emplace_reallocate@UAudioEffectState@CProcessingModeParameters@@@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAPEAUAudioEffectState@CProcessingModeParameters@@QEAU23@$$QEAU23@@Z @ 0x1800C8B30 (--$_Emplace_reallocate@UAudioEffectState@CProcessingModeParameters@@@-$vector@UAudioEffectState@.c)
 */

void __fastcall CAudioStream::UpdatePMPStreamingEffectsOverride(CAudioStream *this, struct _GUID *a2, int a3)
{
  const void **v5; // rbx
  _BYTE *v6; // rdx
  __int64 i; // rax
  __int64 v8; // rcx
  const char *v9; // r9
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (const void **)((char *)this + 600);
  v6 = (_BYTE *)*((_QWORD *)this + 76);
  for ( i = *((_QWORD *)this + 75); (_BYTE *)i != v6; i += 20LL )
  {
    v8 = *(_QWORD *)i - *(_QWORD *)&a2->Data1;
    if ( *(_QWORD *)i == *(_QWORD *)&a2->Data1 )
      v8 = *(_QWORD *)(i + 8) - *(_QWORD *)a2->Data4;
    if ( !v8 )
      break;
  }
  if ( (_BYTE *)i == v6 )
  {
    v10 = (__int128)*a2;
    v11 = a3;
    if ( v6 == v5[2] )
    {
      try
      {
        std::vector<CProcessingModeParameters::AudioEffectState>::_Emplace_reallocate<CProcessingModeParameters::AudioEffectState>(
          v5,
          v6,
          (__int64)&v10);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x7CB,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          v9);
        return;
      }
    }
    else
    {
      std::vector<CProcessingModeParameters::AudioEffectState>::_Emplace_back_with_unused_capacity<CProcessingModeParameters::AudioEffectState>(
        (__int64)v5,
        (__int64)&v10);
    }
  }
  else
  {
    *(_DWORD *)(i + 16) = a3;
  }
  std::vector<CProcessingModeParameters::AudioEffectState>::operator=((char **)(*((_QWORD *)this + 80) + 56LL), v5);
}
