/*
 * XREFs of ?SetInProcessSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x1403C15B8
 * Callers:
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1403C11E0 (DxgkSetContextInProcessSchedulingPriority.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGCONTEXT::SetInProcessSchedulingPriority(DXGCONTEXT *this, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r8

  v2 = *((_QWORD *)this + 2);
  if ( (*((_DWORD *)this + 98) & 0x10) == 0 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, DXGCONTEXT *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 736LL)
                                                                               + 8LL)
                                                                   + 352LL))(
             *((_QWORD *)this + 32),
             (unsigned int)a2,
             this);
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 736LL) + 8LL);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v4 + 360))(*((_QWORD *)this + 35), a2, v4);
}
