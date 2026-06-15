/*
 * XREFs of ??$_Uninitialized_move@PEAV?$basic_regex@GV?$regex_traits@G@std@@@std@@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@2@@std@@YAPEAV?$basic_regex@GV?$regex_traits@G@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@0@@Z @ 0x180143434
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$basic_regex@GV?$regex_traits@G@std@@@std@@@?$vector@V?$basic_regex@GV?$regex_traits@G@std@@@std@@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@2@@std@@AEAAPEAV?$basic_regex@GV?$regex_traits@G@std@@@1@QEAV21@AEBV21@@Z @ 0x180142A98 (--$_Emplace_reallocate@AEBV-$basic_regex@GV-$regex_traits@G@std@@@std@@@-$vector@V-$basic_regex@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@std@@@std@@YAXPEAV?$basic_regex@GV?$regex_traits@G@std@@@0@QEAV10@AEAV?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@0@@Z @ 0x180142A60 (--$_Destroy_range@V-$allocator@V-$basic_regex@GV-$regex_traits@G@std@@@std@@@std@@@std@@YAXPEAV-.c)
 *     ??0?$regex_traits@G@std@@QEAA@XZ @ 0x1801440A0 (--0-$regex_traits@G@std@@QEAA@XZ.c)
 *     ?_Tidy@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x1801491DC (-_Tidy@-$basic_regex@GV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Uninitialized_move<std::basic_regex<unsigned short,std::regex_traits<unsigned short>> *,std::allocator<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v3; // rbx
  _QWORD *v5; // rdi
  signed __int64 v6; // rsi

  v3 = a3;
  v5 = a1;
  if ( a1 != a2 )
  {
    v6 = (char *)a3 - (char *)a1;
    do
    {
      *v3 = 0LL;
      std::regex_traits<unsigned short>::regex_traits<unsigned short>((char *)v5 + v6 + 8);
      if ( v3 != v5 )
      {
        std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::_Tidy(v3);
        *v3 = *v5;
        *v5 = 0LL;
      }
      v3 += 5;
      v5 += 5;
    }
    while ( v5 != a2 );
  }
  std::_Destroy_range<std::allocator<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>>(
    (__int64)v3,
    (__int64)v3);
  return v3;
}
