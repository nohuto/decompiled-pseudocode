/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180015EC0
 * Callers:
 *     ??4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z @ 0x18002C3FC (--4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x18002D5AC (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003C6AC (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B348 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     memmove_0 @ 0x180048BB8 (memmove_0.c)
 */

char *__fastcall std::wstring::assign(char *a1, __int64 a2, unsigned __int64 a3)
{
  char *v5; // rsi
  const void *v6; // rdx
  char **v7; // rcx
  char *v8; // r8
  __int64 v9; // rdi

  if ( a3 > *((_QWORD *)a1 + 3) )
    return (char *)std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
                     a1,
                     a3,
                     a3,
                     a2);
  v5 = a1;
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(a1) )
    v5 = *v7;
  v7[2] = v8;
  v9 = 2LL * (_QWORD)v8;
  memmove_0(v5, v6, 2LL * (_QWORD)v8);
  *(_WORD *)&v5[v9] = 0;
  return a1;
}
