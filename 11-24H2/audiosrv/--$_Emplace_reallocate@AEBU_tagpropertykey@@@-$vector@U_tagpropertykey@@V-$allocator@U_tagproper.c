/*
 * XREFs of ??$_Emplace_reallocate@AEBU_tagpropertykey@@@?$vector@U_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@AEAAPEAU_tagpropertykey@@QEAU2@AEBU2@@Z @ 0x180149954
 * Callers:
 *     ?RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z @ 0x180149D9C (-RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$construct@UAudioEffectState@CProcessingModeParameters@@AEBU12@@?$_Default_allocator_traits@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@SAXAEAV?$allocator@UAudioEffectState@CProcessingModeParameters@@@1@QEAUAudioEffectState@CProcessingModeParameters@@AEBU34@@Z @ 0x18002AAEC (--$construct@UAudioEffectState@CProcessingModeParameters@@AEBU12@@-$_Default_allocator_traits@V-.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@U_tagpropertykey@@@std@@@std@@YAPEAU_tagpropertykey@@AEAV?$allocator@U_tagpropertykey@@@0@AEA_K@Z @ 0x18009BA38 (--$_Allocate_at_least_helper@V-$allocator@U_tagpropertykey@@@std@@@std@@YAPEAU_tagpropertykey@@A.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

__int64 __fastcall std::vector<_tagpropertykey>::_Emplace_reallocate<_tagpropertykey const &>(
        __int64 a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  char *v12; // rax
  char *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r15
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  char *v18; // rcx
  size_t v19; // r8
  __int64 result; // rax
  char *v21; // [rsp+58h] [rbp+10h] BYREF

  v6 = (__int64)&a2[-*(_QWORD *)a1] / 20;
  v7 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2);
  v8 = 0xCCCCCCCCCCCCCCCLL;
  if ( v7 == 0xCCCCCCCCCCCCCCCLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2);
  v11 = v10 >> 1;
  if ( v10 <= 0xCCCCCCCCCCCCCCCLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  v21 = (char *)v8;
  v12 = (char *)std::_Allocate_at_least_helper<std::allocator<_tagpropertykey>>(v10, &v21);
  v13 = v12;
  v21 = v12;
  try
  {
    v14 = 5 * v6;
    v15 = (__int64)&v12[20 * v6];
    std::_Default_allocator_traits<std::allocator<CProcessingModeParameters::AudioEffectState>>::construct<CProcessingModeParameters::AudioEffectState,CProcessingModeParameters::AudioEffectState const &>(
      v14,
      v15,
      a3);
    v16 = *(_BYTE **)(a1 + 8);
    v17 = *(_BYTE **)a1;
    v18 = v13;
    if ( a2 == v16 )
    {
      v19 = v16 - v17;
    }
    else
    {
      memmove_0(v13, v17, (size_t)&a2[-*(_QWORD *)a1]);
      v18 = (char *)(v15 + 20);
      v19 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
      v17 = a2;
    }
    memmove_0(v18, v17, v19);
    if ( *(_QWORD *)a1 )
      std::_Deallocate<16,0>(
        *(char **)a1,
        (const struct std::nothrow_t *)(4 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2)));
    *(_QWORD *)a1 = v13;
    *(_QWORD *)(a1 + 8) = &v13[20 * v9];
    *(_QWORD *)(a1 + 16) = &v13[20 * v8];
    result = v15;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(20 * v8));
    throw;
  }
  return result;
}
