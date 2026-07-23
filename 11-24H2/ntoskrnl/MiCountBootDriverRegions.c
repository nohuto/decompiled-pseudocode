/*
 * XREFs of MiCountBootDriverRegions @ 0x140C56E14
 * Callers:
 *     MiInitializeDynamicVa @ 0x140C570AC (MiInitializeDynamicVa.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 MiCountBootDriverRegions()
{
  int v1[10]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v2; // [rsp+48h] [rbp-A0h]
  __int64 v3; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall *v4)(__int64, __int64 *, int); // [rsp+C8h] [rbp-20h]
  __int64 *v5; // [rsp+D8h] [rbp-10h]
  __int64 v6; // [rsp+F0h] [rbp+8h] BYREF

  memset_0(v1, 0, 0xC0uLL);
  v6 = 0LL;
  v5 = &v6;
  v2 = qword_140E38CF8;
  v1[0] = 140800;
  v3 = qword_140E38D00 - 1 + qword_140E38CF8;
  v4 = MiCountBootDriverRegionPtes;
  MiWalkPageTables(v1);
  return v6;
}
