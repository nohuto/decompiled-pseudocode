/*
 * XREFs of NtUserDrawIconEx @ 0x140076F70
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x140077EA8 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     _DrawIconEx @ 0x140078A10 (_DrawIconEx.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1402711D0 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z @ 0x140271274 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z.c)
 */

__int64 __fastcall NtUserDrawIconEx(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        ULONG64 a11)
{
  __int64 v15; // rdx
  struct tagCURSOR *v16; // rax
  __int64 v17; // rbx
  struct tagCURSOR *VirtualizedDpiCursor; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  struct tagCURSOR *AnimatedCursorFrame; // rdi
  __int64 v23; // rcx
  _BYTE *v24; // rdx
  _BYTE v25[16]; // [rsp+70h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v25);
  LOBYTE(v15) = 3;
  v16 = (struct tagCURSOR *)HMValidateHandleWithDescriptor(a4, v15);
  v17 = 0LL;
  if ( v16 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v16);
    AnimatedCursorFrame = VirtualizedDpiCursor;
    if ( a10 )
    {
      v23 = *((unsigned int *)VirtualizedDpiCursor + 20);
      if ( (v23 & 8) == 0 || (AnimatedCursorFrame = GetAnimatedCursorFrame(VirtualizedDpiCursor, 0)) != 0LL )
      {
        if ( !PsGetCurrentProcessWow64Process(v23, v19, v20) )
          v17 = 3LL;
        if ( (v17 & a11) != 0 )
          ExRaiseDatatypeMisalignment();
        v24 = (_BYTE *)a11;
        if ( a11 >= MmUserProbeAddress )
          v24 = (_BYTE *)MmUserProbeAddress;
        *v24 = *v24;
        v24[39] = v24[39];
        *(_QWORD *)a11 = *((_QWORD *)AnimatedCursorFrame + 11);
        *(_QWORD *)(a11 + 8) = *((_QWORD *)AnimatedCursorFrame + 12);
        *(_QWORD *)(a11 + 32) = *((_QWORD *)AnimatedCursorFrame + 16);
        GetVirtualizedCursorSize(AnimatedCursorFrame, (volatile int *)(a11 + 24), (volatile int *)(a11 + 28));
        *(_DWORD *)(a11 + 16) = *((_DWORD *)AnimatedCursorFrame + 35);
        *(_DWORD *)(a11 + 20) = *((_DWORD *)AnimatedCursorFrame + 36);
        LODWORD(v17) = 1;
      }
    }
    else
    {
      LODWORD(v17) = DrawIconEx(a1, a2, a3, VirtualizedDpiCursor, a5, a6, a7, a8, a9);
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v25);
  UserSessionSwitchLeaveCrit();
  return (int)v17;
}
