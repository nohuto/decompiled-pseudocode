/*
 * XREFs of ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x14016BBF8
 * Callers:
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x140023218 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x14016AD54 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x14016AE00 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14016B470 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x14032066C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall hspGetNeighborSprite(Gre::Base *a1, char a2, char a3)
{
  __int64 v6; // rdi
  struct Gre::Base::SESSION_GLOBALS *v7; // r15
  _QWORD *v8; // rbx
  Gre::Base *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax

  v6 = 0LL;
  v7 = Gre::Base::Globals(a1);
  v8 = 0LL;
  Gre::Base::Globals(v9);
  if ( a1 )
  {
    LOBYTE(v10) = 15;
    v8 = (_QWORD *)HmgShareLockCheck(a1, v10);
  }
  if ( v8 )
  {
    if ( a2 )
      v11 = (_QWORD *)v8[3];
    else
      v11 = (_QWORD *)v8[4];
    if ( !a3 || (v13 = *((_QWORD *)v7 + 17) + 80LL, v11 == (_QWORD *)v13) )
    {
LABEL_7:
      if ( v11 == (_QWORD *)(*((_QWORD *)v7 + 17) + 80LL) )
      {
LABEL_9:
        DEC_SHARE_REF_CNT(v8);
        return v6;
      }
    }
    else
    {
      while ( 1 )
      {
        v14 = (__int64)(v11 + 3);
        if ( !v11 )
          v14 = 48LL;
        if ( v8[6] == *(_QWORD *)v14 )
          break;
        if ( a2 )
          v11 = (_QWORD *)*v11;
        else
          v11 = (_QWORD *)v11[1];
        if ( v11 == (_QWORD *)v13 )
          goto LABEL_7;
      }
    }
    v6 = *(_QWORD *)((unsigned __int64)(v11 - 3) & -(__int64)(v11 != 0LL));
    goto LABEL_9;
  }
  return v6;
}
