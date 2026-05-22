/*
 * XREFs of ?GetInputSiteFromIds@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$span@UInputSiteId@@$0?0@gsl@@@Z @ 0x18001AEC0
 * Callers:
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18001AE40 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x18001B260 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@AEBUInputSiteId@@@Z @ 0x18003AAF0 (-RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoI.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall InputSiteManager::GetInputSiteFromIds(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v5; // r9
  __int64 v6; // r11
  __int64 *i; // r10
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx

  v5 = a3[1];
  v6 = v5 + 16LL * *a3;
LABEL_2:
  if ( v5 == v6 )
  {
    *a2 = 0LL;
    return a2;
  }
  else
  {
    for ( i = *(__int64 **)(a1 + 56); ; ++i )
    {
      if ( i == *(__int64 **)(a1 + 64) )
      {
        v5 += 16LL;
        goto LABEL_2;
      }
      v8 = *(_QWORD *)(*i + 24);
      v9 = *(_QWORD *)(*i + 16);
      if ( v9 != v8 )
      {
        do
        {
          if ( *(_DWORD *)v9 == *(_DWORD *)v5 )
            break;
          v9 += 16LL;
        }
        while ( v9 != v8 );
        if ( v9 != v8 && *(_QWORD *)(v9 + 8) == *(_QWORD *)(v5 + 8) )
          break;
      }
    }
    v10 = *i;
    *a2 = *i;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    return a2;
  }
}
