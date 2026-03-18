/*
 * XREFs of ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F3508
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F3794 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F4878 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     InternalSetProp @ 0x1C003C0AC (InternalSetProp.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 */

__int64 __fastcall SetGhostProp(struct tagWND *a1, HWND a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 Prop; // rax

  v5 = 0;
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL, a4);
  if ( !Prop || Prop == -1 && a2 != (HWND)-1LL )
    return (unsigned int)InternalSetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), (__int64)a2, 5u);
  return v5;
}
