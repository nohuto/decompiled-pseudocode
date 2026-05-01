/*
 * XREFs of ?RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006836C
 * Callers:
 *     ?RmpGameModeDemoteActiveRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAE@Z @ 0x18006383C (-RmpGameModeDemoteActiveRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAE@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RmpGameModeUnapplyAndReleaseRecipientResources(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  void (__fastcall **v3)(struct _RM_GAME_MODE_CONTEXT *, struct _RM_GAME_MODE_RECIPIENT_PROCESS *); // rsi
  unsigned int i; // edi

  v3 = &funcs_180060D77;
  for ( i = 0; i < 5; ++i )
  {
    if ( ((1 << i) & *((_DWORD *)a2 + 41)) != 0 )
      (*(v3 - 1))(a1, a2);
    if ( ((1 << i) & *((_DWORD *)a2 + 40)) != 0 )
      (*v3)(a1, a2);
    v3 += 5;
  }
  *((_DWORD *)a2 + 40) = 0;
  *((_DWORD *)a2 + 41) = 0;
}
