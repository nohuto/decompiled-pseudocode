/*
 * XREFs of ?v_LayoutChildren@CSwitchItemElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804C30C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C4860 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B7F2C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_CreateLabel@CSwitchItemElement@@IEAAJAEBUCSize@Geometry@@@Z @ 0x1804C2A3C (-_CreateLabel@CSwitchItemElement@@IEAAJAEBUCSize@Geometry@@@Z.c)
 *     ?_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z @ 0x1804C2B04 (-_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSwitchItemElement::v_LayoutChildren(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // r10d
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v17; // [rsp+40h] [rbp-9h] BYREF
  int v18; // [rsp+48h] [rbp-1h]
  int v19; // [rsp+4Ch] [rbp+3h]
  __int128 v20; // [rsp+50h] [rbp+7h] BYREF
  __int128 v21; // [rsp+60h] [rbp+17h] BYREF
  __int128 v22; // [rsp+70h] [rbp+27h] BYREF

  v17 = *(_QWORD *)(a1 + 568);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v16, &v17, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  v6 = *(__int64 **)(a1 + 88);
  v7 = *v6;
  v8 = *(_DWORD *)(a1 + 60);
  LODWORD(v17) = *(_DWORD *)(a1 + 56);
  HIDWORD(v17) = v8;
  v18 = v17 + 1;
  v19 = v8 + 1;
  (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD, __int64))(v7 + 24))(v6, &v17, a2, a3);
  v9 = *(__int64 **)(a1 + 624);
  v10 = *v9;
  v11 = *(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60);
  v12 = *(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 56);
  v17 = 0LL;
  v18 = v12;
  v19 = v11;
  (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD))(v10 + 24))(v9, &v17, 0LL, 0LL);
  v21 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  CSwitchItemElement::_GetLayoutRects(
    (CSwitchItemElement *)a1,
    (struct Geometry::CRect *)&v21,
    (struct Geometry::CRect *)&v20,
    (struct Geometry::CRect *)&v22);
  v13 = *(_QWORD *)(a1 + 600);
  if ( v13 )
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v13 + 104LL))(v13, &v21);
  if ( *(_QWORD *)(a1 + 632) != __PAIR64__(HIDWORD(v20) - DWORD1(v20), DWORD2(v20) - (int)v20) )
  {
    LODWORD(v17) = DWORD2(v20) - v20;
    HIDWORD(v17) = HIDWORD(v20) - DWORD1(v20);
    CSwitchItemElement::_CreateLabel((CSwitchItemElement *)a1, (const struct Geometry::CSize *)&v17);
  }
  v14 = *(_QWORD *)(a1 + 616);
  if ( v14 )
    (*(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(v14, &v20, 0LL, 0LL);
  v15 = *(_QWORD *)(a1 + 608);
  if ( v15 )
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v15 + 104LL))(v15, &v22);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v16);
}
