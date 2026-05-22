/*
 * XREFs of ?OnChordedKeyDelayTimeElapsed@ViewMenuChordedKeyHandler@@AEAAJXZ @ 0x18017CA70
 * Callers:
 *     _lambda_d6b818e87fb176752f65e0086b51e68b_::_lambda_invoker_cdecl_ @ 0x18017BF70 (_lambda_d6b818e87fb176752f65e0086b51e68b_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z @ 0x18017C948 (-LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     ?ReleaseBufferIfNeeded@ViewMenuChordedKeyHandler@@QEAAXXZ @ 0x18017CBDC (-ReleaseBufferIfNeeded@ViewMenuChordedKeyHandler@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ViewMenuChordedKeyHandler::OnChordedKeyDelayTimeElapsed(
        ViewMenuChordedKeyHandler *this,
        __int64 a2,
        __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, char *, __int64); // rax
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 (__fastcall *v11)(__int64, char *, __int64); // rax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 4) == 4 )
  {
    v4 = (__int64 (__fastcall *)(__int64, char *, __int64))*((_QWORD *)this + 4);
    *((_BYTE *)this + 74) = 1;
    *((_DWORD *)this + 4) = 6;
    if ( v4 )
    {
      v5 = *((_QWORD *)this + 5);
      if ( v5 )
      {
        LOBYTE(a3) = 1;
        v6 = v4(v5, (char *)this + 80, a3);
        if ( v6 < 0 )
        {
          v7 = 199LL;
LABEL_6:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v7,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
            (const char *)(unsigned int)v6);
          return (unsigned int)v6;
        }
      }
    }
  }
  else if ( *((_DWORD *)this + 4) == 5 )
  {
    *((_BYTE *)this + 74) = 0;
    *((_BYTE *)this + 72) = 1;
    ViewMenuChordedKeyHandler::ReleaseBufferIfNeeded(this);
    v11 = *(__int64 (__fastcall **)(__int64, char *, __int64))(v9 + 32);
    *(_DWORD *)(v9 + 16) = 6;
    if ( v11 )
    {
      v12 = *(_QWORD *)(v9 + 40);
      if ( v12 )
      {
        LOBYTE(v10) = *((_BYTE *)this + 74);
        v6 = v11(v12, (char *)this + 80, v10);
        if ( v6 < 0 )
        {
          v7 = 220LL;
          goto LABEL_6;
        }
      }
    }
  }
  ControllerProcessorTelemetry::LogGamepadTaskSwitcherInvoked(*((_DWORD *)this + 4));
  result = 0LL;
  *((_BYTE *)this + 74) = 0;
  *((_BYTE *)this + 72) = 0;
  return result;
}
