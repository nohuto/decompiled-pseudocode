/*
 * XREFs of ??$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@AEAAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@1@QEAU21@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@Z @ 0x180055248
 * Callers:
 *     ?AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z @ 0x1800556E0 (-AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0InputInfoMetadata@InfoMetadata@@QEAA@AEBU01@@Z @ 0x1800557F0 (--0InputInfoMetadata@InfoMetadata@@QEAA@AEBU01@@Z.c)
 *     ??$_Uninitialized_move@PEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@YAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@0@@Z @ 0x18005591C (--$_Uninitialized_move@PEAU-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V-$allocat.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@@@std@@YAXPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@0@QEAU10@AEAV?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@0@@Z @ 0x18009A6B0 (--$_Destroy_range@V-$allocator@U-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009AC3C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall std::vector<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>::_Emplace_reallocate<enum InputType &,InfoMetadata::InputInfoMetadata &>(
        char **a1,
        char *a2,
        _DWORD *a3,
        const struct InfoMetadata::InputInfoMetadata *a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r13
  char *v12; // rdi
  char *v13; // rsi
  char *v14; // rdx
  char *v15; // r8
  char *v16; // rcx
  char *v18; // [rsp+70h] [rbp+8h]
  __int64 v19; // [rsp+78h] [rbp+10h]

  v6 = (a2 - *a1) / 392;
  v7 = (a1[1] - *a1) / 392;
  if ( v7 == 0xA72F05397829CBLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 392;
  if ( v9 <= 0xA72F05397829CBLL - (v9 >> 1) )
  {
    v10 = v8;
    if ( (v9 >> 1) + v9 >= v8 )
      v10 = (v9 >> 1) + v9;
    v19 = v10;
    if ( v10 > 0xA72F05397829CBLL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v10 = 0xA72F05397829CBLL;
    v19 = 0xA72F05397829CBLL;
  }
  v11 = 392 * v10;
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(392 * v10);
  v13 = &v12[392 * v6];
  try
  {
    *(_DWORD *)v13 = *a3;
    InfoMetadata::InputInfoMetadata::InputInfoMetadata((InfoMetadata::InputInfoMetadata *)(v13 + 8), a4);
    v18 = v13;
    v14 = a1[1];
    v15 = v12;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<std::pair<enum InputType,InfoMetadata::InputInfoMetadata> *,std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(
        v16,
        a2,
        v12);
      v18 = v12;
      v15 = v13 + 392;
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<std::pair<enum InputType,InfoMetadata::InputInfoMetadata> *,std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(
      v16,
      v14,
      v15);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(v18, v13 + 392);
    std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(392 * v19));
    throw;
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(*a1, a1[1]);
    std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)(392 * ((a1[2] - *a1) / 392)));
  }
  *a1 = v12;
  a1[1] = &v12[392 * v8];
  a1[2] = &v12[v11];
  return v13;
}
