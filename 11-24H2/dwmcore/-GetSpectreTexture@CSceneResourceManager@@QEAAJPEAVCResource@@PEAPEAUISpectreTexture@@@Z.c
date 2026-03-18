/*
 * XREFs of ?GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z @ 0x18025F598
 * Callers:
 *     ?ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSceneSurfaceMaterialInput@@@Z @ 0x1802A513C (-ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V-$basic_string@DU-$c.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x18006EF44 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180152D28 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCSceneMeshRendererComponent@@V-$com_.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180155944 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x1801E16CC (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1801E8D90 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x180205578 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KPEAVCCursorState@@U-$less@_K@std@@V-$allocator.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18024DD10 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18024FF64 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_LUID@@V-$com_ptr_t@UIDisplayDevice.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneResourceManager::GetSpectreTexture(
        CSceneResourceManager *this,
        struct CResource *a2,
        struct ISpectreTexture **a3)
{
  unsigned int v5; // esi
  CVisualSurface *v6; // rdi
  int v7; // ebx
  int CVIForRealizationSize; // eax
  CDisplayManager *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  struct ISpectreRenderer *SpectreRenderer; // rsi
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(struct ISpectreRenderer *, __int64, __int64, struct ISpectreTexture **); // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // eax
  __int64 *v20; // r14
  __int64 inserted; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 result; // rax
  __int64 v25; // [rsp+30h] [rbp-50h] BYREF
  struct ISpectreTexture *v26; // [rsp+38h] [rbp-48h] BYREF
  struct D2D_VECTOR_2F v27[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v28; // [rsp+50h] [rbp-30h] BYREF
  __int64 v29; // [rsp+60h] [rbp-20h]
  __int128 v30; // [rsp+68h] [rbp-18h] BYREF
  __int64 v31; // [rsp+78h] [rbp-8h]
  CVisualSurface *v32; // [rsp+B8h] [rbp+38h] BYREF
  struct CCachedVisualImage *v33; // [rsp+C8h] [rbp+48h] BYREF

  v32 = a2;
  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 190LL) )
  {
    v6 = v32;
    v33 = 0LL;
    v7 = *(_DWORD *)(*((_QWORD *)this + 4) + 960LL);
    v27[0] = *(struct D2D_VECTOR_2F *)((char *)v32 + (*((_BYTE *)v32 + 204) != 0 ? 8 : 0) + 184);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v33);
    CVIForRealizationSize = CVisualSurface::GetCVIForRealizationSize(
                              v6,
                              v7,
                              (struct CCachedVisualImage ***)v27,
                              v27,
                              &v33);
    v5 = CVIForRealizationSize;
    if ( CVIForRealizationSize < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CVIForRealizationSize, 0xFAu, 0LL);
    }
    else
    {
      CDisplayManager::GetPrimaryAdapterLuid(v9, &v28);
      *((_QWORD *)&v28 + 1) = 0xFFFFFFFFLL;
      v29 = 0LL;
      v10 = **((_QWORD **)g_pComposition + 77);
      if ( v10 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(v10 + 8) + 24LL))(v10 + 8, &v30);
        v28 = *(_OWORD *)v11;
        v29 = *(_QWORD *)(v11 + 16);
      }
      v12 = *((_QWORD *)v33 + 10);
      v25 = 0LL;
      v13 = (*(__int64 (__fastcall **)(char *, __int128 *, __int64 *))(v12 + 104))((char *)v33 + 80, &v28, &v25);
      v5 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x108u, 0LL);
      }
      else
      {
        SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
        v15 = *(_QWORD *)SpectreRenderer;
        v26 = 0LL;
        v16 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, __int64, __int64, struct ISpectreTexture **))(v15 + 88);
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 128LL))(v25);
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 120LL))(v25);
        v19 = v16(SpectreRenderer, v18, v17, &v26);
        v5 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x10Fu, 0LL);
        }
        else
        {
          v20 = (__int64 *)((char *)this + 64);
          std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::_Find_lower_bound<unsigned __int64>(
            v20,
            &v30,
            &v32);
          inserted = v31;
          if ( *(_BYTE *)(v31 + 25) || (unsigned __int64)v32 < *(_QWORD *)(v31 + 32) )
          {
            if ( v20[1] == 0x555555555555555LL )
              std::_Throw_tree_length_error();
            v22 = *v20;
            v27[0] = (struct D2D_VECTOR_2F)v20;
            v23 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
            v27[1] = 0LL;
            *(_QWORD *)(v23 + 32) = v32;
            *(_QWORD *)(v23 + 40) = 0LL;
            *(_QWORD *)v23 = v22;
            *(_QWORD *)(v23 + 8) = v22;
            *(_QWORD *)(v23 + 16) = v22;
            *(_WORD *)(v23 + 24) = 0;
            std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>,void *>>>((__int64)v27);
            *(_OWORD *)&v27[0].x = v30;
            inserted = std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>::_Insert_node(
                         v20,
                         (__int64)v27,
                         v23);
          }
          wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
            (__int64 *)(inserted + 40),
            (__int64 *)&v26);
          *a3 = v26;
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
    return v5;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(CVisualSurface *, __int64))(*(_QWORD *)v32 + 64LL))(v32, 38LL) )
    return v5;
  result = 0LL;
  *a3 = (struct ISpectreTexture *)*((_QWORD *)v32 + 19);
  return result;
}
