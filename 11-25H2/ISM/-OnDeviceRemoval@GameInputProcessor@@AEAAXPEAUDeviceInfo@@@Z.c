/*
 * XREFs of ?OnDeviceRemoval@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x1800919F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsLegacyPnpDevice@GameInputProcessor@@CA_NPEAUDeviceInfo@@@Z @ 0x18005001C (-IsLegacyPnpDevice@GameInputProcessor@@CA_NPEAUDeviceInfo@@@Z.c)
 *     ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x1800503B0 (-LazyInitialize@GameInputProcessor@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

void __fastcall GameInputProcessor::OnDeviceRemoval(GameInputProcessor *this, struct DeviceInfo *a2)
{
  int v4; // eax
  _DWORD *i; // rcx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = GameInputProcessor::LazyInitialize(this);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D0,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\"
                    "gameinputprocessor.cpp",
      (const char *)(unsigned int)v4,
      v6);
  if ( GameInputProcessor::IsLegacyPnpDevice(a2) && ((*((_DWORD *)a2 + 1) - 2) & 0xFFFFFFFD) == 0 )
  {
    for ( i = (_DWORD *)*((_QWORD *)this + 21); i != *((_DWORD **)this + 22); ++i )
    {
      if ( *i == *(_DWORD *)a2 )
      {
        memmove_0(i, i + 1, *((_QWORD *)this + 22) - (_QWORD)(i + 1));
        *((_QWORD *)this + 22) -= 4LL;
        return;
      }
    }
  }
}
