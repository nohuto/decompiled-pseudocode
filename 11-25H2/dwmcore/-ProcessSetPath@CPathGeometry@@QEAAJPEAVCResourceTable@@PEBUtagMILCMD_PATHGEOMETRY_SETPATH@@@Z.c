/*
 * XREFs of ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x1801A6D5C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18005B4B0 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8F0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E910 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x1801A6F90 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x1802AFDFC (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPathGeometry::ProcessSetPath(
        CPathData **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PATHGEOMETRY_SETPATH *a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // edi
  __int64 v7; // rax
  CSharedSectionBase *v8; // rbx
  const void *v9; // rbp
  void *v10; // rbx
  const struct CPathData *v11; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  bool (__fastcall *v15)(__int64, int); // rax
  bool v16; // al
  unsigned int v17; // [rsp+20h] [rbp-28h]
  SIZE_T v18[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  v4 = 0;
  if ( v3
    && v3 < *((_DWORD *)a2 + 7)
    && (v7 = *((_QWORD *)a2 + 5), *(_DWORD *)(*((_DWORD *)a2 + 6) * v3 + v7))
    && (v13 = v7 + *((_DWORD *)a2 + 6) * v3, (v14 = *(_QWORD *)(v13 + 8)) != 0)
    && ((v15 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v14 + 64LL), v15 == CKeyframeAnimation::IsOfType)
      ? (v16 = CKeyframeAnimation::IsOfType(v14, 156))
      : v15 != CVisual::IsOfType
      ? (v15 != CSharedSection::IsOfType
       ? (v16 = v15(v14, 156))
       : (v16 = CSharedSection::IsOfType(v14, 156)))
      : (v16 = CVisual::IsOfType(v14, 156)),
        v16) )
  {
    v8 = *(CSharedSectionBase **)(v13 + 8);
  }
  else
  {
    v8 = 0LL;
  }
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(this + 17);
  if ( v8 )
  {
    v9 = CSharedSectionBase::ResolveAllocation(v8, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
    if ( v9 )
    {
      v10 = MIDL_user_allocate(0x48uLL);
      if ( v10 )
      {
        gsl::details::extent_type<-1>::extent_type<-1>(v18, *((unsigned int *)a3 + 4));
        v18[1] = (SIZE_T)v9;
        if ( v18[0] == -1LL )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v11 = (const struct CPathData *)CPathData::CPathData((__int64)v10, g_DeviceManager, v18);
        if ( v11 )
        {
          CPathGeometry::SetPath((CPathGeometry *)this, v11);
          return v4;
        }
      }
      v17 = 30;
    }
    else
    {
      v17 = 25;
    }
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, v17, 0LL);
  }
  return v4;
}
