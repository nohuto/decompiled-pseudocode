/*
 * XREFs of ?DeviceRemovalCallback@GameControllerRawInputProvider@@CAJPEAX@Z @ 0x1800CB420
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@UDeviceListEntry@GameControllerRawInputProvider@@U?$default_delete@UDeviceListEntry@GameControllerRawInputProvider@@@std@@@std@@QEAA@XZ @ 0x1800CB174 (--1-$unique_ptr@UDeviceListEntry@GameControllerRawInputProvider@@U-$default_delete@UDeviceListEn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GameControllerRawInputProvider::DeviceRemovalCallback(char *a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  if ( GameControllerRawInputProvider::s_instance
    && (v1 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)GameControllerRawInputProvider::s_instance + 6)
                                                       + 56LL))(
               *((_QWORD *)GameControllerRawInputProvider::s_instance + 6),
               a1 + 16),
        v2 = v1,
        v1 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
      (const char *)(unsigned int)v1);
  }
  else
  {
    v2 = 0;
  }
  std::unique_ptr<GameControllerRawInputProvider::DeviceListEntry>::~unique_ptr<GameControllerRawInputProvider::DeviceListEntry>(&v5);
  return v2;
}
