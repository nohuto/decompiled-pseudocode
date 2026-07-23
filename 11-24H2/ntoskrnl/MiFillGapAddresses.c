/*
 * XREFs of MiFillGapAddresses @ 0x140C56E9C
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 *     MiInitializeKasan @ 0x140C51BB4 (MiInitializeKasan.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiFillGapAddresses(__int64 a1, __int64 a2)
{
  int v5[10]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v6; // [rsp+48h] [rbp-A0h]
  __int64 v7; // [rsp+50h] [rbp-98h]
  void *v8; // [rsp+C8h] [rbp-20h]
  PVOID *v9; // [rsp+D8h] [rbp-10h]

  memset_0(v5, 0, 0xC0uLL);
  v5[0] = 140800;
  v9 = qword_140E37480;
  v6 = a1;
  v8 = &MiFillGapPtes;
  v7 = a2;
  return MiWalkPageTables(v5);
}
