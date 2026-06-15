/*
 * XREFs of ??$_Construct_n@PEAGPEAG@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K$$QEAPEAG1@Z @ 0x180126894
 * Callers:
 *     ??$transform_primary@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@1@0@Z @ 0x180127F1C (--$transform_primary@V-$_String_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@@-$_.c)
 *     ??$transform_primary@PEAG@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEAG0@Z @ 0x18013AFA8 (--$transform_primary@PEAG@-$_Regex_traits@G@std@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 * Callees:
 *     ??1?$_Tidy_guard@V?$vector@GV?$allocator@G@std@@@std@@@std@@QEAA@XZ @ 0x1801285C0 (--1-$_Tidy_guard@V-$vector@GV-$allocator@G@std@@@std@@@std@@QEAA@XZ.c)
 *     ?_Buy_nonzero@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K@Z @ 0x18013035C (-_Buy_nonzero@-$vector@GV-$allocator@G@std@@@std@@AEAAX_K@Z.c)
 *     memmove_0 @ 0x18015E888 (memmove_0.c)
 */

__int64 __fastcall std::vector<unsigned short>::_Construct_n<unsigned short *,unsigned short *>(
        void **a1,
        __int64 a2,
        const void **a3,
        _QWORD *a4)
{
  signed __int64 v7; // rbx
  char *v8; // rdi
  __int64 result; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    std::vector<unsigned short>::_Buy_nonzero();
    v7 = *a4 - (_QWORD)*a3;
    v8 = (char *)*a1;
    memmove_0(*a1, *a3, v7);
    v10 = 0LL;
    a1[1] = &v8[2 * (v7 >> 1)];
    return std::_Tidy_guard<std::vector<unsigned short>>::~_Tidy_guard<std::vector<unsigned short>>(&v10);
  }
  return result;
}
