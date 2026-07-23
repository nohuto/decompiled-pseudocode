/*
 * XREFs of CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x140A3BF80
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x14045AFD0 (CmpRecheckHiveVolumePolicy.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 * Callees:
 *     CmpVolumeContextLockShared @ 0x140A3BFC0 (CmpVolumeContextLockShared.c)
 *     CmpVolumeContextUnlockShared @ 0x140A3C018 (CmpVolumeContextUnlockShared.c)
 */

char __fastcall CmpVolumeContextMustHiveFilePagesBeKeptLocal(__int64 a1)
{
  int v2; // edx
  char v3; // bl

  CmpVolumeContextLockShared();
  v2 = *(_DWORD *)(a1 + 64);
  v3 = 0;
  if ( !v2 || v2 != 1 )
    v3 = 1;
  CmpVolumeContextUnlockShared(a1);
  return v3;
}
