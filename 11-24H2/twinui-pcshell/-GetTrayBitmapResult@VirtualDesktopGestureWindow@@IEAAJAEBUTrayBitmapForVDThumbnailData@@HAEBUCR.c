/*
 * XREFs of ?GetTrayBitmapResult@VirtualDesktopGestureWindow@@IEAAJAEBUTrayBitmapForVDThumbnailData@@HAEBUCRect@Geometry@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAUIDCompThumbnail@@@Z @ 0x18056043C
 * Callers:
 *     ?s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@KAXPEAUHWND__@@I_K_J@Z @ 0x180563F60 (-s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@KAXPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800C9E90 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureWindow::GetTrayBitmapResult(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  void *v8; // rcx
  int v10; // ebx
  __int64 *v11; // rdi
  __int64 (__fastcall *v12)(__int64 *, _QWORD, _QWORD, __int64, GUID *, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rbx
  unsigned __int64 v16; // r9
  void *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // [rsp+40h] [rbp-79h] BYREF
  __int64 v22; // [rsp+48h] [rbp-71h]
  __int64 v23; // [rsp+50h] [rbp-69h] BYREF
  __int128 v24; // [rsp+60h] [rbp-59h]
  _OWORD pv[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v26; // [rsp+90h] [rbp-29h]
  struct tagPOINT Points[2]; // [rsp+A0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+4Fh]

  *(_QWORD *)&v24 = a4;
  v23 = a2;
  v26 = a6;
  v8 = *(void **)(a2 + 16);
  if ( !v8 )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 8) )
    return 2147947423LL;
  memset(pv, 0, sizeof(pv));
  if ( GetObjectW(v8, 32, pv) )
  {
    v21 = 0LL;
    v11 = *(__int64 **)(a1 + 56);
    if ( *(_BYTE *)(a1 + 224) )
    {
      v12 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64, GUID *, __int64 *))(*v11 + 72);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
      v22 = *(_QWORD *)((char *)pv + 4);
      v13 = v12(
              v11,
              *(_QWORD *)(a1 + 160),
              *(_QWORD *)((char *)pv + 4),
              1LL,
              &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
              &v21);
      v10 = v13;
      if ( v13 < 0 )
      {
        v14 = 379LL;
LABEL_15:
        v16 = (unsigned int)v13;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)v16);
LABEL_30:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
        return (unsigned int)v10;
      }
    }
    else
    {
      v15 = *v11;
      if ( *(_DWORD *)(a1 + 228) == 2 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
        v22 = *(_QWORD *)((char *)pv + 4);
        v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64, GUID *, __int64 *))(v15 + 72))(
                v11,
                v26,
                *(_QWORD *)((char *)pv + 4),
                1LL,
                &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                &v21);
        v10 = v13;
        if ( v13 < 0 )
        {
          v14 = 385LL;
          goto LABEL_15;
        }
      }
      else
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
        v22 = *(_QWORD *)((char *)pv + 4);
        v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64, GUID *, __int64 *))(v15 + 72))(
                v11,
                *(_QWORD *)(a1 + 160),
                *(_QWORD *)((char *)pv + 4),
                1LL,
                &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                &v21);
        v10 = v13;
        if ( v13 < 0 )
        {
          v14 = 389LL;
          goto LABEL_15;
        }
      }
    }
    (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, __int64, __int64), __int64 *))(*(_QWORD *)v21 + 88LL))(
      v21,
      LambdaCustomPaintProc__lambda_3cfa92d190bc4310595425b1883be1f6__HDC___,
      &v23);
    *(_OWORD *)&Points[0].x = *(_OWORD *)v24;
    MapWindowPoints(0LL, *(HWND *)(a1 + 8), Points, 2u);
    if ( *(_BYTE *)(a1 + 224) || *(_DWORD *)(a1 + 228) != 2 )
    {
      Points[0].x += a3;
      Points[1].x += a3;
    }
    else
    {
      LODWORD(v24) = 0;
      DWORD1(v24) = Points[0].y;
      DWORD2(v24) = Points[1].x - Points[0].x;
      HIDWORD(v24) = Points[1].y;
      *(_OWORD *)&Points[0].x = v24;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, struct tagPOINT *, _QWORD, _QWORD))(*(_QWORD *)v21 + 24LL))(
            v21,
            Points,
            0LL,
            0LL);
    v10 = v13;
    if ( v13 < 0 )
    {
      v14 = 421LL;
      goto LABEL_15;
    }
    v10 = 0;
    v18 = a5[1];
    if ( v18 != a5[3]
      || (v10 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)a5,
                  v18 + 1,
                  v17),
          v10 >= 0) )
    {
      v19 = a5[1];
      a5[1] = v19 + 1;
      v20 = (__int64 *)(*a5 + 8 * v19);
      if ( !v20 )
        goto LABEL_29;
      *v20 = v21;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v20);
    }
    if ( v10 < 0 )
    {
      v16 = (unsigned int)v10;
      v14 = 422LL;
      goto LABEL_16;
    }
LABEL_29:
    v10 = 0;
    goto LABEL_30;
  }
  v10 = -2147467259;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x177,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)0x80004005LL);
  return (unsigned int)v10;
}
