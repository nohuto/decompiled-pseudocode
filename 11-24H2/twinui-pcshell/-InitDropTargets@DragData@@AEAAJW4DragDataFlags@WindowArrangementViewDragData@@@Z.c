/*
 * XREFs of ?InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180533A7C
 * Callers:
 *     ?RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180533EEC (-RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4Dra.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?AddDropTarget@DragData@@AEAAJW4DropLocation@WindowArrangementViewDragData@@AEBUCRect@Geometry@@_N@Z @ 0x1805335AC (-AddDropTarget@DragData@@AEAAJW4DropLocation@WindowArrangementViewDragData@@AEBUCRect@Geometry@@.c)
 *     ?GetDropTargetEnabledList@DragData@@AEAA?AW4DropTargetEnabledFlags@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1805336F4 (-GetDropTargetEnabledList@DragData@@AEAA-AW4DropTargetEnabledFlags@@W4DragDataFlags@WindowArrang.c)
 *     ?GetLeftAndRightItems@DragData@@AEAAJPEAPEAUIAppLayoutItem@@0@Z @ 0x1805337D4 (-GetLeftAndRightItems@DragData@@AEAAJPEAPEAUIAppLayoutItem@@0@Z.c)
 *     ?GetReplaceDropTargetRects@DragData@@AEAAJPEAUCRect@Geometry@@0@Z @ 0x18053389C (-GetReplaceDropTargetRects@DragData@@AEAAJPEAUCRect@Geometry@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DragData::InitDropTargets(__int64 a1, char a2)
{
  char DropTargetEnabledList; // si
  int ReplaceDropTargetRects; // edi
  __int64 v5; // rdx
  int LeftAndRightItems; // eax
  int v8; // eax
  __int64 *v9; // rdi
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // r14d
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // [rsp+30h] [rbp-40h] BYREF
  struct IAppLayoutItem *v18[2]; // [rsp+38h] [rbp-38h] BYREF
  struct IAppLayoutItem *v19; // [rsp+48h] [rbp-28h] BYREF
  __int128 v20; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  DropTargetEnabledList = DragData::GetDropTargetEnabledList(a1, a2);
  if ( (DropTargetEnabledList & 1) != 0 )
  {
    v20 = *(_OWORD *)(a1 + 56);
    HIDWORD(v20) = *(_DWORD *)(a1 + 84) + DWORD1(v20);
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 5, &v20, 0);
    if ( ReplaceDropTargetRects < 0 )
    {
      v5 = 237LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
        (const char *)(unsigned int)ReplaceDropTargetRects);
      return (unsigned int)ReplaceDropTargetRects;
    }
  }
  if ( (DropTargetEnabledList & 2) != 0 )
  {
    v20 = *(_OWORD *)(a1 + 56);
    DWORD1(v20) = HIDWORD(*(_QWORD *)(a1 + 64)) - *(_DWORD *)(a1 + 88);
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 6, &v20, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v5 = 244LL;
      goto LABEL_4;
    }
  }
  if ( (DropTargetEnabledList & 4) != 0 )
  {
    *(_OWORD *)v18 = *(_OWORD *)(a1 + 56);
    LODWORD(v18[1]) = _mm_cvtsi128_si32(*(__m128i *)v18) + *(_DWORD *)(a1 + 92);
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 0, v18, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v5 = 252LL;
      goto LABEL_4;
    }
    *(_OWORD *)v18 = *(_OWORD *)(a1 + 56);
    LODWORD(v18[0]) = *(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 92);
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 1, v18, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v5 = 256LL;
      goto LABEL_4;
    }
  }
  if ( (DropTargetEnabledList & 8) != 0 )
  {
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 4, (_OWORD *)(a1 + 56), 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v5 = 265LL;
      goto LABEL_4;
    }
  }
  if ( (DropTargetEnabledList & 0x10) != 0 )
  {
    v19 = 0LL;
    v18[0] = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
    LeftAndRightItems = DragData::GetLeftAndRightItems((DragData *)a1, &v19, v18);
    ReplaceDropTargetRects = LeftAndRightItems;
    if ( LeftAndRightItems < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x114,
        (int)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
        (const char *)(unsigned int)LeftAndRightItems);
LABEL_33:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v18);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
      return (unsigned int)ReplaceDropTargetRects;
    }
    v17 = 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 184LL))(
           *(_QWORD *)(a1 + 40),
           *(_QWORD *)(a1 + 48));
    v9 = *(__int64 **)(a1 + 40);
    v10 = *v9;
    if ( v8 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *, _QWORD))(v10 + 152))(
              v9,
              *(_QWORD *)(a1 + 48),
              &v17,
              0LL);
      ReplaceDropTargetRects = v11;
      if ( v11 < 0 )
      {
        v12 = 281LL;
LABEL_32:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (int)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
          (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
        goto LABEL_33;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(v10 + 168))(v9, &v17, 0LL);
      ReplaceDropTargetRects = v11;
      if ( v11 < 0 )
      {
        v12 = 289LL;
        goto LABEL_32;
      }
    }
    v13 = (*(__int64 (__fastcall **)(__int64, struct IAppLayoutItem *))(*(_QWORD *)v17 + 96LL))(v17, v19);
    v20 = 0LL;
    if ( v13 )
    {
      (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __int128 *))(*(_QWORD *)v18[0] + 56LL))(
        v18[0],
        0LL,
        &v20);
      v14 = DWORD2(v20) - MulDiv(DWORD2(v20) - v20, 50, 100);
    }
    else
    {
      (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __int128 *))(*(_QWORD *)v19 + 56LL))(v19, 0LL, &v20);
      v14 = MulDiv(DWORD2(v20) - v20, 50, 100) + v20;
    }
    v20 = *(_OWORD *)(a1 + 56);
    DWORD2(v20) = v14;
    v11 = DragData::AddDropTarget((_QWORD *)a1, 0, &v20, 1);
    ReplaceDropTargetRects = v11;
    if ( v11 < 0 )
    {
      v12 = 317LL;
      goto LABEL_32;
    }
    v20 = *(_OWORD *)(a1 + 56);
    LODWORD(v20) = v14;
    v11 = DragData::AddDropTarget((_QWORD *)a1, 1, &v20, 1);
    ReplaceDropTargetRects = v11;
    if ( v11 < 0 )
    {
      v12 = 321LL;
      goto LABEL_32;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
  }
  if ( (DropTargetEnabledList & 0x20) == 0 )
    return 0LL;
  v20 = 0LL;
  *(_OWORD *)v18 = 0LL;
  ReplaceDropTargetRects = DragData::GetReplaceDropTargetRects(
                             (DragData *)a1,
                             (struct Geometry::CRect *)&v20,
                             (struct Geometry::CRect *)v18);
  if ( ReplaceDropTargetRects < 0 )
  {
    v5 = 328LL;
    goto LABEL_4;
  }
  ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 2, &v20, 1);
  if ( ReplaceDropTargetRects < 0 )
  {
    v5 = 329LL;
    goto LABEL_4;
  }
  v15 = DragData::AddDropTarget((_QWORD *)a1, 3, v18, 1);
  v16 = v15;
  if ( v15 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14A,
    (int)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
    (const char *)(unsigned int)v15);
  return v16;
}
