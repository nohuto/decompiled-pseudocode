/*
 * XREFs of ?RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z @ 0x1801A2760
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x180015170 (--$_Destroy_range@V-$allocator@V-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x18004B488 (--1HitTestResult@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??$As@UISystemInputRouterHitTest@@@?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800E1588 (--$As@UISystemInputRouterHitTest@@@-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 *     ??$GetAllAttachedObjectsByType@UIAttachableInputObjectSampleProxy@@@InputSite@@QEAA?AV?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x1801A2260 (--$GetAllAttachedObjectsByType@UIAttachableInputObjectSampleProxy@@@InputSite@@QEAA-AV-$vector@V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TestCommands::RequestHitTest(
        TestCommands *this,
        struct BamoTestCommandsStub *a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 *a5)
{
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rbx
  __int64 *v11; // r14
  __int64 *v12; // rsi
  __int64 *v13; // rdi
  int v15; // [rsp+20h] [rbp-B1h]
  __int64 v16[2]; // [rsp+30h] [rbp-A1h] BYREF
  char *v17; // [rsp+40h] [rbp-91h] BYREF
  char *v18; // [rsp+48h] [rbp-89h]
  __int64 v19; // [rsp+50h] [rbp-81h]
  _BYTE v20[104]; // [rsp+60h] [rbp-71h] BYREF
  __int64 v21; // [rsp+C8h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+57h]

  v16[0] = 0LL;
  v7 = Microsoft::WRL::ComPtr<ISystemInputRouter>::As<ISystemInputRouterHitTest>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 7,
         v16);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x19,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\system\\testcommands.cpp",
      (const char *)(unsigned int)v7,
      v15);
  v8 = *(_QWORD *)v16[0];
  v16[1] = __PAIR64__(a4, a3);
  (*(void (__fastcall **)(__int64, _BYTE *, unsigned __int64))(v8 + 24))(v16[0], v20, __PAIR64__(a4, a3));
  if ( v20[0] )
  {
    v10 = *(__int64 **)(v21 - 24);
    v11 = *(__int64 **)(v21 - 16);
    while ( v10 != v11 )
    {
      InputSite::GetAllAttachedObjectsByType<IAttachableInputObjectSampleProxy>(*v10, &v17);
      v12 = (__int64 *)v18;
      v13 = (__int64 *)v17;
      if ( v17 != v18 )
      {
        do
        {
          (*(void (__fastcall **)(__int64, __int64, __int64, const unsigned __int16 *))(*(_QWORD *)*v13 + 24LL))(
            *v13,
            a3,
            a4,
            a5);
          ++v13;
        }
        while ( v13 != v12 );
        v12 = (__int64 *)v18;
        v13 = (__int64 *)v17;
      }
      if ( v13 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(v13, v12);
        std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)((v19 - (_QWORD)v17) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      ++v10;
    }
  }
  HitTestResult::~HitTestResult((HitTestResult *)v20, v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v16);
  return 0LL;
}
