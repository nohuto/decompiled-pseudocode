/*
 * XREFs of ?RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z @ 0x1800652CC
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001AC70 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x1800607B0 (-RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180072CD4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 */

void __fastcall RmpGameModeNotifyExtensionRecipientsPresent(struct _RM_GAME_MODE_CONTEXT *a1, char a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx

  if ( *((_BYTE *)a1 + 140) != a2 )
  {
    v4 = 0;
    *((_DWORD *)a1 + 20) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 72);
    if ( (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent(v5) )
    {
      LOBYTE(v4) = a2 != 0;
      NotifyGameModeExtensionRecipientsPresent(v4);
    }
    *((_BYTE *)a1 + 140) = a2;
    RmpGameModeAcquireLock(a1);
  }
}
