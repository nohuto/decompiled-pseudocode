/*
 * XREFs of ?GetNode@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEBAPEAVCNode@12@KAEAI0AEAPEAV312@@Z @ 0x1400684C4
 * Callers:
 *     ?RegisterProcess@CpuManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x1400691F0 (-RegisterProcess@CpuManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 *     ?RegisterThread@CpuManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x140069370 (-RegisterThread@CpuManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z.c)
 *     ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@CpuManager@@@Z @ 0x14006997C (-SetAt@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElemen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::GetNode(
        __int64 a1,
        unsigned int a2,
        int *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  __int64 v7; // r9
  __int64 i; // rdx

  *a4 = a2;
  *a3 = a2 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    v7 = 0LL;
    *a5 = 0LL;
    for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3); i; i = *(_QWORD *)(i + 24) )
    {
      if ( *(_DWORD *)(i + 32) == *a4 && *(_DWORD *)i == a2 )
      {
        *a5 = v7;
        return i;
      }
      v7 = i;
    }
  }
  return 0LL;
}
