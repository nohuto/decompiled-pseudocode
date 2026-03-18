/*
 * XREFs of NtUserGetCursorFrameInfo @ 0x1C0084D60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00456D0 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C0095F08 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 */

__int64 __fastcall NtUserGetCursorFrameInfo(__int64 a1, __int64 a2, _DWORD *a3, int *a4)
{
  __int64 v6; // rsi
  struct tagCURSOR *v8; // rax
  _DWORD *v9; // rdx
  __int64 v10; // rcx
  struct tagCURSOR *AnimatedCursorFrame; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  struct tagCURSOR *VirtualizedDpiCursor; // rdi
  _DWORD *v15; // rcx
  int v16; // eax

  v6 = (int)a2;
  EnterSharedCrit(a1, a2, a3);
  v8 = (struct tagCURSOR *)HMValidateHandle(a1, 3u);
  v13 = 0LL;
  if ( v8 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v8);
    v15 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v15 = (_DWORD *)MmUserProbeAddress;
    *v15 = *v15;
    v9 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v9 = (_DWORD *)MmUserProbeAddress;
    *v9 = *v9;
    if ( (*((_DWORD *)VirtualizedDpiCursor + 20) & 8) != 0 )
    {
      AnimatedCursorFrame = GetAnimatedCursorFrame(VirtualizedDpiCursor, v6);
      if ( !AnimatedCursorFrame )
        goto LABEL_10;
      v16 = *((_DWORD *)VirtualizedDpiCursor + 23);
      v10 = *(unsigned int *)(*((_QWORD *)VirtualizedDpiCursor + 14) + 4 * v6);
      VirtualizedDpiCursor = AnimatedCursorFrame;
    }
    else
    {
      v16 = 1;
      v10 = 0LL;
    }
    if ( VirtualizedDpiCursor )
    {
      v13 = *(_QWORD *)VirtualizedDpiCursor;
      *a3 = v10;
      *a4 = v16;
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v10, v9, AnimatedCursorFrame, v12);
  return v13;
}
