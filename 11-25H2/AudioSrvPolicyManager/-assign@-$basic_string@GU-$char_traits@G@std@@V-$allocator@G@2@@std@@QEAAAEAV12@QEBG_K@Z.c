/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180015CA0
 * Callers:
 *     ??4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z @ 0x18002EDD8 (--4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x18002FF8C (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003EECC (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B218 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     memmove_0 @ 0x18004B3D8 (memmove_0.c)
 */

char *__fastcall std::wstring::assign(char *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  char *v6; // rsi
  const void *v7; // rdx
  char **v8; // rcx
  char *v9; // r8
  __int64 v10; // rdi

  if ( a3 > *((_QWORD *)a1 + 3) )
    return (char *)std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
                     a1,
                     a3,
                     a3,
                     a2);
  v6 = a1;
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(a1, a2, a3, a4) )
    v6 = *v8;
  v8[2] = v9;
  v10 = 2LL * (_QWORD)v9;
  memmove_0(v6, v7, 2LL * (_QWORD)v9);
  *(_WORD *)&v6[v10] = 0;
  return a1;
}
