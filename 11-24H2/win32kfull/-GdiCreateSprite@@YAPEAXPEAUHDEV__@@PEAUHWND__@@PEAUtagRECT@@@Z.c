/*
 * XREFs of ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x14016C574
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1401325C8 (GreTransferDwmStateToSpriteState.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x14032066C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1400DDAE4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x14016C6E4 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 */

struct SPRITE *__fastcall GdiCreateSprite(Gre::Base *a1, HWND a2, struct _RECTL *a3)
{
  struct SPRITE *v6; // rbx
  Gre::Base *v7; // rbp
  int v8; // ecx
  struct SPRITE *v10; // rdi
  unsigned int i; // esi
  __int64 v12; // rcx
  struct _POINTL *v13; // r9
  HDEV v14; // rcx
  struct SPRITE *Sprite; // rax
  int v16; // eax
  _BYTE v17[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  Gre::Base *v19; // [rsp+78h] [rbp+20h] BYREF

  v19 = a1;
  v6 = 0LL;
  Gre::Base::Globals(a1);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v17, (struct PDEVOBJ *)&v19);
  v7 = v19;
  v8 = *((_DWORD *)v19 + 35);
  if ( v8 )
  {
    v10 = (struct SPRITE *)PALLOCNOZ(8 * v8 + 32, 1836086087LL);
    if ( v10 )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= *((_DWORD *)v7 + 35) )
        {
          *(_QWORD *)v10 = a2;
          v16 = *((_DWORD *)v7 + 35);
          *((_DWORD *)v10 + 4) = 0;
          v6 = v10;
          *((_DWORD *)v10 + 5) = v16;
          *((_QWORD *)v10 + 1) = *((_QWORD *)v7 + 19);
          *((_QWORD *)v7 + 19) = v10;
          goto LABEL_3;
        }
        v12 = *((_QWORD *)v7 + 18);
        v13 = 0LL;
        v18 = 0LL;
        v14 = *(HDEV *)(v12 + 8LL * i);
        if ( a3 )
        {
          v13 = (struct _POINTL *)&v18;
          LODWORD(v18) = a3->left - *((_DWORD *)v14 + 644);
          HIDWORD(v18) = a3->top - *((_DWORD *)v14 + 645);
        }
        Sprite = pSpCreateSprite(v14, a3, a2, v13);
        if ( !Sprite )
          break;
        *((_QWORD *)v10 + i + 3) = Sprite;
        *((_QWORD *)Sprite + 1) = v10;
      }
      while ( i )
        vSpDeleteSprite(*((struct SPRITE **)v10 + --i + 3));
      Win32FreePool(v10);
    }
  }
  else
  {
    v6 = pSpCreateSprite((HDEV)a1, a3, a2, 0LL);
  }
LABEL_3:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v17);
  return v6;
}
