/*
 * XREFs of ?v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ @ 0x1804D0690
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Mirror_IsThreadRTL @ 0x180097AB4 (Mirror_IsThreadRTL.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C4860 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B7F2C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$As@UIVirtualDesktopNewElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopNewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804CF7D8 (--$As@UIVirtualDesktopNewElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$C.c)
 *     ?_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ @ 0x1804D04BC (-_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CVirtualDesktopBarElement::v_LayoutChildren(CVirtualDesktopBarElement *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // r8d
  int v5; // eax
  int v6; // edi
  __m128i v7; // xmm6
  unsigned __int64 v8; // rbx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rdx
  __int32 v12; // edi
  __int32 v13; // ecx
  _DWORD v14[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v15; // [rsp+40h] [rbp-21h] BYREF
  __int64 v16[2]; // [rsp+48h] [rbp-19h] BYREF
  __m128i v17; // [rsp+58h] [rbp-9h] BYREF
  __int64 v18; // [rsp+68h] [rbp+7h] BYREF
  int v19; // [rsp+70h] [rbp+Fh]
  int v20; // [rsp+74h] [rbp+13h]
  __m128i v21; // [rsp+78h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v18 = *((_QWORD *)this + 28);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v16, &v18, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  v2 = (__int64 *)*((_QWORD *)this + 11);
  v3 = *v2;
  v4 = *((_DWORD *)this + 15);
  LODWORD(v18) = *((_DWORD *)this + 14);
  HIDWORD(v18) = v4;
  v19 = v18 + 1;
  v20 = v4 + 1;
  (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD))(v3 + 24))(v2, &v18, 0LL, 0LL);
  CVirtualDesktopBarElement::_LayoutBackground(this);
  v5 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v6 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v17.m128i_i64[0] = 0LL;
  v17.m128i_i64[1] = __PAIR64__(v5, v6);
  v7 = v17;
  v8 = HIDWORD(_mm_srli_si128(v17, 8).m128i_u64[0]);
  v14[0] = 0;
  v14[1] = 0;
  v15 = 0LL;
  v9 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopNewElement>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 94,
         &v15);
  v10 = retaddr;
  if ( v9 < 0 )
  {
    v11 = 265LL;
LABEL_3:
    wil::details::in1diag3::_Log_Hr(
      v10,
      (void *)v11,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_8;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v15 + 24LL))(v15, v14);
  v10 = retaddr;
  if ( v9 < 0 )
  {
    v11 = 266LL;
    goto LABEL_3;
  }
  if ( (int)v8 <= v14[0] )
    LODWORD(v8) = v14[0];
LABEL_8:
  v17.m128i_i32[0] = v17.m128i_i32[2] - v8;
  if ( (unsigned int)Mirror_IsThreadRTL() )
  {
    v12 = v6 - v17.m128i_i32[2];
    v17.m128i_i32[2] += v12 - v17.m128i_i32[0];
    v17.m128i_i32[0] = v12;
  }
  (*(void (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 94) + 104LL))(*((_QWORD *)this + 94), &v17);
  v21 = v7;
  v13 = *((_DWORD *)this + 84);
  if ( v13 <= v17.m128i_i32[2] - v17.m128i_i32[0] )
    v13 = v17.m128i_i32[2] - v17.m128i_i32[0];
  v21.m128i_i32[0] = v13;
  v21.m128i_i32[2] -= v13;
  (*(void (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 93) + 104LL))(*((_QWORD *)this + 93), &v21);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v16);
}
