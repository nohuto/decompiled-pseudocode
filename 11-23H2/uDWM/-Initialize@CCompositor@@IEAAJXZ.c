/*
 * XREFs of ?Initialize@CCompositor@@IEAAJXZ @ 0x180027E08
 * Callers:
 *     ?Create@CCompositor@@SAJPEAPEAV1@@Z @ 0x180027B00 (-Create@CCompositor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007478 (--1-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001FCEC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?CoinitializeWrapper@CCompositor@@AEAAJXZ @ 0x180027FC4 (-CoinitializeWrapper@CCompositor@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CCompositor::Initialize(void **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int ActivationFactory; // eax
  void *v5; // rcx
  __int64 (__fastcall **v6)(_QWORD, GUID *, __int64 *); // rax
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, void **, GUID *); // r14
  char *v10; // rsi
  void *v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v13)(_QWORD, GUID *, void **); // rsi
  void *v14; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-50h]
  __int64 v19; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v2 = CCompositor::CoinitializeWrapper((CCompositor *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
      (const char *)(unsigned int)v2,
      v18);
    return v3;
  }
  v20 = 0LL;
  v22 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.Composition.Compositor",
    0x22u,
    0x21u);
  ActivationFactory = RoGetActivationFactory(v22, &GUID_00000035_0000_0000_c000_000000000046, &v20);
  v3 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v16 = 50LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v18);
    goto LABEL_14;
  }
  v5 = this[3];
  this[3] = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  ActivationFactory = MilCompositionEngine_CreateChannel(0LL, this + 3);
  v3 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v16 = 66LL;
    goto LABEL_20;
  }
  v19 = 0LL;
  v6 = *v20;
  v19 = 0LL;
  v7 = (*v6)(v20, &GUID_22118adf_23f1_4801_bcfa_66cbf48cc51b, &v19);
  v3 = v7;
  if ( v7 < 0 )
  {
    v17 = 69LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
      (const char *)(unsigned int)v7,
      v18);
    wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(&v19);
    goto LABEL_14;
  }
  v8 = v19;
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, void **, GUID *))(*(_QWORD *)v19 + 48LL);
  v10 = (char *)(this + 5);
  v11 = this[5];
  this[5] = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  v18 = (_DWORD)this + 40;
  v7 = v9(v8, 0LL, this, &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8);
  v3 = v7;
  if ( v7 < 0 )
  {
    v17 = 72LL;
    goto LABEL_23;
  }
  wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(&v19);
  v12 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v10;
  v13 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, void **))v10;
  v14 = this[4];
  this[4] = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
  ActivationFactory = v13(v12, &GUID_e01eb649_787e_4560_b398_0de7a2065d8b, this + 4);
  v3 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v16 = 76LL;
    goto LABEL_20;
  }
  v3 = 0;
LABEL_14:
  wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>((__int64 *)&v20);
  return v3;
}
