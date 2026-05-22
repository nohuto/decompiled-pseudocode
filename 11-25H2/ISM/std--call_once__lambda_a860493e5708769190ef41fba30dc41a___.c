/*
 * XREFs of std::call_once__lambda_a860493e5708769190ef41fba30dc41a___ @ 0x18007360C
 * Callers:
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x1800735D4 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x180081F8C (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800AD0BC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0MPCHeadUpdateListener@@QEAA@XZ @ 0x1800CED1C (--0MPCHeadUpdateListener@@QEAA@XZ.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x1800CF0A4 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::call_once__lambda_a860493e5708769190ef41fba30dc41a___(__int64 a1, __int64 a2)
{
  const char *v2; // r9
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v6; // [rsp+40h] [rbp+8h]
  WINBOOL v7; // [rsp+48h] [rbp+10h] BYREF
  int v8; // [rsp+4Ch] [rbp+14h]

  v8 = HIDWORD(a2);
  v7 = 0;
  if ( !__std_init_once_begin_initialize(&MPCHeadUpdateListener::s_singletonCreated, 0, &v7, 0LL) )
    abort();
  if ( v7 )
  {
    v3 = &MPCHeadUpdateListener::s_singletonCreated;
    v4 = 4LL;
    v6 = operator new(0xD0uLL);
    memset_0(v6, 0, 0xD0uLL);
    MPCHeadUpdateListener::s_instance = MPCHeadUpdateListener::MPCHeadUpdateListener((MPCHeadUpdateListener *)v6);
    if ( !MPCHeadUpdateListener::s_instance )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x21,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        v2);
    MPCHeadUpdateListener::Initialize(retaddr);
    LODWORD(v4) = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v3);
  }
}
