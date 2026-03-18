/*
 * XREFs of ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C01569C0
 * Callers:
 *     xxxSetClassIcon @ 0x1C021FDA0 (xxxSetClassIcon.c)
 * Callees:
 *     SendDwmIconChange @ 0x1C003F904 (SendDwmIconChange.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B4B3C (IsToplevelWindowDesktopComposed.c)
 *     xxxRedrawTitle @ 0x1C00E0970 (xxxRedrawTitle.c)
 *     DestroyWindowSmIcon @ 0x1C013C988 (DestroyWindowSmIcon.c)
 */

__int64 __fastcall xxxSetClassIconEnum(struct tagWND *a1, __int64 a2)
{
  if ( *((_QWORD *)a1 + 17) == a2 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 0x20) != 0 )
      DestroyWindowSmIcon((__int64 *)a1);
    if ( !*(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL) )
      xxxRedrawTitle((unsigned __int64 *)a1, 0xCu);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange((__int64 *)a1);
  }
  return 1LL;
}
