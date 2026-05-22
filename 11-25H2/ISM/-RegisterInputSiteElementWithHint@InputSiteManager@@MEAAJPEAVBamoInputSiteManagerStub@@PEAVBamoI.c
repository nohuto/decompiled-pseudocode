/*
 * XREFs of ?RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@AEBUInputSiteId@@@Z @ 0x18003AAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180016634 (--$_Emplace_reallocate@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VIn.c)
 *     ?GetInputSiteFromIds@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$span@UInputSiteId@@$0?0@gsl@@@Z @ 0x18001AEC0 (-GetInputSiteFromIds@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$span@UInpu.c)
 *     ??$_Emplace_reallocate@PEAVInputSite@@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@AEAAPEAPEAVInputSite@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x18003A084 (--$_Emplace_reallocate@PEAVInputSite@@@-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@.c)
 *     ?AssociateWithInputSite@InputSiteElementProxy@@QEAAXAEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x18003ACB4 (-AssociateWithInputSite@InputSiteElementProxy@@QEAAXAEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@Z.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18003AF78 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ??$Make@VInputSite@@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputSite@@@12@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAK$$QEAPEAVInputSiteManager@@@Z @ 0x18003AF98 (--$Make@VInputSite@@AEAV-$span@UInputSiteId@@$0-0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Mi.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall InputSiteManager::RegisterInputSiteElementWithHint(
        InputSiteManager *this,
        struct BamoInputSiteManagerStub *a2,
        struct BamoInputSiteElementProxy *a3,
        const struct InputSiteId *a4)
{
  struct BamoInputSiteElementProxy *v5; // rbx
  char *v7; // rdi
  __int64 v8; // rdi
  unsigned int ProcessId; // eax
  _BYTE *v10; // rdx
  __int64 *v11; // rdx
  __int128 v13; // [rsp+20h] [rbp-39h] BYREF
  unsigned int v14; // [rsp+30h] [rbp-29h] BYREF
  int v15; // [rsp+38h] [rbp-21h]
  __int64 v16; // [rsp+40h] [rbp-19h] BYREF
  struct BamoInputSiteElementProxy *v17; // [rsp+48h] [rbp-11h] BYREF
  __int64 v18; // [rsp+50h] [rbp-9h] BYREF
  __int128 v19; // [rsp+60h] [rbp+7h] BYREF
  _DWORD v20[2]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v21; // [rsp+78h] [rbp+1Fh]
  __int128 v22; // [rsp+80h] [rbp+27h]

  v5 = a3;
  v15 = 0;
  v7 = (char *)a3 + 8;
  v20[0] = (*(__int64 (__fastcall **)(char *, struct BamoInputSiteManagerStub *))(*((_QWORD *)a3 + 1) + 24LL))(
             (char *)a3 + 8,
             a2);
  v20[1] = 0;
  v21 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v7 + 32LL))(v7);
  v22 = *(_OWORD *)a4;
  *(_QWORD *)&v13 = 2LL;
  *((_QWORD *)&v13 + 1) = v20;
  InputSiteManager::GetInputSiteFromIds((__int64)this, &v16, &v13);
  v8 = v16;
  if ( !v16 )
  {
    ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)v5 + 4)
                                                                                              + 16LL));
    *(_QWORD *)&v13 = 2LL;
    *((_QWORD *)&v13 + 1) = v20;
    v19 = v13;
    v14 = ProcessId;
    *(_QWORD *)&v13 = this;
    Microsoft::WRL::Details::Make<InputSite,gsl::span<InputSiteId,-1> &,unsigned long &,InputSiteManager *>(
      &v18,
      &v19,
      &v14,
      &v13);
    v15 = 2;
    *(_QWORD *)&v13 = v18;
    v10 = (_BYTE *)*((_QWORD *)this + 8);
    if ( v10 == *((_BYTE **)this + 9) )
    {
      std::vector<InputSite *>::_Emplace_reallocate<InputSite *>((const void **)this + 7, v10, &v13);
    }
    else
    {
      *(_QWORD *)v10 = v18;
      *((_QWORD *)this + 8) += 8LL;
    }
    v8 = v18;
    v16 = v18;
  }
  InputSiteElementProxy::AssociateWithInputSite(v5, &v16);
  v17 = v5;
  (**(void (__fastcall ***)(struct BamoInputSiteElementProxy *))v5)(v5);
  v11 = (__int64 *)*((_QWORD *)this + 11);
  if ( v11 == *((__int64 **)this + 12) )
  {
    std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
      (__int64 *)this + 10,
      v11,
      (__int64 *)&v17);
    v5 = v17;
  }
  else
  {
    *v11 = 0LL;
    if ( v11 != (__int64 *)&v17 )
    {
      *v11 = (__int64)v5;
      v5 = 0LL;
    }
    *((_QWORD *)this + 11) += 8LL;
  }
  if ( v5 )
    (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)v5 + 8LL))(v5);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return 0LL;
}
