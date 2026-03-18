/*
 * XREFs of ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x14032AD98
 * Callers:
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x140208B88 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x14032B1E0 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x14032B65C (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x14032BA70 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x14000FB40 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400CB47C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1400DF03C (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 */

__int64 __fastcall bSpTransferShape(struct SPRITE *a1, struct SPRITE *a2)
{
  __int64 v2; // r14
  unsigned int v3; // esi
  struct _SURFOBJ *v6; // r8
  _OWORD *v7; // rbp
  struct Gre::Base::SESSION_GLOBALS *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 result; // rax
  struct _XLATEOBJ *v12; // [rsp+80h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v3 = 1;
  *(_BYTE *)(v2 + 128) = 1;
  *(_DWORD *)a1 |= *(_DWORD *)a2 & 0x10;
  v6 = (struct _SURFOBJ *)*((_QWORD *)a2 + 16);
  if ( v6 )
  {
    if ( *((_DWORD *)a2 + 56) == 2 && *((_BYTE *)a2 + 231) == 1 && !*((_BYTE *)a2 + 228) )
    {
      v7 = (_OWORD *)((char *)a2 + 96);
      bSpCreateShape(
        a1,
        (struct _POINTL *)a2 + 17,
        v6,
        0LL,
        (struct _RECTL *)a2 + 6,
        *((struct PALETTE **)a2 + 18),
        v6->iBitmapFormat,
        1u,
        0LL);
    }
    else
    {
      v8 = Gre::Base::Globals(a1);
      v9 = *((_QWORD *)a1 + 2);
      v10 = *((_QWORD *)a2 + 18);
      v12 = 0LL;
      v7 = (_OWORD *)((char *)a2 + 96);
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (Gre::Base *)&v12,
                           0LL,
                           0,
                           v10,
                           *(_QWORD *)(*(_QWORD *)(v9 + 32) + 104LL),
                           *((_QWORD *)v8 + 471),
                           *((_QWORD *)v8 + 471),
                           0,
                           0,
                           0,
                           0) )
        bSpCreateShape(
          a1,
          (struct _POINTL *)a2 + 17,
          *((struct _SURFOBJ **)a2 + 16),
          v12,
          (struct _RECTL *)a2 + 6,
          *(struct PALETTE **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) + 104LL),
          0,
          1u,
          0LL);
      EXLATEOBJ::vAltUnlock((Gre::Base **)&v12);
    }
    if ( *((_QWORD *)a1 + 16) )
    {
      *((_DWORD *)a1 + 1) = *((_DWORD *)a2 + 1);
      *((_OWORD *)a1 + 6) = *v7;
      *((_DWORD *)a1 + 51) = *((_DWORD *)a2 + 51);
      *((_DWORD *)a1 + 50) = *((_DWORD *)a2 + 50);
    }
    else
    {
      v3 = 0;
    }
  }
  result = v3;
  *((_QWORD *)a1 + 28) = *((_QWORD *)a2 + 28);
  *((_DWORD *)a1 + 58) = *((_DWORD *)a2 + 58);
  *(_BYTE *)(v2 + 128) = 0;
  return result;
}
