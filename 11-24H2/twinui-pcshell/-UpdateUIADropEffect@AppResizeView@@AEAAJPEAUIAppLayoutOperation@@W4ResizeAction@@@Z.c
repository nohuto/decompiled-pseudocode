/*
 * XREFs of ?UpdateUIADropEffect@AppResizeView@@AEAAJPEAUIAppLayoutOperation@@W4ResizeAction@@@Z @ 0x180530F28
 * Callers:
 *     ?UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDropFeedbackFlags@@@Z @ 0x180530BA8 (-UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDrop.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GenerateAppResizeDropEffect@TabletModeDragPattern@@YAJPEAUIAppLayoutOperation@@W4ResizeAction@@PEAV?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@PEAPEAG@Z @ 0x1805342FC (-GenerateAppResizeDropEffect@TabletModeDragPattern@@YAJPEAUIAppLayoutOperation@@W4ResizeAction@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppResizeView::UpdateUIADropEffect(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+28h] [rbp-18h]
  __int64 v12; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v14; // [rsp+50h] [rbp+10h] BYREF

  v6 = *(_QWORD *)(a1 + 80);
  if ( v6 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 72LL))(v6, &v14);
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v10);
    v11 = -1LL;
    v12 = -1LL;
    v7 = TabletModeDragPattern::GenerateAppResizeDropEffect(a2, a3, v14, &v10);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A1,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v7);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v10);
      return v8;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 80) + 64LL))(*(_QWORD *)(a1 + 80), v10);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v10);
  }
  return 0LL;
}
