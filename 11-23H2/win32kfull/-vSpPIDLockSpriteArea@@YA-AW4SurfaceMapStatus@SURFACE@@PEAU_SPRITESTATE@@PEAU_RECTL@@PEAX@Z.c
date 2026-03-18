/*
 * XREFs of ?vSpPIDLockSpriteArea@@YA?AW4SurfaceMapStatus@SURFACE@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z @ 0x1C0280C10
 * Callers:
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C027F5D0 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C006AA7C (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C006ADEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?pSpFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C027EC48 (-pSpFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C027EE38 (-pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall vSpPIDLockSpriteArea(__int64 a1, struct _RECTL *a2, void *a3)
{
  SPRITERANGELOCK *v3; // rbp
  unsigned int v5; // edi
  struct SPRITE *i; // rcx
  struct SPRITE *v9; // rax
  struct SPRITE *v10; // rbx
  struct SPRITE *v11; // rax

  v3 = (SPRITERANGELOCK *)(a1 + 120);
  v5 = 0;
  SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(a1 + 120));
  for ( i = *(struct SPRITE **)(a1 + 8); ; i = (struct SPRITE *)*((_QWORD *)v10 + 3) )
  {
    v9 = pSpFindInZForPidLock(i, a2);
    v10 = v9;
    if ( !v9 )
      break;
    v5 = SURFACE::Map(*((_QWORD *)v9 + 16) - 24LL, a3);
    if ( v5 == 2 )
    {
      while ( 1 )
      {
        v11 = pSpReverseFindInZForPidLock(*((struct SPRITE **)v10 + 4), a2);
        v10 = v11;
        if ( !v11 )
          break;
        SURFACE::bUnMap((SURFACE *)(*((_QWORD *)v11 + 16) - 24LL), a3, 0LL);
      }
      SPRITERANGELOCK::vUnlock(v3);
      return v5;
    }
  }
  return v5;
}
