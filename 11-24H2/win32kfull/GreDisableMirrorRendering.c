/*
 * XREFs of GreDisableMirrorRendering @ 0x14032EB98
 * Callers:
 *     NtUserSetMirrorRendering @ 0x14029DFE0 (NtUserSetMirrorRendering.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400255B0 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF14 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1400DFA14 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x140213F7C (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x14032CAD0 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall GreDisableMirrorRendering(Gre::Base *a1, HWND a2)
{
  unsigned int v3; // esi
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  Gre::Base *v5; // rdi
  const struct _SPRITESTATE *v6; // rcx
  struct _METASPRITE *MetaSprite; // rax
  unsigned int v8; // r9d
  struct _METASPRITE *v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rax
  struct SPRITE *Sprite; // rbx
  Gre::Base *v14; // [rsp+50h] [rbp+8h] BYREF
  char v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v14 = a1;
  v3 = 0;
  v4 = Gre::Base::Globals(a1);
  SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v16, v4);
  if ( v14 )
  {
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v15, (struct PDEVOBJ *)&v14);
    v5 = v14;
    v6 = (Gre::Base *)((char *)v14 + 80);
    if ( *((_DWORD *)v14 + 35) )
    {
      MetaSprite = pSpGetMetaSprite(v6, a2, 0LL, 0);
      v9 = MetaSprite;
      if ( MetaSprite )
      {
        *((_DWORD *)MetaSprite + 4) |= 0x100u;
        v3 = v8 + 1;
        v10 = 0LL;
        if ( *((_DWORD *)v5 + 35) > v8 )
        {
          do
          {
            vSpCreateExMirror(*(HDEV *)(*((_QWORD *)v5 + 18) + 8 * v10));
            **((_DWORD **)v9 + v10 + 3) |= 0x100u;
            v11 = *((_QWORD *)v9 + v10 + 3);
            v10 = v3 + (unsigned int)v10;
            *(_DWORD *)(v11 + 224) |= 0x10000000u;
          }
          while ( (unsigned int)v10 < *((_DWORD *)v5 + 35) );
        }
      }
    }
    else
    {
      Sprite = pSpGetSprite(v6, a2, 0LL);
      if ( Sprite )
      {
        vSpCreateExMirror(*((HDEV *)v5 + 10));
        *(_DWORD *)Sprite |= 0x100u;
        v3 = 1;
        *((_DWORD *)Sprite + 56) |= 0x10000000u;
      }
    }
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v15);
  }
  if ( v16 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v16);
  return v3;
}
