/*
 * XREFs of ?GetPosition@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewPosition@@@Z @ 0x1801915B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUtagRECT@@@Z @ 0x18006D374 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAKAEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@AEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAKAEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Z @ 0x1803231D4 (--$MakeAndInitialize@VCCommonApplicationViewArrangePosition@@UIApplicationViewPosition@@AEAUtagR.c)
 */

__int64 __fastcall ApplicationViewOperation::GetPosition(
        ApplicationViewOperation *this,
        struct IApplicationViewPosition **a2)
{
  char v4; // cl
  __int64 v6; // rdx
  int v7; // ebx
  int v8; // eax
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a2 = 0LL;
  if ( *((_QWORD *)this + 8) )
    goto LABEL_22;
  v4 = *((_BYTE *)this + 84);
  if ( !v4 && !*((_DWORD *)this + 18) )
    return 2147943568LL;
  if ( *((_DWORD *)this + 19) && *((_DWORD *)this + 18) != 4 )
  {
    v6 = 58LL;
LABEL_8:
    v7 = -2147024809;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\internal\\shell\\inc\\private\\ApplicationViewOperationHelpers.h",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v8 = *((_DWORD *)this + 18);
  if ( *((_DWORD *)this + 20) )
  {
    if ( !v8 )
    {
      v6 = 62LL;
      goto LABEL_8;
    }
  }
  else if ( !v8 )
  {
    v7 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
           (__int64 *)this + 8,
           (__int64)this + 88);
    if ( v7 < 0 )
    {
      v6 = 78LL;
      goto LABEL_9;
    }
    goto LABEL_22;
  }
  v9 = 0LL;
  if ( v4 )
  {
    if ( (unsigned int)(v8 - 3) > 1 )
    {
      v6 = 70LL;
      goto LABEL_8;
    }
    v9 = *(_OWORD *)((char *)this + 88);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePosition,IApplicationViewPosition,tagRECT &,enum ARRANGEMENT_BASED_VIEW_STATE &,unsigned long &,enum ARRANGEMENT_BASED_VIEW_STATE_OPTIONS &>(
         (int)this + 64,
         (unsigned int)&v9,
         (int)this + 72,
         (int)this + 76,
         (__int64)this + 80);
  if ( v7 < 0 )
  {
    v6 = 73LL;
    goto LABEL_9;
  }
LABEL_22:
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 8);
  *a2 = (struct IApplicationViewPosition *)*((_QWORD *)this + 8);
  return 0LL;
}
