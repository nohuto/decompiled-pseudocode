/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@IV?$allocator@I@std@@@std@@@std@@QEAA@XZ @ 0x1801306A0
 * Callers:
 *     ??0?$vector@IV?$allocator@I@std@@@std@@QEAA@AEBV01@@Z @ 0x18013037C (--0-$vector@IV-$allocator@I@std@@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@IV?$allocator@I@std@@@std@@AEAAXXZ @ 0x18013A880 (-_Tidy@-$vector@IV-$allocator@I@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<unsigned int>>::~_Tidy_guard<std::vector<unsigned int>>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return std::vector<unsigned int>::_Tidy(v1);
  return result;
}
