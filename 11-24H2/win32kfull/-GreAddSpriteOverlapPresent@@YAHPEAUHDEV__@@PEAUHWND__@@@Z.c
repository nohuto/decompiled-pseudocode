/*
 * XREFs of ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x140329200
 * Callers:
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x140324BF8 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1400D5DB8 (-vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1400D5E3C (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpUpdateSpriteOverlapPresent@@YAXPEAUHDEV__@@H@Z @ 0x14016D230 (-vSpUpdateSpriteOverlapPresent@@YAXPEAUHDEV__@@H@Z.c)
 *     ?pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1401B8D0C (-pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?pSpCreatePresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x14032B430 (-pSpCreatePresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z @ 0x14032DC34 (-vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z.c)
 */

__int64 __fastcall GreAddSpriteOverlapPresent(HDEV a1, HWND a2)
{
  unsigned int v2; // esi
  struct _PRESENT *Present; // r14
  BOOL v6; // edi
  unsigned int v7; // r13d
  HDEV v8; // r12
  HWND v9; // rdx
  HDEV v10; // rcx
  unsigned int v11; // r13d
  struct _PRESENT *v12; // rax
  HDEV v13; // rcx
  void *v14; // rdx
  SPRITERANGELOCK *v15; // rbx
  HWND v16; // rdx
  HDEV v17; // rcx
  unsigned int v18; // r13d
  __int64 v19; // rbx
  SPRITERANGELOCK *v21; // [rsp+60h] [rbp+8h]
  SPRITERANGELOCK *v23; // [rsp+70h] [rbp+18h]

  v2 = 0;
  Present = 0LL;
  v6 = 0;
  if ( *((_DWORD *)a1 + 35) )
  {
    v7 = 0;
    v8 = a1 + 36;
    while ( v7 < *((_DWORD *)a1 + 35) )
    {
      v8 = a1 + 36;
      v21 = (SPRITERANGELOCK *)(*(_QWORD *)(*((_QWORD *)a1 + 18) + 8LL * v7) + 200LL);
      SPRITERANGELOCK::vLockExclusive(v21);
      Present = pSpGetPresent(*(_QWORD **)(*((_QWORD *)a1 + 18) + 8LL * v7), a2);
      if ( !Present )
      {
        Present = pSpCreatePresent(v10, v9);
        if ( !Present )
        {
          SPRITERANGELOCK::vUnlockExclusive(v21);
          v6 = 0;
          v11 = 0;
          if ( *((_DWORD *)a1 + 35) )
          {
            do
            {
              v23 = (SPRITERANGELOCK *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL * v11) + 200LL);
              SPRITERANGELOCK::vLockExclusive(v23);
              v12 = pSpGetPresent(*(_QWORD **)(*(_QWORD *)v8 + 8LL * v11), a2);
              Present = v12;
              if ( v12 )
              {
                vSpRemovePresent(v13, v12);
                Win32FreePool(v14);
              }
              SPRITERANGELOCK::vUnlockExclusive(v23);
              ++v11;
            }
            while ( v11 < *((_DWORD *)a1 + 35) );
            v6 = 0;
          }
          break;
        }
        v6 = 1;
      }
      SPRITERANGELOCK::vUnlockExclusive(v21);
      ++v7;
    }
    v15 = (SPRITERANGELOCK *)(a1 + 50);
  }
  else
  {
    v15 = (SPRITERANGELOCK *)(a1 + 50);
    SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 50));
    Present = pSpGetPresent(a1, a2);
    if ( !Present )
    {
      Present = pSpCreatePresent(v17, v16);
      v6 = Present != 0LL;
    }
    SPRITERANGELOCK::vUnlockExclusive(v15);
    v8 = a1 + 36;
  }
  if ( v6 )
  {
    if ( *((_DWORD *)a1 + 35) )
    {
      v18 = 0;
      do
      {
        v19 = *(_QWORD *)(*(_QWORD *)v8 + 8LL * v18);
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v19 + 200));
        vSpUpdateSpriteOverlapPresent(*(HDEV *)(*(_QWORD *)v8 + 8LL * v18), 0);
        SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)(v19 + 200));
        ++v18;
      }
      while ( v18 < *((_DWORD *)a1 + 35) );
    }
    else
    {
      SPRITERANGELOCK::vLockExclusive(v15);
      vSpUpdateSpriteOverlapPresent(a1, 0);
      SPRITERANGELOCK::vUnlockExclusive(v15);
    }
  }
  LOBYTE(v2) = Present != 0LL;
  return v2;
}
