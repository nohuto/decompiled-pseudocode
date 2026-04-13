/*
 * XREFs of ?CreateAction@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@PEAPEAUITargetedContentActionInternal@2345@@Z @ 0x18006E350
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$MakeAndInitialize@VTargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UITargetedContentActionInternal@2345@W4ActionServices@Actions@CreativeFramework@@AEAUActionContext@89@AEAPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Details@WRL@Microsoft@@YAJPEAPEAUITargetedContentActionInternal@Internal@TargetedContent@Services@Windows@@$$QEAW4ActionServices@Actions@CreativeFramework@@AEAUActionContext@9CreativeFramework@@AEAPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@7@@Z @ 0x18006B334 (--$MakeAndInitialize@VTargetedContentActionInternalImpl@Internal@TargetedContent@Services@Window.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::CreateAction(
        __int64 a1,
        HSTRING a2,
        __int64 a3,
        _QWORD *a4)
{
  const WCHAR *StringRawBuffer; // rdi
  wchar_t **v6; // rbx
  int v7; // eax
  const char *v8; // r9
  BOOL bIgnoreCase; // [rsp+20h] [rbp-68h]
  unsigned int v11; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+38h] [rbp-50h] BYREF
  __int64 v13; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v14[4]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v12 = a3;
  *a4 = 0LL;
  v13 = 0LL;
  v14[3] = 7LL;
  v14[2] = 0LL;
  LOWORD(v14[0]) = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  v6 = &off_1800CA300;
  try
  {
    while ( 1 )
    {
      if ( v6 == (wchar_t **)&aProxyFileList )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x60,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\ActionFactory.h",
          (const char *)0x80070490LL,
          bIgnoreCase);
      if ( CompareStringOrdinal(*v6, -1, StringRawBuffer, -1, 1) == 2 )
        break;
      v6 += 2;
    }
    v11 = *((_DWORD *)v6 + 2);
    v7 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal,enum CreativeFramework::Actions::ActionServices,CreativeFramework::Actions::ActionContext &,Windows::Foundation::Collections::IMapView<HSTRING__ *,HSTRING__ *> * &>(
           a4,
           &v11,
           (__int64)&v13,
           &v12);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x34,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
        (const char *)(unsigned int)v7,
        bIgnoreCase);
  }
  catch ( ... )
  {
    v11 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x36,
            (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
            v8);
    std::wstring::_Tidy(v14, 1, 0LL);
    return v11;
  }
  std::wstring::_Tidy(v14, 1, 0LL);
  return 0LL;
}
