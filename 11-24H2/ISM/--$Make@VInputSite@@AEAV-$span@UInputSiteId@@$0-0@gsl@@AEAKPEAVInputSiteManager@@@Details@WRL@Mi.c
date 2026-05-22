/*
 * XREFs of ??$Make@VInputSite@@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputSite@@@12@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAK$$QEAPEAVInputSiteManager@@@Z @ 0x180037A28
 * Callers:
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x18001B830 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@AEBUInputSiteId@@@Z @ 0x180037580 (-RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoI.c)
 *     ?CreateInputSiteFromId@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180038474 (-CreateInputSiteFromId@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSite.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180028A8C (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Buy_nonzero@?$vector@UInputSiteId@@V?$allocator@UInputSiteId@@@std@@@std@@AEAAX_K@Z @ 0x180037BFC (-_Buy_nonzero@-$vector@UInputSiteId@@V-$allocator@UInputSiteId@@@std@@@std@@AEAAX_K@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180037C64 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 *__fastcall Microsoft::WRL::Details::Make<InputSite,gsl::span<InputSiteId,-1> &,unsigned long &,InputSiteManager *>(
        __int64 *a1,
        __m128i *a2,
        int *a3,
        __int64 *a4)
{
  char *v8; // rsi
  __int64 v9; // rbx
  __m128i v10; // xmm6
  __int64 v11; // rcx
  void **v12; // r12
  __int64 v13; // rbp
  char *v14; // xmm6_8
  char *v15; // rbp
  signed __int64 v16; // rbp
  char *v17; // rdi
  __int64 v18; // rcx
  int v20; // [rsp+24h] [rbp-64h]

  *a1 = 0LL;
  v8 = (char *)operator new(0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = *a4;
    if ( v9 )
      (**(void (__fastcall ***)(__int64))v9)(v9);
    v20 = *a3;
    v10 = *a2;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(v8);
    *(_QWORD *)v8 = &InputSite::`vftable';
    v12 = (void **)(v8 + 16);
    v13 = 16 * v10.m128i_i64[0];
    v14 = (char *)_mm_srli_si128(v10, 8).m128i_u64[0];
    v15 = &v14[v13];
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 4) = 0LL;
    if ( v14 > v15 )
    {
      _o_terminate(v11);
    }
    else
    {
      v16 = v15 - v14;
      if ( v16 >> 4 )
      {
        std::vector<InputSiteId>::_Buy_nonzero(v8 + 16, v16 >> 4);
        v17 = (char *)*v12;
        memmove_0(*v12, v14, v16);
        *((_QWORD *)v8 + 3) = &v17[16 * (v16 >> 4)];
      }
      *((_DWORD *)v8 + 10) = v20;
      v8[480] = 0;
      *((_QWORD *)v8 + 61) = 0LL;
      *((_QWORD *)v8 + 62) = 0LL;
      *((_QWORD *)v8 + 63) = 0LL;
      *((_QWORD *)v8 + 64) = v9;
      Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))v8 + 64);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v18 = *a1;
      if ( !*a1 )
        goto LABEL_10;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_10:
    *a1 = (__int64)v8;
  }
  return a1;
}
