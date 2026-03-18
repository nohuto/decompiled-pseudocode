/*
 * XREFs of ??1?$ListProxyCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@I@Bamo@Microsoft@@UEAA@XZ @ 0x180287EE8
 * Callers:
 *     ??_E?$ListProxy@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x180287F30 (--_E-$ListProxy@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxyCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,unsigned int>::~ListProxyCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,unsigned int>(
        __int64 *a1)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)a1[6];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (a1[8] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    a1[6] = 0LL;
    a1[7] = 0LL;
    a1[8] = 0LL;
  }
  return wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(a1 + 4);
}
