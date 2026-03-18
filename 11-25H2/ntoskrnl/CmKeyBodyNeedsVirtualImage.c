/*
 * XREFs of CmKeyBodyNeedsVirtualImage @ 0x14086392C
 * Callers:
 *     NtRenameKey @ 0x1407C0DC0 (NtRenameKey.c)
 *     NtSetInformationKey @ 0x140862E30 (NtSetInformationKey.c)
 *     NtSetValueKey @ 0x140869680 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x14086CE00 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x140A0A070 (NtDeleteKey.c)
 * Callees:
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BA94E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 */

bool __fastcall CmKeyBodyNeedsVirtualImage(__int64 a1)
{
  bool v1; // di
  bool v3; // bl
  __int64 v4; // rbp
  ULONG_PTR v5; // rcx
  bool v6; // r8
  __int64 v7; // rcx

  v1 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  CmpLockRegistry();
  CmpLockKcbShared(*(_QWORD *)(a1 + 8));
  if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    v3 = (*(_BYTE *)(v4 + 4112) & 0x10) != 0;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  if ( !*(_WORD *)(v5 + 66) )
    v6 = v3;
  if ( (*(_BYTE *)(a1 + 48) & 0x10) == 0 )
    v1 = v6;
  CmpUnlockKcb(v5);
  CmpUnlockRegistry(v7);
  return v1;
}
