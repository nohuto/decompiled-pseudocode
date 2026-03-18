/*
 * XREFs of NtGdiDdNotifyFullscreenSpriteUpdate @ 0x140325A20
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x1403212B0 (-SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 */

__int64 __fastcall NtGdiDdNotifyFullscreenSpriteUpdate(HDC a1, HSPRITE a2)
{
  struct XDCOBJ *v3; // rcx
  unsigned int v4; // ebx
  _QWORD v6[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v6, a1);
  if ( v6[0] )
    v4 = SpDdNotifyFullscreenSpriteUpdate(v3, a2);
  else
    v4 = -1073741811;
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v6);
  return v4;
}
