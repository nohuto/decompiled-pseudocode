/*
 * XREFs of CmKeyBodyNeedsVirtualImage @ 0x14096294C
 * Callers:
 *     NtRenameKey @ 0x1407D09C0 (NtRenameKey.c)
 *     NtDeleteKey @ 0x14086DAE0 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x14086EB40 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x140960DB0 (NtSetInformationKey.c)
 *     NtDeleteValueKey @ 0x1409622A0 (NtDeleteValueKey.c)
 * Callees:
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BBB480 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
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
  CmpLockRegistry(a1);
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
