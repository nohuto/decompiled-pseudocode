/*
 * XREFs of ?GetNext@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAVCPair@12@AEAPEAU__POSITION@@@Z @ 0x14006847C
 * Callers:
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x140049080 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 *     ?InternalRemoveFromCpuManager@GraphStreamingResourceManager@@EEAAXXZ @ 0x140068D10 (-InternalRemoveFromCpuManager@GraphStreamingResourceManager@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetNext(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v5; // rax
  __int64 v6; // rdx

  v2 = *a2;
  v3 = 0LL;
  if ( *a2 )
  {
    v5 = *(_QWORD *)(v2 + 32);
    if ( !v5 )
    {
      LODWORD(v6) = *(_DWORD *)(v2 + 40) % *(_DWORD *)(a1 + 16);
      do
      {
        v6 = (unsigned int)(v6 + 1);
        v5 = 0LL;
        if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 16) )
          break;
        v5 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v6);
      }
      while ( !v5 );
    }
    v3 = v5;
  }
  *a2 = v3;
  return v2;
}
