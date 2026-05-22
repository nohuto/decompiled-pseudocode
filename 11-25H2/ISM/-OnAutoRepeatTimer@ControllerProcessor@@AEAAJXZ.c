/*
 * XREFs of ?OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x18006EE38
 * Callers:
 *     ?OnAutoRepeatTimerStatic@ControllerProcessor@@SAJPEAX@Z @ 0x18006EDE0 (-OnAutoRepeatTimerStatic@ControllerProcessor@@SAJPEAX@Z.c)
 * Callees:
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x18006EEE4 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ControllerProcessor::OnAutoRepeatTimer(ControllerProcessor *this)
{
  __int64 **v1; // rdi
  __int64 *i; // rbx
  unsigned __int16 v4; // dx
  int v5; // eax
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 **)*((_QWORD *)this + 12);
  for ( i = *v1; i != (__int64 *)v1; i = (__int64 *)*i )
  {
    v4 = *((_WORD *)i + 8);
    if ( v4 != 7 )
    {
      v5 = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, v4, 1);
      if ( v5 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xB5B,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v5,
          v8);
    }
    *((_BYTE *)i + 18) = 0;
  }
  if ( !*((_QWORD *)this + 13) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 96LL))(*((_QWORD *)this + 36));
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB66,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v7,
        v8);
  }
  return 0LL;
}
