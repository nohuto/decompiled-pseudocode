/*
 * XREFs of ?Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ @ 0x1401A17FC
 * Callers:
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400278B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x14032066C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@SAXPEAX@Z @ 0x140320AC0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@SAXPE.c)
 *     GreDeleteSpriteDelayDelete @ 0x140321830 (GreDeleteSpriteDelayDelete.c)
 * Callees:
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001FD60 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

struct DWMSPRITE *__fastcall DWMSPRITEREF::Detach(DWMSPRITEREF *this)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
    OBJECT::InterlockedDecrementExclusiveLockCount(*((OBJECT **)this + 4));
  *((_QWORD *)this + 4) = 0LL;
  return (struct DWMSPRITE *)v1;
}
