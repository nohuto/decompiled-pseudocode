/*
 * XREFs of ?_Assign_rv@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX$$QEAV12@@Z @ 0x180069D54
 * Callers:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@$$QEAV01@@Z @ 0x180066D64 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180067378 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800227F2 (memmove_0.c)
 */

__int64 __fastcall std::string::_Assign_rv(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( a2[3] >= 0x10uLL )
  {
    *a1 = *a2;
    *a2 = 0LL;
  }
  else if ( a2[2] != -1LL )
  {
    memmove_0(a1, a2, a2[2] + 1LL);
  }
  a1[2] = a2[2];
  result = a2[3];
  a1[3] = result;
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
