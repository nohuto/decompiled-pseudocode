/*
 * XREFs of ?DisableTouchGestures@TouchGestureSettings@@AEAAXXZ @ 0x1801FCAF8
 * Callers:
 *     wistd::__function::__func__lambda_9780493e976c2d083521351cc76993ec__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1801FCAE0 (wistd--__function--__func__lambda_9780493e976c2d083521351cc76993ec__void___cdecl(unsigned_long_c.c)
 *     ?SetEnabledTouchGestures@TouchGestureSettings@@UEAAIW4TouchGestureType@@@Z @ 0x18058BF70 (-SetEnabledTouchGestures@TouchGestureSettings@@UEAAIW4TouchGestureType@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TouchGestureSettings::DisableTouchGestures(TouchGestureSettings *this)
{
  int v1; // eax
  __int64 v2; // rcx
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 28) + 1;
  *((_DWORD *)this + 28) = v1;
  v2 = *((_QWORD *)this + 12);
  if ( v2 && v1 == 1 )
  {
    try
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xA5,
        (unsigned int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturesettings.cpp",
        v3);
    }
  }
}
