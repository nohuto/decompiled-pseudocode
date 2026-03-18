/*
 * XREFs of ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x14019D728
 * Callers:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x140027730 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1400278E4 (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140029324 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x14032066C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITEREF::LockSpriteObj(DWMSPRITEREF *this, HSPRITE a2)
{
  __int64 v4; // rdx

  Gre::Base::Globals(this);
  if ( a2 )
  {
    LOBYTE(v4) = 15;
    *((_QWORD *)this + 4) = HmgLock(a2, v4);
  }
}
