/*
 * XREFs of ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x1801807C4
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
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x180181408 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x1802A62BC (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPathGeometry::ProcessSetPath(
        CPathData **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PATHGEOMETRY_SETPATH *a3)
{
  unsigned int v5; // edi
  int v6; // r9d
  __int64 v7; // r10
  __int64 v8; // rbx
  __int64 v9; // rcx
  bool (__fastcall *v10)(__int64, int); // rax
  bool v11; // al
  CSharedSectionBase *v12; // rbx
  const void *v13; // rsi
  void *v14; // rbx
  const struct CPathData *v15; // rax
  unsigned int v17; // [rsp+20h] [rbp-28h]
  size_t v18[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  if ( (unsigned int)HANDLE_TABLE::ValidEntry((struct CResourceTable *)((char *)a2 + 16), *((_DWORD *)a3 + 2))
    && (v8 = *(_QWORD *)(v7 + 40) + (unsigned int)(*(_DWORD *)(v7 + 24) * v6), (v9 = *(_QWORD *)(v8 + 8)) != 0)
    && ((v10 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v9 + 64LL), v10 == CKeyframeAnimation::IsOfType)
      ? (v11 = CKeyframeAnimation::IsOfType(v9, 157))
      : v10 != CVisual::IsOfType
      ? (v10 != CSharedSection::IsOfType
       ? (v11 = v10(v9, 157))
       : (v11 = CSharedSection::IsOfType(v9, 157)))
      : (v11 = CVisual::IsOfType(v9, 157)),
        v11) )
  {
    v12 = *(CSharedSectionBase **)(v8 + 8);
  }
  else
  {
    v12 = 0LL;
  }
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(this + 17);
  if ( v12 )
  {
    v13 = CSharedSectionBase::ResolveAllocation(v12, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
    if ( v13 )
    {
      v14 = MIDL_user_allocate(0x48uLL);
      if ( v14 )
      {
        gsl::details::extent_type<-1>::extent_type<-1>(v18, *((unsigned int *)a3 + 4));
        v18[1] = (size_t)v13;
        if ( v18[0] == -1LL )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v15 = (const struct CPathData *)CPathData::CPathData((__int64)v14, g_DeviceManager, v18);
        if ( v15 )
        {
          CPathGeometry::SetPath((CPathGeometry *)this, v15);
          return v5;
        }
      }
      v17 = 30;
    }
    else
    {
      v17 = 25;
    }
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, v17, 0LL);
  }
  return v5;
}
