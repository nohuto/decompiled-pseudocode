/*
 * XREFs of DesktopAllocInternal @ 0x1400B6320
 * Callers:
 *     DesktopAlloc @ 0x140072EC0 (DesktopAlloc.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1400B6250 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ?ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z @ 0x1400B62EC (-ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z.c)
 *     zzzSetDesktop @ 0x14023D170 (zzzSetDesktop.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

PVOID __fastcall DesktopAllocInternal(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  PVOID Heap; // rbx
  __int64 v7; // rdx
  bool v8; // di
  unsigned int *v9; // rcx
  bool v10; // si
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  struct tagTHREADINFO *v14; // rax

  Heap = RtlAllocateHeap(*(PVOID *)(a1 + 136), 0, a2);
  if ( !Heap )
  {
    v7 = *(_QWORD *)&WPP_GLOBAL_Control;
    v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v9 = &WPP_RECORDER_INITIALIZED;
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, *(_QWORD *)&WPP_GLOBAL_Control);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 69416),
        2,
        8,
        10,
        (__int64)&WPP_6e3958beb26f3f5b8556df48f81bef5f_Traceguids);
    }
    if ( a4 )
    {
      v14 = PtiCurrent((__int64)v9, v7);
      *(_QWORD *)(*((_QWORD *)v14 + 65) + 224LL) |= 0x2000uLL;
    }
  }
  return Heap;
}
