/*
 * XREFs of ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180056648
 * Callers:
 *     ?SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ @ 0x1800558A0 (-SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ @ 0x18017BD44 (-SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ.c)
 *     ?TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x18017C47C (-TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV-$vector@U-$pair@G_N@std@@V-$allocato.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x18017C92C (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ControllerProcessor::UpdateAutoRepeatTimer(ControllerProcessor *this)
{
  int v2; // eax
  int v4; // eax
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 36) + 24LL))(*((_QWORD *)this + 36), &v8);
  if ( v2 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xB12,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v2,
      v6);
  if ( *((_QWORD *)this + 13) )
  {
    if ( !v8 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 36) + 80LL))(
             *((_QWORD *)this + 36),
             6640000LL,
             830000LL);
      if ( v4 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xB1A,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v4,
          v6);
    }
  }
  else if ( v8 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 96LL))(*((_QWORD *)this + 36));
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB1F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v5,
        v6);
  }
  return 0LL;
}
