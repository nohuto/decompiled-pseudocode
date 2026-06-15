/*
 * XREFs of ?GetControllableEffects@CAudioStream@@AEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800837EC
 * Callers:
 *     ?GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z @ 0x180083638 (-GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXXZ @ 0x1800A6B00 (-_Tidy@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXXZ.c)
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@std@@$0A@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@1@V21@1@Z @ 0x1800C8EB4 (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UAudioEffectInternal@@@std@@@std@@.c)
 *     ?GetEffectsFromApo@CAudioStream@@AEAAJPEAUIAPOWrapperSrv@@AEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800C92CC (-GetEffectsFromApo@CAudioStream@@AEAAJPEAUIAPOWrapperSrv@@AEAV-$vector@UAudioEffectInternal@@V-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioStream::GetControllableEffects(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // r15
  int EffectsFromApo; // eax
  unsigned int v7; // esi
  const char *v8; // r9
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF

  v4 = *(_QWORD **)(a1 + 232);
  v5 = *(_QWORD **)(a1 + 240);
  try
  {
    while ( v4 != v5 )
    {
      EffectsFromApo = CAudioStream::GetEffectsFromApo(a1, *v4, a2);
      v7 = EffectsFromApo;
      if ( EffectsFromApo < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x736,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)EffectsFromApo);
        return v7;
      }
      ++v4;
    }
    v15 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 656));
    v16 = a1 + 656;
    v10 = v15;
    v11 = 0LL;
    v15 = 0LL;
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v11 = v15;
    }
    if ( *(_QWORD *)(a1 + 584) )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 8) + 120LL))(a1 + 8, &v15);
      v11 = v15;
    }
    if ( a1 != -656 )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 656));
      v11 = v15;
    }
    if ( v11 )
    {
      v12 = 0LL;
      v13 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 464LL))(v11, &v12) >= 0 )
        std::vector<AudioEffectInternal>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AudioEffectInternal>>>,0>(
          a2,
          (unsigned int)&v16,
          *(_QWORD *)(a2 + 8),
          v12,
          *((__int64 *)&v12 + 1));
      std::vector<AudioEffectInternal>::_Tidy(&v12);
      v11 = v15;
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x74D,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                           v8);
  }
  return result;
}
