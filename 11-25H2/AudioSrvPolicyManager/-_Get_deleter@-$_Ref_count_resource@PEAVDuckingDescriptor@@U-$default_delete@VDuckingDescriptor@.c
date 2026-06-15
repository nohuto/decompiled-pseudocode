/*
 * XREFs of ?_Get_deleter@?$_Ref_count_resource@PEAVDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@std@@UEBAPEAXAEBVtype_info@@@Z @ 0x180031910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_resource<DuckingDescriptor *,std::default_delete<DuckingDescriptor>>::_Get_deleter(
        __int64 a1,
        __int64 a2)
{
  if ( (unsigned int)__std_type_info_compare(a2 + 8, &qword_1800663F8) )
    return 0LL;
  else
    return a1 + 16;
}
