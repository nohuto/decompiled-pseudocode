/*
 * XREFs of ?RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@@Z @ 0x18003A930
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180016634 (--$_Emplace_reallocate@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VIn.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18003AA2C (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     ?AssociateWithInputSite@InputSiteElementProxy@@QEAAXAEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x18003ACB4 (-AssociateWithInputSite@InputSiteElementProxy@@QEAAXAEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall InputSiteManager::RegisterInputSiteElement(
        InputSiteManager *this,
        struct BamoInputSiteManagerStub *a2,
        struct BamoInputSiteElementProxy *a3)
{
  struct BamoInputSiteElementProxy *v3; // rbx
  char *v5; // rsi
  __int64 v6; // rdi
  unsigned int v7; // eax
  __int64 *v8; // rdx
  __int64 v9; // rcx
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = a3;
  v5 = (char *)a3 + 8;
  v6 = (*(__int64 (__fastcall **)(char *, struct BamoInputSiteManagerStub *))(*((_QWORD *)a3 + 1) + 32LL))(
         (char *)a3 + 8,
         a2);
  v7 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v5 + 24LL))(v5);
  InputSiteManager::GetOrCreateInputSiteFromId(this, &v12, v7, v6);
  InputSiteElementProxy::AssociateWithInputSite(v3, &v12);
  v11[0] = (__int64)v3;
  (**(void (__fastcall ***)(struct BamoInputSiteElementProxy *))v3)(v3);
  v8 = (__int64 *)*((_QWORD *)this + 11);
  if ( v8 == *((__int64 **)this + 12) )
  {
    std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
      (__int64 *)this + 10,
      v8,
      v11);
    v3 = (struct BamoInputSiteElementProxy *)v11[0];
  }
  else
  {
    *v8 = 0LL;
    if ( v8 != v11 )
    {
      *v8 = (__int64)v3;
      v3 = 0LL;
    }
    *((_QWORD *)this + 11) += 8LL;
  }
  if ( v3 )
    (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)v3 + 8LL))(v3);
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
