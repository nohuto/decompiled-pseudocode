/*
 * XREFs of ?AddTempAppVisualsToLayoutOperation@WindowArrangementView@@AEAAJPEAUIAppLayoutOperationBuilder@@@Z @ 0x18052A350
 * Callers:
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18052C600 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180546B64 (-CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowArrangementView::AddTempAppVisualsToLayoutOperation(
        WindowArrangementView *this,
        struct IAppLayoutOperationBuilder *a2)
{
  const struct _GUID *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64 *); // rbx
  int v9; // eax
  void *v10; // rbx
  int v11; // eax
  int v12; // edi
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, __int64 *); // rdi
  __int64 v15; // rdx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v17)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v18; // rdx
  __int64 v20; // [rsp+20h] [rbp-10h] BYREF
  void *v21; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v23; // [rsp+70h] [rbp+40h] BYREF
  __int64 v24; // [rsp+78h] [rbp+48h] BYREF

  v21 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v21);
  v5 = CTempAppVisualArray::CreateInstance(v4, &v21);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v23 = 0LL;
    v7 = *((_QWORD *)this + 9);
    v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 40LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    v9 = v8(v7, &v23);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5EF,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
      goto LABEL_20;
    }
    v10 = v21;
    v11 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v21 + 48LL))(v21, v23);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F0,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v11);
LABEL_7:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
      v6 = v12;
      goto LABEL_20;
    }
    v24 = 0LL;
    v13 = *((_QWORD *)this + 10);
    v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 104LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v24);
    v12 = v14(v13, &v24);
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v10 + 48LL))(v10, v24);
      if ( v12 >= 0 )
      {
        v20 = 0LL;
        v16 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 9);
        v17 = **v16;
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v20);
        v12 = v17(v16, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, &v20);
        if ( v12 >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v10 + 40LL))(v10, v20);
          if ( v12 >= 0 )
          {
            (*(void (__fastcall **)(struct IAppLayoutOperationBuilder *, void *))(*(_QWORD *)a2 + 32LL))(a2, v10);
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v20);
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v24);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
            v6 = 0;
            goto LABEL_20;
          }
          v18 = 1530LL;
        }
        else
        {
          v18 = 1529LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v20);
        goto LABEL_11;
      }
      v15 = 1525LL;
    }
    else
    {
      v15 = 1524LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v12);
LABEL_11:
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v24);
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5EB,
    (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)v5);
LABEL_20:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v21);
  return v6;
}
