/*
 * XREFs of ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x140328EE0
 * Callers:
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x140324BF8 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140062DFC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bSpGetSpriteClipRgns@@YAHPEAUHDEV__@@AEAVRGNOBJAPI@@@Z @ 0x14032A990 (-bSpGetSpriteClipRgns@@YAHPEAUHDEV__@@AEAVRGNOBJAPI@@@Z.c)
 */

__int64 __fastcall GdiGetSpriteClipRgns(HDEV a1, HRGN a2)
{
  unsigned int v3; // ebx
  unsigned int SpriteClipRgns; // edi
  _QWORD v6[9]; // [rsp+20h] [rbp-48h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, a2, 0, 0);
  v3 = 0;
  SpriteClipRgns = 1;
  if ( v6[0] )
  {
    if ( *((_DWORD *)a1 + 35) )
    {
      do
        SpriteClipRgns &= bSpGetSpriteClipRgns(*(HDEV *)(*((_QWORD *)a1 + 18) + 8LL * v3++), (struct RGNOBJAPI *)v6);
      while ( v3 < *((_DWORD *)a1 + 35) );
    }
    else
    {
      SpriteClipRgns = bSpGetSpriteClipRgns(*((HDEV *)a1 + 10), (struct RGNOBJAPI *)v6);
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
  return SpriteClipRgns;
}
