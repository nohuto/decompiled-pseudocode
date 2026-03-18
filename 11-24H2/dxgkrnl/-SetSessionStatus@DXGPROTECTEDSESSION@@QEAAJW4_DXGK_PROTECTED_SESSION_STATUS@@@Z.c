/*
 * XREFs of ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1400780D0
 * Callers:
 *     ?Reset@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1401F0464 (-Reset@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1401F0660 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     DxgkSetProtectedSessionStatusCB @ 0x1401F2770 (DxgkSetProtectedSessionStatusCB.c)
 * Callees:
 *     ?QueueSignal@DXGPROTECTEDSESSION@@QEAAJXZ @ 0x1401F0348 (-QueueSignal@DXGPROTECTEDSESSION@@QEAAJXZ.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::SetSessionStatus(
        DXGPROTECTEDSESSION *this,
        enum _DXGK_PROTECTED_SESSION_STATUS a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = 0LL;
  if ( *((_DWORD *)this + 37) != a2 )
  {
    v3 = *((_DWORD *)this + 6) == 1;
    *((_DWORD *)this + 37) = a2;
    if ( v3 )
      return DXGPROTECTEDSESSION::QueueSignal(this);
  }
  return result;
}
