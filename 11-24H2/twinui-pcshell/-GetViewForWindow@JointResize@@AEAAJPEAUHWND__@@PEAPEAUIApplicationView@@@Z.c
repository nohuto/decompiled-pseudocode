/*
 * XREFs of ?GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1800ED5E0
 * Callers:
 *     ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x1800ED3C0 (-OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x18053A5F0 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall JointResize::GetViewForWindow(JointResize *this, HWND a2, struct IApplicationView **a3)
{
  unsigned int v4; // ebx
  int v7; // eax

  v4 = 0;
  *a3 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 48LL))(*((_QWORD *)this + 17)) >= 0 )
    return 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, HWND, struct IApplicationView **))(**((_QWORD **)this + 18) + 32LL))(
         *((_QWORD *)this + 18),
         a2,
         a3);
  if ( v7 < 0 )
    return (unsigned int)v7;
  return v4;
}
