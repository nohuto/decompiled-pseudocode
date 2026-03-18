/*
 * XREFs of _GetMenuState @ 0x1401B02A8
 * Callers:
 *     xxxMNLoop @ 0x14009B5E0 (xxxMNLoop.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1401AF128 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1401AF278 (xxxHandleNCMouseGuys.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x140252880 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     MNLookUpItem @ 0x140070DE8 (MNLookUpItem.c)
 */

__int64 __fastcall GetMenuState(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned int v4; // r8d
  __int64 v5; // rax

  v2 = (_QWORD *)MNLookUpItem(a1, a2, 0, 0LL);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v4 = *(_DWORD *)*v2 | *(_DWORD *)(*v2 + 4LL);
  v5 = v2[2];
  if ( v5 )
    return (*(_DWORD *)(*(_QWORD *)(v5 + 40) + 44LL) << 8) + (v4 & 0xEF | 0x10);
  return v4;
}
