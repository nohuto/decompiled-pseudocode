/*
 * XREFs of ?QueryArrangeView@WindowArrangementView@@AEAAJPEAUIApplicationView@@W4DropLocation@WindowArrangementViewDragData@@PEAPEAUIAppLayoutOperation@@@Z @ 0x18052C878
 * Callers:
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18052C600 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@Z @ 0x18052DFD0 (-UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DropLocationToArrangementAction@WindowArrangementView@@AEAA?AW4ARRANGEMENT_ACTION@@W4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18052A9B4 (-DropLocationToArrangementAction@WindowArrangementView@@AEAA-AW4ARRANGEMENT_ACTION@@W4DropLocati.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowArrangementView::QueryArrangeView(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  HRESULT v8; // eax
  unsigned int v9; // ebx
  void *v10; // rbx
  __int64 (__fastcall *v11)(void *, GUID *, GUID *, __int64 *); // rdi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF
  void *ppvOut; // [rsp+78h] [rbp+48h] BYREF

  *a4 = 0LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v8 = IUnknown_QueryService(
         *(IUnknown **)(a1 + 16),
         &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
         &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
         &ppvOut);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v18 = 0LL;
    v10 = ppvOut;
    v11 = *(__int64 (__fastcall **)(void *, GUID *, GUID *, __int64 *))(*(_QWORD *)ppvOut + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    v12 = v11(v10, &CLSID_WindowArrangementOperation, &GUID_83266822_9e63_4b62_a1b4_75b389df3388, &v18);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v15 = WindowArrangementView::DropLocationToArrangementAction(v13, a3);
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v18 + 40LL))(v18, a2, v15);
      v9 = v12;
      if ( v12 >= 0 )
      {
        v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v18)(
                v18,
                &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
                a4);
        v9 = v12;
        if ( v12 >= 0 )
        {
LABEL_10:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
          goto LABEL_11;
        }
        v14 = 1568LL;
      }
      else
      {
        v14 = 1567LL;
      }
    }
    else
    {
      v14 = 1564LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x619,
    (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)v8);
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  return v9;
}
