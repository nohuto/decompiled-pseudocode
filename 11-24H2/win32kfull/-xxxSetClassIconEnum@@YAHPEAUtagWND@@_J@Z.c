/*
 * XREFs of ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1401DCE70
 * Callers:
 *     xxxSetClassIcon @ 0x14021E780 (xxxSetClassIcon.c)
 * Callees:
 *     xxxRedrawTitle @ 0x1400677A8 (xxxRedrawTitle.c)
 *     IsToplevelWindowDesktopComposed @ 0x140073A04 (IsToplevelWindowDesktopComposed.c)
 *     DestroyWindowSmIcon @ 0x14008DCFC (DestroyWindowSmIcon.c)
 *     SendDwmIconChange @ 0x140091358 (SendDwmIconChange.c)
 */

__int64 __fastcall xxxSetClassIconEnum(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *((_QWORD *)a1 + 17) == a2 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 0x20) != 0 )
      DestroyWindowSmIcon(a1, a2, a3, a4);
    if ( !*(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL) )
      xxxRedrawTitle(a1, 12LL);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange(a1);
  }
  return 1LL;
}
