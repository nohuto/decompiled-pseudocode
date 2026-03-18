/*
 * XREFs of ?PopulatePanelId@CInputSpaceRegion@@QEAAXXZ @ 0x1400A79CC
 * Callers:
 *     ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1401F3E98 (-MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1401F4AC8 (-_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z.c)
 * Callees:
 *     RIMGetPanelId @ 0x1400A7B30 (RIMGetPanelId.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall CInputSpaceRegion::PopulatePanelId(CInputSpaceRegion *this)
{
  unsigned int v2; // ebx
  __int64 DxgkWin32kInterface; // rax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  Object = 0LL;
  v4 = 0LL;
  v2 = *((_DWORD *)this + 11);
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  if ( (*(int (__fastcall **)(char *, _QWORD, PVOID *, __int64 *))(DxgkWin32kInterface + 456))(
         (char *)this + 36,
         v2,
         &Object,
         &v4) >= 0 )
  {
    RIMGetPanelId(v4, (char *)this + 48);
    ObfDereferenceObject(Object);
  }
}
