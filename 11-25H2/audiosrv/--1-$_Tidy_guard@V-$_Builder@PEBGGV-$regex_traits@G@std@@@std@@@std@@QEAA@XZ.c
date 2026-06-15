/*
 * XREFs of ??1?$_Tidy_guard@V?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@@std@@QEAA@XZ @ 0x18013B6CC
 * Callers:
 *     ?_Compile@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Root_node@2@XZ @ 0x18013F4F0 (-_Compile@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Root_node@2@XZ.c)
 *     _std::_Parser_unsigned_short_const___unsigned_short_std::regex_traits_unsigned_short___::_Compile_::_1_::dtor$0 @ 0x180168A1C (_std--_Parser_unsigned_short_const___unsigned_short_std--regex_traits_unsigned_short___--_Compil.c)
 * Callees:
 *     ?_Destroy_node@std@@YAXPEAV_Node_base@1@0@Z @ 0x18013F65C (-_Destroy_node@std@@YAXPEAV_Node_base@1@0@Z.c)
 */

void __fastcall std::_Tidy_guard<std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>>::~_Tidy_guard<std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>>(
        struct std::_Node_base ***a1)
{
  struct std::_Node_base **v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    std::_Destroy_node(*v1, 0LL);
    *v1 = 0LL;
  }
}
