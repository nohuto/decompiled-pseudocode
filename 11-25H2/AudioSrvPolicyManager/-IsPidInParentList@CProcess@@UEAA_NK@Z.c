/*
 * XREFs of ?IsPidInParentList@CProcess@@UEAA_NK@Z @ 0x1800354F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@K@std@@@std@@@std@@K@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@K@std@@@std@@@0@V10@V10@AEBK@Z @ 0x180018B3C (--$find@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@K@std@@@std@@@std@@K@std@@YA-AV-$_Ve.c)
 */

bool __fastcall CProcess::IsPidInParentList(CProcess *this, unsigned int a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  return *std::find<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned long>>>,unsigned long>(
            &v3,
            *((_QWORD *)this + 16),
            *((_QWORD *)this + 17),
            &v4) != *((_QWORD *)this + 17);
}
