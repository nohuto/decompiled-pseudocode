/*
 * XREFs of ?GetViewAtIndex@TabletModeDragPattern@@YAJPEAUIAppLayout@@IPEAPEAUIApplicationView@@@Z @ 0x180534A94
 * Callers:
 *     ?GenerateWindowArrangementDropEffect@TabletModeDragPattern@@YAJPEAUIApplicationView@@PEAUIAppLayout@@W4ARRANGEMENT_ACTION@@PEAV?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@PEAPEAG@Z @ 0x180534898 (-GenerateWindowArrangementDropEffect@TabletModeDragPattern@@YAJPEAUIApplicationView@@PEAUIAppLay.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModeDragPattern::GetViewAtIndex(
        TabletModeDragPattern *this,
        struct IAppLayout *a2,
        _QWORD *a3,
        struct IApplicationView **a4)
{
  unsigned int v5; // edi
  __int64 (__fastcall *v7)(TabletModeDragPattern *, _QWORD, __int64, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  *a3 = 0LL;
  v13 = 0LL;
  v7 = *(__int64 (__fastcall **)(TabletModeDragPattern *, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)this + 104LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  v8 = v7(this, v5, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 118LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_6;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v13 + 48LL))(
         v13,
         &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
         a3);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 119LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  return v9;
}
