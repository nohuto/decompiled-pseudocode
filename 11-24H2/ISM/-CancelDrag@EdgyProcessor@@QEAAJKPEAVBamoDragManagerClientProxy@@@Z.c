/*
 * XREFs of ?CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180153854
 * Callers:
 *     ?CancelOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180142130 (-CancelOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEAVBamoDragManagerClientPr.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180154BDC (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800274C8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180028A8C (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$emplace@AEBK@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180056720 (--$emplace@AEBK@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058BD8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x1801493B0 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KPEAVControllerProcessor@@V-$_Uhash_compare@KU-$hash@K@std@@.c)
 *     ?DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180153B50 (-DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z.c)
 *     ?GetVelocityForPointerId@EdgyProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x180154450 (-GetVelocityForPointerId@EdgyProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z @ 0x1801548E8 (-HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1801A09AC (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EdgyProcessor::CancelDrag(
        EdgyProcessor *this,
        unsigned int a2,
        struct BamoDragManagerClientProxy *a3)
{
  char *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdi
  struct BamoDragManagerClientProxy *v10; // r14
  struct tagPOINT v11; // rsi
  int *VelocityForPointerId; // rax
  __int64 (__fastcall ***v13)(_QWORD); // r13
  struct InputSite *v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rsi
  unsigned int v18; // [rsp+50h] [rbp-59h] BYREF
  __int64 v19; // [rsp+58h] [rbp-51h] BYREF
  int v20; // [rsp+60h] [rbp-49h]
  unsigned int v21; // [rsp+64h] [rbp-45h]
  __int64 v22; // [rsp+68h] [rbp-41h] BYREF
  struct tagPOINT v23; // [rsp+70h] [rbp-39h] BYREF
  struct tagPOINT PositionRelativeToSite; // [rsp+78h] [rbp-31h] BYREF
  struct BamoDragManagerClientProxy *v25; // [rsp+80h] [rbp-29h] BYREF
  __int64 v26; // [rsp+88h] [rbp-21h] BYREF
  unsigned int v27[2]; // [rsp+90h] [rbp-19h] BYREF
  __int128 v28; // [rsp+A0h] [rbp-9h] BYREF
  float v29[2]; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+Fh]
  int v31; // [rsp+C0h] [rbp+17h]
  int v32; // [rsp+C4h] [rbp+1Bh]

  v18 = a2;
  v6 = (char *)this + 352;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (__int64)this + 352,
    (__int64)&v19,
    &v18);
  v7 = *((_QWORD *)this + 45);
  v8 = v19;
  if ( v19 != v7 )
  {
    std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
      (__int64)v6,
      (__int64)&v19,
      &v18);
    v9 = v19;
    if ( v19 != v7 )
    {
      v25 = *(struct BamoDragManagerClientProxy **)(v19 + 32);
      v10 = v25;
      Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v25);
      if ( v10 == a3 )
      {
        std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
          (__int64)this + 24,
          (__int64)&v19,
          &v18);
        if ( v19 != *((_QWORD *)this + 4) )
        {
          v11 = *(struct tagPOINT *)(v19 + 20);
          v21 = *(_DWORD *)(v19 + 28);
          v20 = *(_DWORD *)(v19 + 32);
          v30 = 0LL;
          v29[0] = (float)v11.x;
          v29[1] = (float)v11.y;
          VelocityForPointerId = (int *)EdgyProcessor::GetVelocityForPointerId(this, (unsigned int)v27);
          v31 = *VelocityForPointerId;
          v32 = VelocityForPointerId[1];
          v23 = v11;
          v13 = (__int64 (__fastcall ***)(_QWORD))((char *)v10 + 8);
          (*(void (__fastcall **)(__int64))(*((_QWORD *)v10 + 1) + 80LL))((__int64)v10 + 8);
          v22 = 0LL;
          PositionRelativeToSite = v11;
          v19 = 0LL;
          v26 = 0LL;
          v14 = *(struct InputSite **)(v8 + 48);
          *(_QWORD *)v27 = v14;
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)v27);
          if ( v14 )
            PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(v14, v11);
          v28 = *(_OWORD *)(*v13)[10](v13);
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))EdgyProcessor::HitTestForTarget)(
            this,
            v11,
            v21,
            &v28,
            &v23,
            &v19,
            &v26);
          v15 = v26;
          v16 = v19;
          InputETW::Edgy::DragEnded(a2, &PositionRelativeToSite, &v23, &v22, v19, v20, v26);
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, struct tagPOINT *, struct tagPOINT *, __int64 *, float *, __int64, int, __int64))(*v13)[5])(
            v13,
            a2,
            &PositionRelativeToSite,
            &v23,
            &v22,
            v29,
            v16,
            v20,
            v15);
          std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::_Erase<unsigned long>(
            (_QWORD *)this + 11,
            (__int64)&v18);
          Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)(v9 + 32));
          if ( *(_DWORD *)(*(_QWORD *)(v9 + 56) + 8LL) != 1 )
            std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
              (float *)this + 70,
              (__int64)&v28,
              &v18);
          if ( v14 )
            (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
      Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v25);
    }
  }
  return 0LL;
}
