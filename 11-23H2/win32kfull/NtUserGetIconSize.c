/*
 * XREFs of NtUserGetIconSize @ 0x1C0044F40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C0045368 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00456D0 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C0095F08 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 */

__int64 __fastcall NtUserGetIconSize(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v5; // rsi
  int v6; // r15d
  int v8; // edi
  __int64 v9; // rdx
  struct tagCURSOR *v10; // rax
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagCURSOR *VirtualizedDpiCursor; // rax
  int v17; // [rsp+20h] [rbp-28h] BYREF
  int v18[9]; // [rsp+24h] [rbp-24h] BYREF

  v5 = a3;
  v6 = a2;
  v8 = 0;
  v17 = 0;
  v18[0] = 0;
  EnterSharedCrit(a1, a2, a3);
  LOBYTE(v9) = 3;
  v10 = (struct tagCURSOR *)HMValidateHandle(a1, v9);
  if ( v10 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v10);
    if ( (*((_DWORD *)VirtualizedDpiCursor + 20) & 8) == 0
      || (VirtualizedDpiCursor = GetAnimatedCursorFrame(VirtualizedDpiCursor, v6)) != 0LL )
    {
      GetVirtualizedCursorSize(VirtualizedDpiCursor, &v17, v18);
      v12 = MmUserProbeAddress;
      if ( (unsigned __int64)v5 >= MmUserProbeAddress )
        v5 = (_DWORD *)MmUserProbeAddress;
      *v5 = v17;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v18[0];
      v8 = 1;
      v18[1] = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v8;
}
