/*
 * XREFs of ?get_Status@ModuleCommandResult@Devices@Media@Windows@@UEAAJPEAW4SendCommandStatus@234@@Z @ 0x140080A30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Media::Devices::ModuleCommandResult::get_Status(
        Windows::Media::Devices::ModuleCommandResult *this,
        enum Windows::Media::Devices::SendCommandStatus *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *(_DWORD *)a2 = *((_DWORD *)this + 16);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
