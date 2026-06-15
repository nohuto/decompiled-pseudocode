/*
 * XREFs of ?_Char_to_elts@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU?$_Sequence@G@2@@Z @ 0x18014798C
 * Callers:
 *     ?_Add_equiv@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z @ 0x180146C94 (-_Add_equiv@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z.c)
 *     ?_Do_ex_class@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z @ 0x180148378 (-_Do_ex_class@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     ?_Insert@?$_Buf@G@std@@QEAAXG@Z @ 0x180148A60 (-_Insert@-$_Buf@G@std@@QEAAXG@Z.c)
 */

_QWORD *__fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Char_to_elts(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        __int64 *a5)
{
  __int64 *v5; // rbx
  _QWORD *v9; // rdi
  _QWORD *result; // rax
  __int64 v11; // rbx

  v5 = a5;
  v9 = (_QWORD *)*a5;
  if ( !*a5 )
    goto LABEL_7;
  result = (_QWORD *)*a5;
  while ( 1 )
  {
    v9 = result;
    if ( a4 >= *(_DWORD *)result )
      break;
    v5 = result + 3;
    v9 = (_QWORD *)result[3];
    result = v9;
    if ( !v9 )
      goto LABEL_7;
  }
  if ( a4 != *(_DWORD *)result )
  {
LABEL_7:
    result = operator new(0x20uLL);
    if ( result )
    {
      *(_DWORD *)result = a4;
      *((_DWORD *)result + 2) = 0;
      *((_DWORD *)result + 3) = 0;
      result[2] = 0LL;
    }
    *v5 = (__int64)result;
    result[3] = v9;
  }
  v11 = *v5;
  while ( a2 != a3 )
    result = (_QWORD *)std::_Buf<unsigned short>::_Insert(v11 + 8, *a2++);
  return result;
}
