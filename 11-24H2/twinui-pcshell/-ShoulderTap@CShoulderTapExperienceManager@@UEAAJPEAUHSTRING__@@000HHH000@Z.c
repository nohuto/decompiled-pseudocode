/*
 * XREFs of ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z @ 0x18038D770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1800AF724 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1801BFA80 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z @ 0x18038C7B8 (-IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x18038D150 (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 *     ?ShoulderTap_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG00HHH@Z @ 0x18038D914 (-ShoulderTap_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG00HHH@Z.c)
 *     ?get@?$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAAPEAVShoulderTapExperienceManagerTelemetry@@P6AXXZ@Z @ 0x18038DA94 (-get@-$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAAPEAVShoulderTapExpe.c)
 */

__int64 __fastcall CShoulderTapExperienceManager::ShoulderTap(
        HSTRING *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING a5,
        int a6,
        int a7,
        int a8,
        HSTRING a9,
        HSTRING a10,
        HSTRING string)
{
  const unsigned __int16 *StringRawBuffer; // r15
  const unsigned __int16 *v14; // r12
  const unsigned __int16 *v15; // r13
  __int64 v16; // rcx
  char IsEnabled; // al
  __int64 v18; // rcx
  int v19; // ebx
  int v20; // esi
  int v21; // r14d
  ShoulderTapExperienceManagerTelemetry *v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  HSTRING v27; // [rsp+88h] [rbp+48h] BYREF
  HSTRING v28; // [rsp+90h] [rbp+50h] BYREF
  HSTRING v29; // [rsp+98h] [rbp+58h] BYREF

  v29 = a4;
  v28 = a3;
  v27 = a2;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v14 = WindowsGetStringRawBuffer(a10, 0LL);
  v15 = WindowsGetStringRawBuffer(a3, 0LL);
  IsEnabled = ShoulderTapExperienceManagerTelemetry::IsEnabled(v16);
  v19 = a8;
  v20 = a7;
  v21 = a6;
  if ( IsEnabled )
  {
    wil::details::static_lazy<ShoulderTapExperienceManagerTelemetry>::get(
      v18,
      _lambda_43b277c613f9e9ea449b850c5995e33f_::_lambda_invoker_cdecl_);
    ShoulderTapExperienceManagerTelemetry::ShoulderTap_(v22, v15, v14, StringRawBuffer, v21, v20, v19);
  }
  Microsoft::WRL::Wrappers::HString::Set(this + 33, &v27);
  Microsoft::WRL::Wrappers::HString::Set(this + 34, &v28);
  Microsoft::WRL::Wrappers::HString::Set(this + 35, &v29);
  Microsoft::WRL::Wrappers::HString::Set(this + 36, &a5);
  *((_DWORD *)this + 74) = v21;
  *((_DWORD *)this + 75) = v20;
  *((_DWORD *)this + 76) = v19;
  Microsoft::WRL::Wrappers::HString::Set(this + 39, &a9);
  Microsoft::WRL::Wrappers::HString::Set(this + 40, &a10);
  Microsoft::WRL::Wrappers::HString::Set(this + 41, &string);
  if ( *((_DWORD *)this + 20) )
  {
    v23 = CShoulderTapExperienceManager::Reactivate((CShoulderTapExperienceManager *)this, 0);
    if ( v23 < 0 )
    {
      v24 = 219LL;
      goto LABEL_6;
    }
  }
  else
  {
    v23 = CSingleViewShellExperience::Show(
            (__int64)(this + 5),
            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
    if ( v23 < 0 )
    {
      v24 = 215LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v23);
      return (unsigned int)v23;
    }
  }
  return 0LL;
}
