/*
 * XREFs of ?_Get_deleter@?$_Ref_count_resource@PEAEU?$default_delete@$$BY0A@E@std@@@std@@UEBAPEAXAEBVtype_info@@@Z @ 0x1802A7330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_resource<unsigned char *,std::default_delete<unsigned char [0]>>::_Get_deleter(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx

  v3 = __std_type_info_compare(a2 + 8, &qword_1803F9428);
  v4 = 0LL;
  if ( !v3 )
    return a1 + 16;
  return v4;
}
