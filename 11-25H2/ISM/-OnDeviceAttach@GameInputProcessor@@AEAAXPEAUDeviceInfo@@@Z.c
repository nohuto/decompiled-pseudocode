/*
 * XREFs of ?OnDeviceAttach@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x18004FF20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsLegacyPnpDevice@GameInputProcessor@@CA_NPEAUDeviceInfo@@@Z @ 0x18005001C (-IsLegacyPnpDevice@GameInputProcessor@@CA_NPEAUDeviceInfo@@@Z.c)
 *     ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x1800503B0 (-LazyInitialize@GameInputProcessor@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B0D58 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@K@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAK$$QEAK@Z @ 0x1800CC610 (--$_Emplace_reallocate@K@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAK$$QEAK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GameInputProcessor::OnDeviceAttach(GameInputProcessor *this, struct DeviceInfo *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  _DWORD *v7; // rdx
  const char *v8; // r9
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = GameInputProcessor::LazyInitialize(this);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1AD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\"
                    "gameinputprocessor.cpp",
      (const char *)(unsigned int)v4,
      v9);
  if ( GameInputProcessor::IsLegacyPnpDevice(a2) && ((*((_DWORD *)a2 + 1) - 2) & 0xFFFFFFFD) == 0 )
  {
    v5 = *((_QWORD *)this + 4);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, (char *)a2 + 76, *(unsigned int *)a2);
      if ( *((_DWORD *)a2 + 1) == 4 && !*((_BYTE *)this + 192) )
      {
        v6 = NtMITSetKeyboardInputRoutingPolicy(1LL);
        if ( v6 < 0 )
          wil::details::in1diag3::_FailFast_NtStatus(
            retaddr,
            (void *)0x1BD,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\"
                          "lib\\gameinputprocessor.cpp",
            (const char *)(unsigned int)v6,
            v9);
        *((_BYTE *)this + 192) = 1;
      }
    }
    else
    {
      v7 = (_DWORD *)*((_QWORD *)this + 22);
      if ( v7 == *((_DWORD **)this + 23) )
      {
        try
        {
          std::vector<unsigned long>::_Emplace_reallocate<unsigned long>((char *)this + 168, v7, a2);
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0x1C7,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\"
                          "lib\\gameinputprocessor.cpp",
            v8);
        }
      }
      else
      {
        *v7 = *(_DWORD *)a2;
        *((_QWORD *)this + 22) += 4LL;
      }
    }
  }
}
