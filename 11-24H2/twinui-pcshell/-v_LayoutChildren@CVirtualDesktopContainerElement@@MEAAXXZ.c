/*
 * XREFs of ?v_LayoutChildren@CVirtualDesktopContainerElement@@MEAAXXZ @ 0x1804DFE70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Mirror_IsThreadRTL @ 0x180097AB4 (Mirror_IsThreadRTL.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C4860 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B7F2C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$As@UIScrollViewer@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804C73D0 (--$As@UIScrollViewer@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?CalcIdealWidth@CVirtualDesktopContainerElement@@IEAAHXZ @ 0x1804DE8C4 (-CalcIdealWidth@CVirtualDesktopContainerElement@@IEAAHXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CVirtualDesktopContainerElement::v_LayoutChildren(CVirtualDesktopContainerElement *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  LONG v4; // r8d
  __int64 v5; // rax
  int v6; // r10d
  int v7; // ecx
  int v8; // r14d
  LONG left; // r9d
  int v10; // ebx
  int v11; // eax
  LONG v12; // eax
  __int64 *v13; // rsi
  __int64 *v14; // r15
  __int64 v15; // rbx
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18[2]; // [rsp+40h] [rbp-40h] BYREF
  LONG v19; // [rsp+50h] [rbp-30h] BYREF
  LONG top; // [rsp+54h] [rbp-2Ch]
  int v21; // [rsp+58h] [rbp-28h]
  LONG bottom; // [rsp+5Ch] [rbp-24h]
  struct tagRECT rc; // [rsp+60h] [rbp-20h] BYREF

  if ( *((_QWORD *)this + 100) )
  {
    v16 = *((_QWORD *)this + 30);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v18, &v16, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    v2 = (__int64 *)*((_QWORD *)this + 11);
    v3 = *v2;
    v4 = *((_DWORD *)this + 15);
    v19 = *((_DWORD *)this + 14);
    top = v4;
    v21 = v19 + 1;
    bottom = v4 + 1;
    (*(void (__fastcall **)(__int64 *, LONG *, _QWORD, _QWORD))(v3 + 24))(v2, &v19, 0LL, 0LL);
    v5 = ***((_QWORD ***)this + 99);
    if ( *((_QWORD *)this + 100) == 1LL )
    {
      (*(void (**)(void))(v5 + 144))();
    }
    else
    {
      (*(void (**)(void))(v5 + 136))();
      (*(void (__fastcall **)(char *, struct tagRECT *))(*((_QWORD *)this + 28) + 32LL))((char *)this + 224, &rc);
      InflateRect(&rc, -*((_DWORD *)this + 99), 0);
      rc.left += *((_DWORD *)this + 78);
      rc.right -= *((_DWORD *)this + 79);
      rc.top += *((_DWORD *)this + 80);
      rc.bottom -= *((_DWORD *)this + 81);
      v6 = MulDiv(
             *((_DWORD *)this + 82),
             *((_DWORD *)this + 64) - *((_DWORD *)this + 62),
             *((_DWORD *)this + 65) - *((_DWORD *)this + 63));
      v7 = *((_DWORD *)this + 83);
      v8 = v7 + v6;
      left = rc.left;
      if ( (rc.right - rc.left) / 2 - (*((_DWORD *)this + 200) * (v7 + v6) - v7) / 2 + rc.left > rc.left )
        left = (rc.right - rc.left) / 2 - (*((_DWORD *)this + 200) * (v7 + v6) - v7) / 2 + rc.left;
      v19 = left;
      top = rc.top;
      v21 = left + v6;
      bottom = rc.bottom;
      if ( (unsigned int)Mirror_IsThreadRTL() )
      {
        v10 = v19 - *((_DWORD *)this + 99);
        v11 = CVirtualDesktopContainerElement::CalcIdealWidth(this);
        v12 = v10 + v10 + v11 - v21;
        v21 += v12 - v19;
        v19 = v12;
        v8 = -v8;
      }
      v13 = (__int64 *)*((_QWORD *)this + 99);
      v14 = &v13[*((_QWORD *)this + 100)];
      while ( v13 != v14 )
      {
        v16 = *v13;
        v15 = v16;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
        (*(void (__fastcall **)(__int64, LONG *))(*(_QWORD *)v15 + 104LL))(v15, &v19);
        v19 += v8;
        v21 += v8;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
        ++v13;
      }
    }
    v17 = 0LL;
    if ( *((_QWORD *)this + 10) )
    {
      if ( (int)Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollViewer>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 10,
                  &v17) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 80LL))(v17);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v18);
  }
}
