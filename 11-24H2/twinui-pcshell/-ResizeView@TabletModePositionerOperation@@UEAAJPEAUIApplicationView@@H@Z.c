/*
 * XREFs of ?ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z @ 0x180528B20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136988 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x180527BD0 (--$As@UIAppLayoutItemBuilder@@@-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?FindAdjacentItem@TabletModePositionerOperation@@AEAAJPEAUIAppLayoutItem@@AEBU_GUID@@PEAPEAX@Z @ 0x180528650 (-FindAdjacentItem@TabletModePositionerOperation@@AEAAJPEAUIAppLayoutItem@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067EEB4 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806C26BC (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806C2CFC (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1806C30D8 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModePositionerOperation::ResizeView(
        TabletModePositionerOperation *this,
        struct IApplicationView *a2,
        int a3)
{
  TabletModePositionerOperation *v6; // r12
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, struct IApplicationView *, struct IAppLayoutItem **, _QWORD); // rbx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  const struct _GUID *v14; // r8
  int AdjacentItem; // eax
  __int64 v16; // rdx
  signed int v17; // edi
  enum DEVICE_SCALE_FACTOR v18; // r8d
  int v19; // eax
  struct IAppLayoutItem *v21; // [rsp+30h] [rbp-59h] BYREF
  void *v22; // [rsp+38h] [rbp-51h] BYREF
  __int64 v23; // [rsp+40h] [rbp-49h] BYREF
  signed __int64 v24; // [rsp+48h] [rbp-41h] BYREF
  int v25; // [rsp+50h] [rbp-39h]
  ImmersiveApplicationLayout *v26[2]; // [rsp+58h] [rbp-31h] BYREF
  __int128 v27; // [rsp+68h] [rbp-21h] BYREF
  struct tagSIZE v28[2]; // [rsp+78h] [rbp-11h]
  __int64 v29; // [rsp+88h] [rbp-1h]
  __int128 v30; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v6 = (TabletModePositionerOperation *)((char *)this - 176);
  v24 = ((unsigned __int64)this + 16) & -(__int64)(this != (TabletModePositionerOperation *)176);
  v25 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v24, 1);
  v7 = CAppLayoutOperation::_VerifyAndPrepareLayout((TabletModePositionerOperation *)((char *)this - 152), 0LL, 0);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v21 = 0LL;
    v9 = *((_QWORD *)this - 14);
    v10 = *(__int64 (__fastcall **)(__int64, struct IApplicationView *, struct IAppLayoutItem **, _QWORD))(*(_QWORD *)v9 + 152LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    v11 = v10(v9, a2, &v21, 0LL);
    v8 = v11;
    if ( v11 < 0 )
    {
      v12 = 264LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
        (const char *)(unsigned int)v11);
LABEL_6:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
      goto LABEL_22;
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this - 14) + 48LL))(*((_QWORD *)this - 14)) )
    {
      v23 = 0LL;
      v13 = Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v21,
              &v23);
      v8 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x111,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
          (const char *)(unsigned int)v13);
LABEL_10:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
        goto LABEL_6;
      }
      v22 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
      AdjacentItem = TabletModePositionerOperation::FindAdjacentItem(v6, v21, v14, &v22);
      v8 = AdjacentItem;
      if ( AdjacentItem < 0 )
      {
        v16 = 275LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
          (const char *)(unsigned int)AdjacentItem);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
        goto LABEL_10;
      }
      v27 = 0LL;
      *(_OWORD *)&v28[0].cx = 0LL;
      v29 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this - 14) + 24LL))(*((_QWORD *)this - 14), &v27);
      v17 = DWORD2(v27) - v27;
      LODWORD(v26[0]) = DWORD2(v27) - v27;
      HIDWORD(v26[0]) = HIDWORD(v27) - DWORD1(v27);
      v19 = ImmersiveApplicationLayout::ComputeGutterWidth(v26[0], (struct tagSIZE)(unsigned int)v28[0].cx, v18);
      if ( (int)(v19
               + (*(__int64 (__fastcall **)(void *, __int128 *, _QWORD))(*(_QWORD *)v22 + 72LL))(
                   v22,
                   &v27,
                   (unsigned int)(v17 - v19))
               + a3) > v17 )
      {
        AdjacentItem = CAppLayoutOperation::_MakeViewFullScreen((char *)this - 152, a2, 5LL);
        v8 = AdjacentItem;
        if ( AdjacentItem < 0 )
        {
          v16 = 300LL;
          goto LABEL_13;
        }
      }
      else
      {
        *(_OWORD *)v26 = 0LL;
        (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, ImmersiveApplicationLayout **))(*(_QWORD *)v21 + 56LL))(
          v21,
          0LL,
          v26);
        LODWORD(v26[1]) = a3 + LODWORD(v26[0]);
        (*(void (__fastcall **)(__int64, _QWORD, ImmersiveApplicationLayout **))(*(_QWORD *)v23 + 104LL))(v23, 0LL, v26);
        v30 = 0LL;
        (*(void (__fastcall **)(void *, _QWORD, __int128 *))(*(_QWORD *)v22 + 104LL))(v22, 0LL, &v30);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    }
    *((_DWORD *)this - 18) = 1;
    v11 = CAppLayoutOperation::_FinalizeLayout((char *)this - 152, 0LL);
    v8 = v11;
    if ( v11 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
      v8 = 0;
      goto LABEL_22;
    }
    v12 = 305LL;
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x104,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
    (const char *)(unsigned int)v7);
LABEL_22:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v24);
  return v8;
}
