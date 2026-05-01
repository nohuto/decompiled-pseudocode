/*
 * XREFs of ?RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180533EEC
 * Callers:
 *     ??$MakeAndInitialize@VDragData@@V1@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Details@WRL@Microsoft@@YAJPEAPEAVDragData@@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1805332E0 (--$MakeAndInitialize@VDragData@@V1@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180533A7C (-InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragData::RuntimeClassInitialize(__int64 a1, IUnknown *a2, __int64 a3, __int64 a4, char a5)
{
  HRESULT Service; // eax
  unsigned int v10; // ebx
  void *v11; // rbx
  __int64 (__fastcall *v12)(void *, _QWORD, GUID *, GUID *, __int64 *); // rdi
  int inited; // eax
  __int64 v14; // rdx
  void *ppvOut[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v18; // [rsp+60h] [rbp+20h] BYREF

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 16), (__int64)a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 40), a3);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 48), a4);
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
  Service = IUnknown_QueryService(
              a2,
              (const GUID *const)&SID_IImmersiveMonitorService,
              &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
              ppvOut);
  v10 = Service;
  if ( Service >= 0 )
  {
    v18 = 0LL;
    v11 = ppvOut[0];
    v12 = *(__int64 (__fastcall **)(void *, _QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)ppvOut[0] + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    inited = v12(v11, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v18);
    v10 = inited;
    if ( inited >= 0 )
    {
      inited = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 72LL))(v18, a1 + 56);
      v10 = inited;
      if ( inited >= 0 )
      {
        *(_DWORD *)(a1 + 84) = MulDiv(*(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60), 15, 100);
        *(_DWORD *)(a1 + 88) = MulDiv(*(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60), 10, 100);
        *(_DWORD *)(a1 + 92) = MulDiv(*(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 56), 33, 100);
        inited = DragData::InitDropTargets(a1, a5);
        v10 = inited;
        if ( inited >= 0 )
        {
LABEL_10:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
          goto LABEL_11;
        }
        v14 = 103LL;
      }
      else
      {
        v14 = 97LL;
      }
    }
    else
    {
      v14 = 95LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
      (const char *)(unsigned int)inited);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C,
    (int)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
    (const char *)(unsigned int)Service);
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
  return v10;
}
