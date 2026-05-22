/*
 * XREFs of ??$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@?$vector@UHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@AEAAPEAUHotKeyRegistrationData@@QEAU2@AEBU2@@Z @ 0x1801045A4
 * Callers:
 *     ?ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z @ 0x18007AAA8 (-ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAG.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009AC3C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

char *__fastcall std::vector<HotKeyRegistrationData>::_Emplace_reallocate<HotKeyRegistrationData const &>(
        __int64 a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // r15
  char *v12; // rax
  char *v13; // rdi
  char *v14; // rsi
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  char *v17; // rcx
  size_t v18; // r8
  unsigned __int64 v19; // rax
  char *result; // rax
  __int64 v21; // [rsp+50h] [rbp+8h]
  char *v22; // [rsp+58h] [rbp+10h]

  v6 = (__int64)&a2[-*(_QWORD *)a1] / 12;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2);
  if ( v7 == 0x1555555555555555LL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2);
  if ( v9 <= 0x1555555555555555LL - (v9 >> 1) )
  {
    v19 = (v9 >> 1) + v9;
    v10 = v8;
    if ( v19 >= v8 )
      v10 = v19;
    v21 = v10;
    if ( v10 > 0x1555555555555555LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v10 = 0x1555555555555555LL;
    v21 = 0x1555555555555555LL;
  }
  v11 = 12 * v10;
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(12 * v10);
  v13 = v12;
  v22 = v12;
  try
  {
    v14 = &v12[12 * v6];
    *(_QWORD *)v14 = *(_QWORD *)a3;
    *((_DWORD *)v14 + 2) = *(_DWORD *)(a3 + 8);
    v15 = *(_BYTE **)(a1 + 8);
    v16 = *(_BYTE **)a1;
    v17 = v12;
    if ( a2 == v15 )
    {
      v18 = v15 - v16;
    }
    else
    {
      memmove_0(v12, v16, (size_t)&a2[-*(_QWORD *)a1]);
      v17 = v14 + 12;
      v18 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
      v16 = a2;
    }
    memmove_0(v17, v16, v18);
    if ( *(_QWORD *)a1 )
      std::_Deallocate<16,0>(
        *(char **)a1,
        (const struct std::nothrow_t *)(4 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2)));
    *(_QWORD *)a1 = v13;
    *(_QWORD *)(a1 + 8) = &v13[12 * v8];
    *(_QWORD *)(a1 + 16) = &v13[v11];
    result = v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)(12 * v21));
    throw;
  }
  return result;
}
