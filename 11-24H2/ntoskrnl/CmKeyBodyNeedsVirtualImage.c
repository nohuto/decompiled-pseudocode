/*
 * XREFs of CmKeyBodyNeedsVirtualImage @ 0x14097A13C
 * Callers:
 *     NtRenameKey @ 0x1407D04D0 (NtRenameKey.c)
 *     NtDeleteKey @ 0x1408697B0 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x14086A810 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x1409785A0 (NtSetInformationKey.c)
 *     NtDeleteValueKey @ 0x140979A90 (NtDeleteValueKey.c)
 * Callees:
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BB9480 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockKcbShared @ 0x140BB9A1C (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
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
