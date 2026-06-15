/*
 * XREFs of ?UnregisterAPONotifications@CAPOWrapperSrv@@AEAAJXZ @ 0x140007BBC
 * Callers:
 *     ??1CAPOWrapperSrv@@QEAA@XZ @ 0x140006BA0 (--1CAPOWrapperSrv@@QEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperSrv::UnregisterAPONotifications(CAPOWrapperSrv *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_DWORD *)this + 34) )
    return 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 48LL))(
         *((_QWORD *)this + 11),
         *((_QWORD *)this + 16));
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8D,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
    (const char *)(unsigned int)v2,
    v4);
  return v3;
}
