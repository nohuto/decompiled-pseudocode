/*
 * XREFs of ?vSpDisableSprites@@YAXPEAUHDEV__@@@Z @ 0x1400DD890
 * Callers:
 *     vSpDisableSpritesWrap @ 0x140224300 (vSpDisableSpritesWrap.c)
 * Callees:
 *     ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x1400DDA6C (-vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1400DDAE4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1400DDCD0 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall vSpDisableSprites(_QWORD *a1)
{
  HDEV v1; // rdi
  __int64 v2; // rcx
  Gre::Base *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // [rsp+40h] [rbp+20h] BYREF
  __int64 v8; // [rsp+48h] [rbp+28h] BYREF
  __int64 v9; // [rsp+50h] [rbp+30h] BYREF
  __int64 v10; // [rsp+58h] [rbp+38h] BYREF

  v1 = (HDEV)(a1 + 10);
  v2 = a1[151];
  *((_QWORD *)v1 + 141) = 0LL;
  *((_QWORD *)v1 + 140) = 0LL;
  *((_DWORD *)v1 + 273) = 0;
  if ( v2 )
  {
    do
    {
      v6 = *(_QWORD *)(v2 + 24);
      vSpDeleteSprite((struct SPRITE *)v2);
      v2 = v6;
    }
    while ( v6 );
  }
  vSpDeleteExMirror(*(HDEV *)v1);
  if ( !*((_DWORD *)Gre::Base::Globals(v3) + 758) )
    vSpDeleteSurface(*((struct _SURFOBJ **)v1 + 129));
  v7 = *((_QWORD *)v1 + 88);
  v8 = *((_QWORD *)v1 + 89);
  v9 = *((_QWORD *)v1 + 109);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
  GreDeleteObject(*((_QWORD *)v1 + 133));
  v4 = (void *)*((_QWORD *)v1 + 18);
  if ( v4 )
    Win32FreePool(v4);
  v5 = (void *)*((_QWORD *)v1 + 8);
  if ( v5 )
    EngFreeMem(v5);
  if ( *((_QWORD *)v1 + 130) )
  {
    v10 = *((_QWORD *)v1 + 130);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
  }
  if ( *((_QWORD *)v1 + 131) )
  {
    v10 = *((_QWORD *)v1 + 131);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
  }
  if ( *((_QWORD *)v1 + 132) )
  {
    v10 = *((_QWORD *)v1 + 132);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
  }
  if ( *((_QWORD *)v1 + 15) )
    GreDeleteSemaphore();
  if ( *((_QWORD *)v1 + 17) )
    GreDeleteSemaphore();
  memset_0(v1, 0, 0x548uLL);
}
