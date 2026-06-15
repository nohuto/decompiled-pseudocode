/*
 * XREFs of ?GetResourceConsumptionFromMap@CConstraintModel@@AEAAJPEAVResourceConsumer@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x180067748
 * Callers:
 *     ?GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJAEAVEndpointInfo@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x180161474 (-GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJAEAVEndpointInfo@@U_GUID@@W4__MIDL__.c)
 * Callees:
 *     ?Lookup@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEBA_NAEBQEAVResourceConsumer@@AEAPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@2@@Z @ 0x1800677BC (-Lookup@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL.c)
 *     ?GetResourceInfoArrayFromResourceList@CConstraintModel@@AEAAJPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@W4RmResourceType@@KPEAKPEAPEAU_ResourceInfo@@@Z @ 0x1800A1884 (-GetResourceInfoArrayFromResourceList@CConstraintModel@@AEAAJPEAV-$CAtlList@U_ResourceInfo@@VRes.c)
 */

__int64 __fastcall CConstraintModel::GetResourceConsumptionFromMap(
        CConstraintModel *this,
        struct ResourceConsumer *a2,
        unsigned int *a3,
        struct _ResourceInfo **a4)
{
  unsigned int v4; // ebx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  struct ResourceConsumer *v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v11 = a2;
  v4 = 0;
  *a4 = 0LL;
  *a3 = 0;
  v12 = 0LL;
  if ( (unsigned __int8)ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::Lookup(
                          (char *)this + 128,
                          &v11,
                          &v12) )
  {
    return (unsigned int)CConstraintModel::GetResourceInfoArrayFromResourceList(
                           v7,
                           v12,
                           v8,
                           v9,
                           (__int64)a3,
                           (__int64)a4);
  }
  else
  {
    *a3 = 0;
    *a4 = 0LL;
  }
  return v4;
}
