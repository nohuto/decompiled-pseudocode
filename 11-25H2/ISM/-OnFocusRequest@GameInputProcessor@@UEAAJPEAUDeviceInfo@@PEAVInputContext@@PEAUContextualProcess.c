/*
 * XREFs of ?OnFocusRequest@GameInputProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180050040
 * Callers:
 *     <none>
 * Callees:
 *     ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x1800503B0 (-LazyInitialize@GameInputProcessor@@AEAAJXZ.c)
 *     ?GetTargetProcessId@GameInputProcessor@@CAKPEAVInputContext@@@Z @ 0x180050530 (-GetTargetProcessId@GameInputProcessor@@CAKPEAVInputContext@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GameInputProcessor::OnFocusRequest(
        GameInputProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v8; // eax
  __int64 v10; // r14
  unsigned __int8 (__fastcall *v11)(__int64, _QWORD); // rbx
  unsigned int TargetProcessId; // eax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( gbIsDWMNoRawGameController )
  {
    *(_DWORD *)a4 = 0;
  }
  else
  {
    v8 = GameInputProcessor::LazyInitialize(this);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD3,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib"
                      "\\gameinputprocessor.cpp",
        (const char *)(unsigned int)v8,
        v13);
    if ( (*((_BYTE *)a2 + 4) & 0x40) != 0 )
    {
      *(_DWORD *)a4 = 2;
    }
    else if ( (*((_BYTE *)a2 + 4) & 2) != 0
           && (v10 = *((_QWORD *)this + 4)) != 0
           && (v11 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 72LL),
               TargetProcessId = GameInputProcessor::GetTargetProcessId(a3),
               v11(v10, TargetProcessId))
           || *((_DWORD *)a2 + 1) == 4 && *((_DWORD *)a2 + 2) >= 0x60Cu && *((_WORD *)a2 + 38) )
    {
      *(_DWORD *)a4 = 3;
    }
    else
    {
      *(_DWORD *)a4 = 0;
    }
  }
  return 0LL;
}
