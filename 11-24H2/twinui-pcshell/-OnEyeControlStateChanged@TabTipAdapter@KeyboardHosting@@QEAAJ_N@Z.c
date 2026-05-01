/*
 * XREFs of ?OnEyeControlStateChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x1802BFB20
 * Callers:
 *     ?UpdateEyeControlState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180111B48 (-UpdateEyeControlState@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     wistd::__function::__func__lambda_bc424067a4c17d1ca50457d76a1f10e4__void___cdecl(unsigned_long_const_&)_::operator() @ 0x18046F550 (wistd--__function--__func__lambda_bc424067a4c17d1ca50457d76a1f10e4__void___cdecl(unsigned_long_c.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18008162C (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEyeControlStateChanged(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 16) + 184LL))(
         *((_QWORD *)this + 16),
         a2,
         &v7);
  if ( v3 < 0 )
  {
    v4 = 3109LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  if ( v7 == 3 )
  {
    v3 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate((RTL_SRWLOCK *)this);
    if ( v3 < 0 )
    {
      v4 = 3113LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
