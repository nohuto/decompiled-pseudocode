/*
 * XREFs of ?ClipChanged@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@AEBUCRect@Geometry@@PEA_N@Z @ 0x1804E1060
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UDropTarget@WindowArrangementViewDragData@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UDropTarget@WindowArrangementViewDragData@@@@V?$CSimpleArrayStandardCompareHelper@UDropTarget@WindowArrangementViewDragData@@@@V?$CSimpleArrayStandardMergeHelper@UDropTarget@WindowArrangementViewDragData@@@@@@QEAAJ_K0@Z @ 0x1804E1C04 (-_EnsureCapacity@-$CTSimpleArray@UDropTarget@WindowArrangementViewDragData@@$0PPPPPPPO@V-$CTPoli.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ItemAnimationCoordinatorBase::ClipChanged(
        _BYTE *a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, _BYTE **),
        __int128 *a4,
        _BYTE *a5)
{
  _BYTE *v8; // r14
  __int64 (__fastcall *v9)(_QWORD, GUID *, _BYTE **); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  _QWORD *v12; // rsi
  __int64 v13; // rbx
  __int128 v14; // xmm6
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  int v20[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v21; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = a5;
  *a5 = 1;
  if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 120LL))(a1) || !a1[232] )
    return 0LL;
  a5 = 0LL;
  v9 = **a3;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  v10 = v9(a3, &GUID_c9465035_5fb8_4b34_818f_fcfe7bd7b95c, &a5);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = a1 + 184;
    v13 = (__int64)a5;
    *(_QWORD *)v20 = a5;
    if ( a5 )
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a5 + 8LL))(a5);
    v14 = *a4;
    v21 = *a4;
    v15 = 0;
    v16 = v12[1];
    if ( v16 != v12[3]
      || (v15 = CTSimpleArray<WindowArrangementViewDragData::DropTarget,4294967294,CTPolicyCoTaskMem<WindowArrangementViewDragData::DropTarget>,CSimpleArrayStandardCompareHelper<WindowArrangementViewDragData::DropTarget>,CSimpleArrayStandardMergeHelper<WindowArrangementViewDragData::DropTarget>>::_EnsureCapacity(
                  v12,
                  v16 + 1),
          v15 >= 0) )
    {
      v17 = v12[1];
      v12[1] = v17 + 1;
      v18 = *v12 + 24 * v17;
      if ( v18 )
      {
        *(_QWORD *)v18 = 0LL;
        if ( (int *)v18 != v20 )
        {
          *(_QWORD *)v18 = v13;
          *(_QWORD *)v20 = 0LL;
        }
        *(_OWORD *)(v18 + 8) = v14;
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
    if ( v15 >= 0 )
    {
      *v8 = 0;
      v11 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
        (const char *)(unsigned int)v15);
      v11 = v15;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  return v11;
}
