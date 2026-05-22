/*
 * XREFs of ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18003AA2C
 * Callers:
 *     ?RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@@Z @ 0x18003A930 (-RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSite.c)
 *     ?GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z @ 0x1800FB2BC (-GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800FBAD0 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800FC670 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1800FD014 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18001AE40 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?CreateInputSiteFromId@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18003B9E4 (-CreateInputSiteFromId@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSite.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall InputSiteManager::GetOrCreateInputSiteFromId(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4)
{
  char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+28h] [rbp-20h] BYREF
  char v14; // [rsp+30h] [rbp-18h] BYREF

  InputSiteManager::GetInputSiteFromId(a1, (__int64)a2, a3, a4);
  if ( !*a2 )
  {
    v8 = (char *)InputSiteManager::CreateInputSiteFromId(a1, &v13, a3, a4, 1);
    v9 = 0LL;
    if ( &v14 != v8 )
    {
      v9 = *(_QWORD *)v8;
      *(_QWORD *)v8 = 0LL;
    }
    v10 = *a2;
    *a2 = v9;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  return a2;
}
