/*
 * XREFs of ?ItemRemoved@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1804DF240
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180086E70 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C4860 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B7F2C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??4?$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z @ 0x1804B3F38 (--4-$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x1804BCC18 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ?GetAncestorElementOfType@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@W4AnimationCoordinatorItemType@@@Z @ 0x1804CE4A4 (-GetAncestorElementOfType@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsof.c)
 *     ??$As@UIVirtualDesktopItemElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopItemElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804DE318 (--$As@UIVirtualDesktopItemElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ?VirtualDesktopRemoveAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBUVirtualDesktopMetrics@@HAEBU_GUID@@PEAPEAX@Z @ 0x1804E36B0 (-VirtualDesktopRemoveAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBUVi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall CVirtualDesktopContainerElement::ItemRemoved(
        CVirtualDesktopContainerElement *this,
        struct IObservableObjectArray *a2,
        struct IObservableItem *a3)
{
  struct IUnknown *v3; // r13
  int v5; // r14d
  char *v6; // r15
  const struct _GUID *v7; // r9
  int v8; // eax
  __int64 v9; // rdi
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rbx
  struct IUnknown **v11; // rax
  bool v12; // r13
  struct IMultitaskingViewElement *v13; // r8
  void (__fastcall *v14)(char *, _QWORD); // rdi
  _QWORD *v15; // rax
  __int64 v16; // rax
  int v17; // r14d
  __int64 v18; // rsi
  __int64 (__fastcall *v19)(__int64, _QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *); // rdi
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // r8
  char v23; // di
  __int64 v24; // [rsp+30h] [rbp-39h] BYREF
  void *v25; // [rsp+38h] [rbp-31h] BYREF
  __int64 v26; // [rsp+40h] [rbp-29h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-21h] BYREF
  __int64 v28; // [rsp+50h] [rbp-19h] BYREF
  __int64 v29[2]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v30[4]; // [rsp+68h] [rbp-1h] BYREF
  char v31; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v33; // [rsp+D0h] [rbp+67h] BYREF
  struct IObservableItem *v34; // [rsp+E0h] [rbp+77h]
  __int64 v35; // [rsp+E8h] [rbp+7Fh] BYREF

  v34 = a3;
  v3 = (struct IUnknown *)a3;
  v5 = 0;
  LODWORD(v35) = 0;
  v33 = *((_QWORD *)this + 4);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v33);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v29, &v33, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
  v25 = 0LL;
  v6 = (char *)this - 208;
  ElementHelpers::GetAncestorElementOfType(&v24, (__int64)this - 208);
  if ( v24 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    v8 = VirtualDesktopRemoveAnimationCoordinator_CreateInstance(
           *((struct ISwitchThumbnailFactory **)this + 4),
           (CVirtualDesktopContainerElement *)((char *)this + 88),
           *((_DWORD *)this - 35) - *((_DWORD *)this - 37),
           v7,
           &v25);
    if ( v8 >= 0 )
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v24 + 392LL))(v24, v25);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8D,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
        (const char *)(unsigned int)v8);
  }
  v30[2] = (__int64)&v24;
  v30[3] = (__int64)&v25;
  v31 = 1;
  v9 = 0LL;
  while ( (unsigned __int64)(unsigned int)v9 < *((_QWORD *)this + 74) )
  {
    v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 73) + 8 * v9);
    v27 = v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
    v26 = 0LL;
    v12 = 0;
    if ( (int)Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopItemElement>(&v27, &v26) >= 0 )
    {
      v11 = (struct IUnknown **)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 24LL))(v26, &v33);
      v5 |= 1u;
      LODWORD(v35) = v5;
      if ( SHIsSameObject(*v11, v3) )
        v12 = 1;
    }
    if ( (v5 & 1) != 0 )
    {
      v5 &= ~1u;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    }
    if ( v12 )
    {
      v35 = *((_QWORD *)this + 4);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v35);
      DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v30, &v35, (__int64)&GUID_NULL, 0LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
      CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::RemoveAt(
        (_QWORD *)this + 73,
        (unsigned int)v9);
      if ( *((_QWORD *)this + 74) == 1LL )
      {
        *((_BYTE *)this + 616) = 0;
        LOBYTE(v35) = 1;
        ObservableProperty<bool>::operator=((__int64)this + 624, &v35);
      }
      if ( ElementHelpers::IsSameElement((struct IUnknown *)v10, *((struct IUnknown **)this - 5), v13) )
      {
        v14 = *(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v6 + 288LL);
        v15 = (_QWORD *)(*(__int64 (__fastcall **)(char *, __int64 *, _QWORD, __int64, _DWORD))(*(_QWORD *)v6 + 272LL))(
                          (char *)this - 208,
                          &v35,
                          *((_QWORD *)this - 5),
                          5LL,
                          0);
        v14((char *)this - 208, *v15);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
      }
      LOBYTE(v33) = 1;
      v16 = (*(__int64 (__fastcall **)(char *, __int64 *))(*(_QWORD *)v6 + 384LL))((char *)this - 208, &v28);
      v17 = v5 | 2;
      LODWORD(v35) = v17;
      v18 = *(_QWORD *)v16;
      v19 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(**(_QWORD **)v16 + 32LL);
      v20 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v10)[50])(v10);
      v21 = v19(v18, v20, v10, &v33);
      if ( v21 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB2,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
          (const char *)(unsigned int)v21);
        goto LABEL_21;
      }
      if ( (_BYTE)v33 )
LABEL_21:
        v23 = 1;
      else
        v23 = 0;
      if ( (v17 & 2) != 0 )
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
      if ( v23 )
      {
        LOBYTE(v22) = 1;
        (*(void (__fastcall **)(char *, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*(_QWORD *)v6 + 72LL))(
          v6,
          v10,
          v22);
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v10)[10])(v10);
      }
      DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v30);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
      if ( v24 && v25 )
      {
        (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 72LL))(v25);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 392LL))(v24, 0LL);
      }
      goto LABEL_35;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
    v9 = (unsigned int)(v9 + 1);
    v3 = (struct IUnknown *)v34;
  }
  if ( v24 && v25 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 72LL))(v25);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 392LL))(v24, 0LL);
  }
LABEL_35:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v29);
}
