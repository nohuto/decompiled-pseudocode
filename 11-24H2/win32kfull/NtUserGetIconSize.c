/*
 * XREFs of NtUserGetIconSize @ 0x1400798F0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x140077EA8 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1402711D0 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z @ 0x140271274 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetIconSize(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // edi
  __int64 v9; // rdx
  struct tagCURSOR *v10; // rax
  struct tagCURSOR *VirtualizedDpiCursor; // rax
  int v13; // [rsp+20h] [rbp-28h] BYREF
  int v14[3]; // [rsp+24h] [rbp-24h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0;
  v13 = 0;
  v14[0] = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v15, 1LL);
  LOBYTE(v9) = 3;
  v10 = (struct tagCURSOR *)HMValidateHandleWithDescriptor(a1, v9);
  if ( v10 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v10);
    if ( (*((_DWORD *)VirtualizedDpiCursor + 20) & 8) == 0
      || (VirtualizedDpiCursor = GetAnimatedCursorFrame(VirtualizedDpiCursor, a2)) != 0LL )
    {
      GetVirtualizedCursorSize(VirtualizedDpiCursor, &v13, v14);
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_DWORD *)MmUserProbeAddress;
      *a3 = v13;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v14[0];
      v8 = 1;
      v14[1] = 1;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v8;
}
