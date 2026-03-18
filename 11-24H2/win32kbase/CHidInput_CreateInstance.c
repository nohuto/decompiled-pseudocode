/*
 * XREFs of CHidInput_CreateInstance @ 0x14014E430
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x14014DF74 (--0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z.c)
 */

__int64 __fastcall CHidInput_CreateInstance(__int64 a1)
{
  __int64 v1; // rbx
  __int64 UserSessionState; // rsi
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx

  v1 = 0LL;
  UserSessionState = W32GetUserSessionState(a1);
  *(_QWORD *)(UserSessionState + 16840) = 0LL;
  v3 = Win32AllocPoolZInitImpl(256LL, 0x598uLL, 0x43486970u);
  v4 = v3;
  if ( v3 )
  {
    CBaseInput::CBaseInput(v3, 60, 2u, 2);
    *(_DWORD *)(v4 + 1328) = 0;
    *(_QWORD *)v4 = &CHidInput::`vftable';
    *(_QWORD *)(UserSessionState + 16840) = v4;
    return *(_QWORD *)(W32GetUserSessionState(v5) + 16840);
  }
  return v1;
}
