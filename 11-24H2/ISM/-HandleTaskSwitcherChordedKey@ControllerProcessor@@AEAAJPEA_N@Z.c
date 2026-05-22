/*
 * XREFs of ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z @ 0x1800623F4
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18008A190 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@@Z @ 0x18017BA20 (-SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV-$vector@W4GameInputGamepadButtons@@V-$alloc.c)
 *     ?HandleChordedKey@ViewMenuChordedKeyHandler@@QEAAJW4GameInputGamepadButtons@@0PEA_N@Z @ 0x18017E330 (-HandleChordedKey@ViewMenuChordedKeyHandler@@QEAAJW4GameInputGamepadButtons@@0PEA_N@Z.c)
 *     ?ReleaseBufferIfNeeded@ViewMenuChordedKeyHandler@@QEAAXXZ @ 0x18017E7AC (-ReleaseBufferIfNeeded@ViewMenuChordedKeyHandler@@QEAAXXZ.c)
 */

__int64 __fastcall ControllerProcessor::HandleTaskSwitcherChordedKey(ControllerProcessor *this, bool *a2)
{
  __int64 v3; // rcx
  int v5; // eax
  unsigned int v6; // edi
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0;
  v3 = *((_QWORD *)this + 972);
  if ( !v3 || *((_DWORD *)this + 70) )
    return 0LL;
  v5 = ViewMenuChordedKeyHandler::HandleChordedKey(v3, *((unsigned int *)this + 45), *((unsigned int *)this + 61), a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 972) + 73LL) )
      ControllerProcessor::SendChordedKeyBuffer(this);
    ViewMenuChordedKeyHandler::ReleaseBufferIfNeeded(*((ViewMenuChordedKeyHandler **)this + 972));
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E0,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
    (const char *)(unsigned int)v5,
    v7);
  return v6;
}
