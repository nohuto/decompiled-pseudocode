/*
 * XREFs of Microsoft::BamoImpl::Util::FindInterface_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_SimpleHapticsControllerFeedback_Principal_ @ 0x18018445C
 * Callers:
 *     ?QueryInterface@BamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180186360 (-QueryInterface@BamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@M.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::Util::FindInterface_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_SimpleHapticsControllerFeedback_Principal_(
        __int64 a1,
        _QWORD *a2)
{
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && a2[1] == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *a2 == *(_QWORD *)&GUID_cb86c714_2bab_b91a_0db2_6471e24c01fa.Data1
    && a2[1] == *(_QWORD *)GUID_cb86c714_2bab_b91a_0db2_6471e24c01fa.Data4 )
  {
    return (a1 + 8) & -(__int64)(a1 != 0);
  }
  else
  {
    return 0LL;
  }
}
