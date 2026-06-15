/*
 * XREFs of ?PumpPaused@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x140044FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::PumpPaused(CSystemAudioDeviceSharedBase *this)
{
  unsigned int v2; // ebx
  int v4; // eax
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = *((_OWORD *)this - 3);
  EtwEventActivityIdControl(4LL, &v5);
  if ( *((_DWORD *)this + 14) == 1
    || (v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 19) + 112LL))((char *)this - 152), v2 = v4, v4 >= 0) )
  {
    v2 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F6,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
      (const char *)(unsigned int)v4);
  }
  EtwEventActivityIdControl(4LL, &v5);
  return v2;
}
