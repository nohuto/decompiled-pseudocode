/*
 * XREFs of _anonymous_namespace_::GetBitmapStreamFromHICON @ 0x1805481B8
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x180548B88 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIWICBitmapSource@@@?$com_ptr_t@UIWICBitmap@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIWICBitmapSource@@Uerr_exception_policy@wil@@@1@XZ @ 0x18020CF78 (--$query@UIWICBitmapSource@@@-$com_ptr_t@UIWICBitmap@@Uerr_exception_policy@wil@@@wil@@QEBA-AV-$.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x18048E464 (-GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GU.c)
 */

// Hidden C++ exception states: #wind=9
__int64 *__fastcall anonymous_namespace_::GetBitmapStreamFromHICON(__int64 *a1, __int64 a2)
{
  HRESULT v4; // eax
  __int64 v5; // rax
  int v6; // eax
  struct IWICBitmapSource **v7; // rax
  int StreamOfWICBitmapSourceWithOptions; // eax
  int v9; // eax
  __int64 v10; // rax
  int ppv; // [rsp+20h] [rbp-40h]
  int ppva; // [rsp+20h] [rbp-40h]
  __int64 v14; // [rsp+38h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h] BYREF
  GUID v17; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 (__fastcall ***v19)(_QWORD, GUID *, _QWORD *); // [rsp+80h] [rbp+20h] BYREF
  LPVOID v20; // [rsp+88h] [rbp+28h] BYREF

  v20 = 0LL;
  v4 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &v20);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1B,
      (int)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v4,
      ppv);
  v19 = 0LL;
  v5 = *(_QWORD *)v20;
  v19 = 0LL;
  v6 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD))(v5 + 176))(v20, a2, &v19);
  if ( v6 >= 0 )
  {
    v15 = 0LL;
    v7 = (struct IWICBitmapSource **)wil::com_ptr_t<IWICBitmap,wil::err_exception_policy>::query<IWICBitmapSource>(
                                       &v19,
                                       &v16);
    v17 = GUID_WICPixelFormat32bppBGRA;
    StreamOfWICBitmapSourceWithOptions = GetStreamOfWICBitmapSourceWithOptions(
                                           v20,
                                           *v7,
                                           (__int64)&GUID_ContainerFormatPng,
                                           &v17,
                                           0,
                                           (IStream *)&v15);
    if ( StreamOfWICBitmapSourceWithOptions < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x22,
        (int)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)StreamOfWICBitmapSourceWithOptions,
        ppva);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
    v14 = 0LL;
    v9 = CreateRandomAccessStreamOverStream(v15, 0LL, &GUID_905a0fe1_bc53_11df_8c49_001e4fc686da, &v14);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x25,
        (int)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)v9,
        ppva);
    v10 = v14;
    v14 = 0LL;
    *a1 = v10;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1F,
      (int)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v6);
    *a1 = 0LL;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
  return a1;
}
