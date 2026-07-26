/*
 * XREFs of ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x14014E35C
 * Callers:
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x14016AB10 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 * Callees:
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x14014E3A0 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x14014E4E0 (ndisBindReadFilterDriverFromV3Registry.c)
 */

bool __fastcall ndisBindReadFilterDriverConfiguration(struct NDIS_BIND_FILTER_DRIVER *a1)
{
  bool result; // al

  a1->FilterBindFlags = 0;
  if ( (unsigned __int8)ndisBindReadFilterDriverFromV3Registry() )
    return (a1->FilterBindFlags & 2) != 0 || a1->FilterClass.__ptr_.__value_ != 0LL;
  result = ndisBindReadFilterDriverFromV2Registry(a1);
  if ( result )
    return (a1->FilterBindFlags & 2) != 0 || a1->FilterClass.__ptr_.__value_ != 0LL;
  return result;
}
