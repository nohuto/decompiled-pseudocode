/*
 * XREFs of ??$_Insert_counted_range@PEAUAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@1@PEAUAudioEffectInternal@@_K@Z @ 0x1800C8C44
 * Callers:
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@std@@$0A@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@1@V21@1@Z @ 0x1800C8EB4 (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UAudioEffectInternal@@@std@@@std@@.c)
 * Callees:
 *     ?_Change_array@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXQEAUAudioEffectInternal@@_K1@Z @ 0x180022A84 (-_Change_array@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@AEA.c)
 *     ?_Calculate_growth@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBA_K_K@Z @ 0x1800A1DD4 (-_Calculate_growth@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@UAudioEffectInternal@@@std@@@std@@YAPEAUAudioEffectInternal@@AEAV?$allocator@UAudioEffectInternal@@@0@AEA_K@Z @ 0x1800B5760 (--$_Allocate_at_least_helper@V-$allocator@UAudioEffectInternal@@@std@@@std@@YAPEAUAudioEffectInt.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5E90 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     memmove_0 @ 0x18015E888 (memmove_0.c)
 */

void *__fastcall std::vector<AudioEffectInternal>::_Insert_counted_range<AudioEffectInternal *>(
        _QWORD *a1,
        char *a2,
        void *a3,
        size_t a4)
{
  _BYTE *v7; // r13
  char *v8; // rsi
  void *result; // rax
  char *v10; // r15
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  char *v13; // rax
  char *v14; // r14
  unsigned __int64 v15; // r13
  size_t v16; // r8
  const void *v17; // rdx
  char *v18; // rcx
  signed __int64 v19; // r15
  _QWORD *v20; // [rsp+20h] [rbp-58h]
  char *v21; // [rsp+20h] [rbp-58h]
  _BYTE *v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  unsigned __int64 v25; // [rsp+88h] [rbp+10h] BYREF
  void *Src; // [rsp+90h] [rbp+18h]
  size_t Size; // [rsp+98h] [rbp+20h]

  Size = a4;
  Src = a3;
  v25 = (unsigned __int64)a2;
  v20 = a1 + 1;
  v7 = (_BYTE *)*a1;
  v22 = (_BYTE *)*a1;
  v8 = (char *)a1[1];
  result = (void *)((unsigned __int64)((unsigned __int128)((__int64)(a1[2] - (_QWORD)v8) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63);
  if ( a4 )
  {
    if ( a4 <= (a1[2] - (_QWORD)v8) / 24LL )
    {
      v19 = 24 * a4;
      if ( a4 >= 0xAAAAAAAAAAAAAAABuLL * ((v8 - a2) >> 3) )
      {
        memmove_0(&a2[v19], a2, v8 - a2);
        *v20 = &a2[8 * ((v8 - a2) >> 3) + v19];
      }
      else
      {
        memmove_0(v8, &v8[-v19], 24 * a4);
        *v20 = &v8[24 * (v19 / 24)];
        memmove_0(&a2[v19], a2, &v8[-v19] - a2);
      }
      return memmove_0(a2, Src, v19);
    }
    else
    {
      v10 = (char *)(v8 - v7);
      v11 = 0xAAAAAAAAAAAAAAABuLL * ((v8 - v7) >> 3);
      if ( a4 > 0xAAAAAAAAAAAAAAALL - v11 )
        std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
      v23 = v11 + a4;
      v25 = std::vector<AudioEffectInternal>::_Calculate_growth(a1, v11 + a4);
      v13 = (char *)std::_Allocate_at_least_helper<std::allocator<AudioEffectInternal>>(v12, &v25);
      v14 = v13;
      v21 = v13;
      Size = a2 - v7;
      v15 = 0xAAAAAAAAAAAAAAABuLL * ((a2 - v7) >> 3);
      try
      {
        memmove_0(&v13[24 * v15], Src, 24 * a4);
        if ( a4 == 1 && a2 == v8 )
        {
          v16 = (size_t)v10;
          v17 = v22;
          v18 = v14;
        }
        else
        {
          memmove_0(v14, v22, Size);
          v18 = &v14[24 * a4 + 24 * v15];
          v16 = v8 - a2;
          v17 = a2;
        }
        memmove_0(v18, v17, v16);
        result = (void *)std::vector<AudioEffectInternal>::_Change_array((__int64)a1, (__int64)v14, v23, v25);
      }
      catch ( ... )
      {
        std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(24 * v25));
        throw;
      }
    }
  }
  return result;
}
