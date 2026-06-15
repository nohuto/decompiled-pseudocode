/*
 * XREFs of ?_Change_array@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXQEAUAudioEffectInternal@@_K1@Z @ 0x180022A84
 * Callers:
 *     ??$_Emplace_reallocate@UAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAPEAUAudioEffectInternal@@QEAU2@$$QEAU2@@Z @ 0x1800B57C0 (--$_Emplace_reallocate@UAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@UAudio.c)
 *     ??$_Insert_counted_range@PEAUAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@1@PEAUAudioEffectInternal@@_K@Z @ 0x1800C8C44 (--$_Insert_counted_range@PEAUAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@U.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180022D4C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::vector<AudioEffectInternal>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 v9; // rax
  const struct std::nothrow_t *v10; // rdx
  __int64 result; // rax
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+48h] [rbp+10h] BYREF

  v6 = *(void **)a1;
  if ( v6 )
  {
    v9 = *(_QWORD *)(a1 + 16) - (_QWORD)v6;
    v13 = v6;
    v10 = (const struct std::nothrow_t *)(8 * (v9 >> 3));
    v12 = (unsigned __int64)v10;
    if ( (unsigned __int64)v10 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v13, &v12);
      v10 = (const struct std::nothrow_t *)v12;
      v6 = v13;
    }
    operator delete(v6, v10);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 24 * a3;
  result = 3 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 24 * a4;
  return result;
}
