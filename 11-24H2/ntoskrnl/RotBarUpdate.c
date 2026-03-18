/*
 * XREFs of RotBarUpdate @ 0x14058F8DC
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x14058F780 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     InbvGetDisplayState @ 0x14058F40C (InbvGetDisplayState.c)
 *     FadePalette @ 0x14058F69C (FadePalette.c)
 */

void __fastcall RotBarUpdate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // ebx

  if ( PltRotBarStatus )
  {
    if ( PltRotBarStatus == 1 )
    {
      v9 = PaletteNum;
      FadePalette(PaletteNum);
      *((_DWORD *)PalettePtr + 1) = 0;
      PaletteNum = v9 + 1;
      if ( v9 + 1 >= 20 )
      {
        PltRotBarStatus = 2;
        PaletteNum = 1;
      }
      goto LABEL_25;
    }
    v4 = (unsigned int)(PltRotBarStatus - 2);
    if ( PltRotBarStatus != 2 )
    {
      if ( PltRotBarStatus == 3 )
        return;
      goto LABEL_25;
    }
    if ( !AnimBarPos )
    {
      v7 = 371LL;
      v6 = 376LL;
      goto LABEL_20;
    }
    if ( AnimBarPos == 1 )
    {
      v8 = 259LL;
    }
    else
    {
      if ( AnimBarPos != 2 )
      {
        if ( AnimBarPos == 16 )
        {
          VidBufferToScreenBlt(&Square1, 363LL, 354LL, 6LL, 9, 4);
          VidBufferToScreenBlt(&Square2, (unsigned int)(8 * AnimBarPos + 243), 354LL, 6LL, 9, 4);
        }
        else
        {
          if ( AnimBarPos != 17 )
          {
            VidBufferToScreenBlt(&Square1, (unsigned int)(8 * AnimBarPos + 235), 354LL, 6LL, 9, 4);
            VidBufferToScreenBlt(&Square2, (unsigned int)(8 * AnimBarPos + 243), 354LL, 6LL, 9, 4);
            VidBufferToScreenBlt(&Square3, (unsigned int)(8 * AnimBarPos + 251), 354LL, 6LL, 9, 4);
            v4 = (unsigned int)AnimBarPos;
            if ( AnimBarPos <= 3 )
              goto LABEL_21;
            goto LABEL_12;
          }
          VidBufferToScreenBlt(&Square1, 371LL, 354LL, 6LL, 9, 4);
        }
        LODWORD(v4) = AnimBarPos;
LABEL_12:
        v5 = ((int)v4 + 16) % 18;
        v6 = (unsigned int)(8 * v5 + 248);
        v7 = (unsigned int)(8 * v5 + 243);
LABEL_20:
        VidSolidColorFill(v7, 354LL, v6, 362LL, 0);
LABEL_21:
        if ( ++AnimBarPos > 17 )
          AnimBarPos = 0;
LABEL_25:
        if ( !(unsigned int)InbvGetDisplayState(v4, a2, a3, a4) )
          VidBitBlt(&PaletteBmp, 0LL, 480LL);
        return;
      }
      VidBufferToScreenBlt(&Square2, 259LL, 354LL, 6LL, 9, 4);
      v8 = (unsigned int)(8 * AnimBarPos + 251);
    }
    VidBufferToScreenBlt(&Square3, v8, 354LL, 6LL, 9, 4);
    goto LABEL_21;
  }
}
