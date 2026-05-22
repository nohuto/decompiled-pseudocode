/*
 * XREFs of ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x1800E9878
 * Callers:
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800EB5A4 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@EV?$allocator@E@std@@@std@@@std@@QEAA@XZ @ 0x1800E99B0 (--1-$_Tidy_guard@V-$vector@EV-$allocator@E@std@@@std@@@std@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::vector<unsigned char>::vector<unsigned char>(_QWORD *a1, __int64 a2, __int64 a3)
{
  _WORD *v4; // rax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(6uLL);
  *a1 = v4;
  v6 = 0LL;
  a1[2] = v4 + 3;
  *(_DWORD *)v4 = 0;
  v4[2] = 0;
  a1[1] = v4 + 3;
  std::_Tidy_guard<std::vector<unsigned char>>::~_Tidy_guard<std::vector<unsigned char>>(&v6);
  return a1;
}
