/*
 * XREFs of ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@GraphStreamingResourceManager@@@Z @ 0x1400130A4
 * Callers:
 *     ?RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x140012BD0 (-RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z.c)
 *     ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x140012F40 (-RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 * Callees:
 *     ?CreateNode@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEAAPEAVCNode@12@KII@Z @ 0x140013124 (-CreateNode@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElement.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 result; // rax

  v5 = a2 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    for ( result = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5); result; result = *(_QWORD *)(result + 32) )
    {
      if ( *(_DWORD *)(result + 40) == a2 && *(_DWORD *)result == a2 )
      {
        *(_OWORD *)(result + 8) = *(_OWORD *)a3;
        *(_QWORD *)(result + 24) = *(_QWORD *)(a3 + 16);
        return result;
      }
    }
  }
  result = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::CreateNode(
             a1,
             a2,
             (unsigned int)v5,
             a2);
  *(_OWORD *)(result + 8) = *(_OWORD *)a3;
  *(_QWORD *)(result + 24) = *(_QWORD *)(a3 + 16);
  return result;
}
