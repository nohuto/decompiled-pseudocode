/*
 * XREFs of ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18001B2D4
 * Callers:
 *     ?RmpGameModeFindRecipientProcessByHandle@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18008C6CC (-RmpGameModeFindRecipientProcessByHandle@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MO.c)
 * Callees:
 *     ?RmpGameModeCompareRecipientProcessNode@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18001B384 (-RmpGameModeCompareRecipientProcessNode@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _RM_GAME_MODE_RECIPIENT_PROCESS *__fastcall RmpGameModeFindRecipientProcessById(
        struct _RM_GAME_MODE_CONTEXT *a1,
        unsigned int a2)
{
  char v2; // si
  unsigned __int64 v3; // rcx
  int v4; // esi
  char *v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  int v8; // eax
  unsigned __int64 v9; // rax

  v2 = *((_BYTE *)a1 + 16);
  v3 = (unsigned __int64)a1 + 8;
  v4 = v2 & 1;
  v5 = 0LL;
  v6 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( !v6 )
      return (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v5;
    v6 ^= v3;
  }
  if ( v6 )
  {
    v7 = a2;
    do
    {
      v8 = RmpGameModeCompareRecipientProcessNode((void *)v7, (struct _RTL_BALANCED_NODE *)v6);
      if ( v8 < 0 )
      {
        v9 = *(_QWORD *)v6;
      }
      else
      {
        if ( v8 <= 0 )
          break;
        v9 = *(_QWORD *)(v6 + 8);
      }
      if ( v4 && v9 )
        v6 ^= v9;
      else
        v6 = v9;
    }
    while ( v6 );
    if ( v6 )
    {
      v5 = (char *)(v6 - 8);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 - 8)) <= 1 )
        __fastfail(0xEu);
    }
  }
  return (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v5;
}
