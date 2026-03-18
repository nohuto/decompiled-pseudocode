/*
 * XREFs of ??_E?$ListProxy@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x18027CE30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ??1?$ListProxyCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@I@Bamo@Microsoft@@UEAA@XZ @ 0x18027CDE8 (--1-$ListProxyCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@I@Bamo@Micr.c)
 */

__int64 *__fastcall Microsoft::Bamo::Lib::dataprovider_AutoBamos::ListProxy<unsigned int>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  Microsoft::Bamo::ListProxyCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,unsigned int>::~ListProxyCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,unsigned int>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
