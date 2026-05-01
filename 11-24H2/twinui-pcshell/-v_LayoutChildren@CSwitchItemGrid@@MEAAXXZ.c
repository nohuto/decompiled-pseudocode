/*
 * XREFs of ?v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ @ 0x1804C9C60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B6B84 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C4860 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B7F2C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$As@UIScrollViewer@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804C73D0 (--$As@UIScrollViewer@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?LayoutItems@GridLayoutFactory@@QEAAJAEBUCSize@Geometry@@AEAVGridLayout@@@Z @ 0x1804D6D88 (-LayoutItems@GridLayoutFactory@@QEAAJAEBUCSize@Geometry@@AEAVGridLayout@@@Z.c)
 *     ?LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1804D6FA8 (-LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z.c)
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x1804D76E4 (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CSwitchItemGrid::v_LayoutChildren(CSwitchItemGrid *this)
{
  __int64 v2; // rcx
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int (__fastcall *v6)(CSwitchItemGrid *, __int64 *); // rbx
  _OWORD *v7; // rax
  _OWORD *v8; // rcx
  __int64 v9; // rdx
  const struct Geometry::CSize *v10; // rax
  int v11; // eax
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v14[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v16; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v17[512]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v18; // [rsp+270h] [rbp+170h]
  __int128 v19; // [rsp+278h] [rbp+178h]
  __int64 v20; // [rsp+288h] [rbp+188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v3 = *((_DWORD *)this + 15);
    LODWORD(v16) = *((_DWORD *)this + 14);
    DWORD1(v16) = v3;
    DWORD2(v16) = v16 + 1;
    HIDWORD(v16) = v3 + 1;
    (*(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, &v16, 0LL, 0LL);
  }
  if ( !*((_DWORD *)this + 232) )
  {
    v12 = *((_QWORD *)this + 107);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v15, &v12, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    v4 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
    v5 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
    *(_QWORD *)&v16 = 0LL;
    *((_QWORD *)&v16 + 1) = __PAIR64__(v4, v5);
    if ( !Geometry::CRect::IsEmpty((Geometry::CRect *)&v16) )
    {
      v12 = 0LL;
      v6 = *(int (__fastcall **)(CSwitchItemGrid *, __int64 *))(*(_QWORD *)this + 56LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
      if ( v6(this, &v12) >= 0 )
      {
        if ( *((_QWORD *)this + 103) )
          goto LABEL_12;
        v7 = (_OWORD *)((char *)this + 256);
        v8 = v17;
        v9 = 4LL;
        do
        {
          *v8 = *v7;
          v8[1] = v7[1];
          v8[2] = v7[2];
          v8[3] = v7[3];
          v8[4] = v7[4];
          v8[5] = v7[5];
          v8[6] = v7[6];
          v8 += 8;
          *(v8 - 1) = v7[7];
          v7 += 8;
          --v9;
        }
        while ( v9 );
        v18 = *((_QWORD *)this + 106);
        v19 = v16;
        v20 = v12;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
        v10 = (const struct Geometry::CSize *)GridLayoutFactory::_CalculateRowSize(v17, v14);
        v11 = GridLayoutFactory::LayoutItems((GridLayoutFactory *)v17, v10, (CSwitchItemGrid *)((char *)this + 768));
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x28F,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
            (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
        if ( *((_QWORD *)this + 103) )
LABEL_12:
          GridLayout::LayoutRows((CSwitchItemGrid *)((char *)this + 768), (const struct Geometry::CRect *)&v16);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    }
    v13 = 0LL;
    if ( *((_QWORD *)this + 10) )
    {
      if ( (int)Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollViewer>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 10,
                  &v13) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v13);
    }
    *((_BYTE *)this + 940) = 0;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v15);
  }
}
