/*
 * XREFs of ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x180180DBC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800368D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370D0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800373C0 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180180410 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180180980 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAXAEA_K@Z @ 0x18020D160 (--$_Reallocate@$0A@@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPath.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18029DF28 (--$_Emplace_reallocate@V-$ComPtr@VCPathData@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCPathData@@@WR.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x1802A62BC (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetPathData(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETPATHDATA *a3,
        _DWORD *a4,
        unsigned int a5)
{
  struct CResourceTable *v6; // r9
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rbx
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned int i; // esi
  int v14; // r8d
  __int64 v15; // r9
  unsigned int v16; // r10d
  __int64 v17; // rdi
  __int64 v18; // rcx
  bool (__fastcall *v19)(__int64, int); // rax
  bool v20; // al
  CSharedSectionBase *v21; // rcx
  const void *v22; // r14
  void *v23; // rdi
  CPathData *v24; // rax
  CPathData *v25; // rdi
  CPathData **v26; // rdx
  unsigned int v27; // ebx
  int v29; // r9d
  unsigned int v30; // [rsp+20h] [rbp-40h]
  CPathData *v31[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v32; // [rsp+40h] [rbp-20h] BYREF
  __int128 v33; // [rsp+50h] [rbp-10h] BYREF
  __int64 v35; // [rsp+B0h] [rbp+50h] BYREF

  v6 = a2;
  v8 = a5 / 0xCuLL;
  if ( !*((_DWORD *)a3 + 3)
    || a5 % 0xCuLL
    || !v8
    || (v9 = *((unsigned int *)a3 + 3),
        v10 = (_QWORD *)((char *)this + 416),
        v11 = *((_QWORD *)this + 53),
        v8 + ((v11 - *((_QWORD *)this + 52)) >> 3) > v9)
    || (*((_BYTE *)a3 + 8) != 0) == (*v10 == v11) )
  {
    v30 = 662;
LABEL_33:
    v29 = -2003303421;
  }
  else
  {
    if ( *v10 == v11 )
    {
      v12 = (__int64)(*((_QWORD *)this + 54) - *((_QWORD *)this + 52)) >> 3;
      v35 = *((unsigned int *)a3 + 3);
      if ( v9 > v12 )
      {
        std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Reallocate<0>(v10, &v35, v11, v6);
        v6 = a2;
      }
    }
    for ( i = 0; ; ++i )
    {
      if ( i >= v8 )
        return 0;
      if ( !HANDLE_TABLE::ValidEntry((struct CResourceTable *)((char *)v6 + 16), a4[3 * i])
        || (v17 = *(_QWORD *)(v15 + 40) + (unsigned int)(*(_DWORD *)(v15 + 24) * v14), (v18 = *(_QWORD *)(v17 + 8)) == 0)
        || ((v19 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v18 + 64LL), v19 == CKeyframeAnimation::IsOfType)
          ? (v20 = CKeyframeAnimation::IsOfType(v18, v16))
          : v19 != CVisual::IsOfType
          ? (v19 != CSharedSection::IsOfType
           ? (v20 = v19(v18, v16))
           : (v20 = CSharedSection::IsOfType(v18, v16)))
          : (v20 = CVisual::IsOfType(v18, v16)),
            !v20 || (v21 = *(CSharedSectionBase **)(v17 + 8)) == 0LL) )
      {
        v30 = 682;
        goto LABEL_33;
      }
      v22 = CSharedSectionBase::ResolveAllocation(v21, (unsigned int)a4[3 * i + 1], (unsigned int)a4[3 * i + 2]);
      if ( !v22 )
        break;
      v23 = MIDL_user_allocate(0x48uLL);
      if ( !v23 )
      {
        v31[0] = 0LL;
LABEL_37:
        v27 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2B5u, 0LL);
        Microsoft::WRL::ComPtr<CPathData>::InternalRelease(v31);
        return v27;
      }
      gsl::details::extent_type<-1>::extent_type<-1>(&v32, (unsigned int)a4[3 * i + 2]);
      *((_QWORD *)&v32 + 1) = v22;
      if ( (_QWORD)v32 == -1LL )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v33 = v32;
      v24 = (CPathData *)CPathData::CPathData((__int64)v23, g_DeviceManager, (size_t *)&v33);
      v31[0] = v24;
      v25 = v24;
      if ( !v24 )
        goto LABEL_37;
      (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v24 + 8LL))(v24);
      v26 = (CPathData **)v10[1];
      if ( v26 == (CPathData **)v10[2] )
      {
        std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CPathData>>(
          v10,
          v26,
          v31);
      }
      else
      {
        *v26 = 0LL;
        if ( v26 != v31 )
        {
          *v26 = v25;
          v31[0] = 0LL;
        }
        v10[1] += 8LL;
      }
      Microsoft::WRL::ComPtr<CPathData>::InternalRelease(v31);
      v6 = a2;
    }
    v29 = -2147024882;
    v30 = 688;
  }
  v27 = v29;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, v30, 0LL);
  return v27;
}
