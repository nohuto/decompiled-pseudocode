/*
 * XREFs of ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1402ACF68
 * Callers:
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402AD4EC (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     InternalSetProp @ 0x140031458 (InternalSetProp.c)
 *     ?GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x140064ACC (-GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 */

__int64 __fastcall SetFrostProp(struct tagWND *a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax

  v4 = 0;
  if ( !GetFrostProp(a1, a2) )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    return (unsigned int)InternalSetProp(
                           (__int64)a1,
                           *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19928) + 1378LL),
                           a2,
                           5u);
  }
  return v4;
}
