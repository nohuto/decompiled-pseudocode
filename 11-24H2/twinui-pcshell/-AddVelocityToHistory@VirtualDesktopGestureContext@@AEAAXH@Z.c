/*
 * XREFs of ?AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z @ 0x1802C1500
 * Callers:
 *     ?UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z @ 0x18026BCE0 (-UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z.c)
 *     ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z @ 0x18055DE98 (-Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopGestureContext::AddVelocityToHistory(VirtualDesktopGestureContext *this, int a2)
{
  ULONGLONG TickCount64; // rax
  __int64 v5; // r10
  int *i; // r9
  unsigned __int64 v7; // rcx

  TickCount64 = GetTickCount64();
  v5 = *((_QWORD *)this + 21);
  for ( i = (int *)((char *)this + 164); TickCount64 > v5 + 10; v5 = *((_QWORD *)this + 21) )
  {
    v7 = (*i + 1LL) % 0xFuLL;
    *((_QWORD *)this + 21) = v5 + 10;
    *i = v7;
    *((_DWORD *)this + (int)v7 + 26) = a2;
  }
  *((_DWORD *)this + *i + 26) = a2;
}
