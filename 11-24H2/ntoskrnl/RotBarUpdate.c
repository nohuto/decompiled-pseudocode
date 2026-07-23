/*
 * XREFs of RotBarUpdate @ 0x14058C8FC
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x14058C7A0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     InbvGetDisplayState @ 0x14058C42C (InbvGetDisplayState.c)
 *     FadePalette @ 0x14058C6BC (FadePalette.c)
 */

void __fastcall RotBarUpdate(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // ebx

  if ( PltRotBarStatus )
  {
    if ( PltRotBarStatus == 1 )
    {
      v7 = PaletteNum;
      FadePalette(PaletteNum);
      *((_DWORD *)PalettePtr + 1) = 0;
      PaletteNum = v7 + 1;
      if ( v7 + 1 >= 20 )
      {
        PltRotBarStatus = 2;
        PaletteNum = 1;
      }
      goto LABEL_25;
    }
    v2 = (unsigned int)(PltRotBarStatus - 2);
    if ( PltRotBarStatus != 2 )
    {
      if ( PltRotBarStatus == 3 )
        return;
      goto LABEL_25;
    }
    if ( !AnimBarPos )
    {
      v5 = 371LL;
      v4 = 376LL;
      goto LABEL_20;
    }
    if ( AnimBarPos == 1 )
    {
      v6 = 259LL;
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
            v2 = (unsigned int)AnimBarPos;
            if ( AnimBarPos <= 3 )
              goto LABEL_21;
            goto LABEL_12;
          }
          VidBufferToScreenBlt(&Square1, 371LL, 354LL, 6LL, 9, 4);
        }
        LODWORD(v2) = AnimBarPos;
LABEL_12:
        v3 = ((int)v2 + 16) % 18;
        v4 = (unsigned int)(8 * v3 + 248);
        v5 = (unsigned int)(8 * v3 + 243);
LABEL_20:
        VidSolidColorFill(v5, 354LL, v4, 362LL, 0);
LABEL_21:
        if ( ++AnimBarPos > 17 )
          AnimBarPos = 0;
LABEL_25:
        if ( !(unsigned int)InbvGetDisplayState(v2, a2) )
          VidBitBlt(&PaletteBmp, 0LL, 480LL);
        return;
      }
      VidBufferToScreenBlt(&Square2, 259LL, 354LL, 6LL, 9, 4);
      v6 = (unsigned int)(8 * AnimBarPos + 251);
    }
    VidBufferToScreenBlt(&Square3, v6, 354LL, 6LL, 9, 4);
    goto LABEL_21;
  }
}
