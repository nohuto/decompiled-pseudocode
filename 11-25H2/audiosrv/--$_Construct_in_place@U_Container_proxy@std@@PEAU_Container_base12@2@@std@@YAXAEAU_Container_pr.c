/*
 * XREFs of ??$_Construct_in_place@U_Container_proxy@std@@PEAU_Container_base12@2@@std@@YAXAEAU_Container_proxy@0@$$QEAPEAU_Container_base12@0@@Z @ 0x180117C08
 * Callers:
 *     ??0CWorkFifo@@QEAA@XZ @ 0x180117DF4 (--0CWorkFifo@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Construct_in_place<std::_Container_proxy,std::_Container_base12 *>(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax

  result = *a2;
  a1[1] = 0LL;
  *a1 = result;
  return result;
}
