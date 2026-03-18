/*
 * XREFs of MiInitializePfnsForValidMappings @ 0x140C406CC
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     MiIssueFlushTbEntire @ 0x14026F7B8 (MiIssueFlushTbEntire.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MxCreatePfnsForPtes @ 0x140C41600 (MxCreatePfnsForPtes.c)
 */

__int64 __fastcall MiInitializePfnsForValidMappings(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int8 v3; // al
  __int64 v5; // [rsp+20h] [rbp-79h] BYREF
  int v6; // [rsp+28h] [rbp-71h]
  int v7; // [rsp+2Ch] [rbp-6Dh]
  int v8[10]; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp-41h]
  __int64 v10; // [rsp+60h] [rbp-39h]
  __int64 (__fastcall *v11)(_QWORD, _QWORD, _QWORD); // [rsp+D8h] [rbp+3Fh]
  __int64 *v12; // [rsp+E8h] [rbp+4Fh]
  int v13; // [rsp+100h] [rbp+67h]

  v7 = 0;
  memset_0(v8, 0, 0xC0uLL);
  v10 = -1LL;
  v12 = &v5;
  v8[0] = 140800;
  v9 = 0xFFFF800000000000uLL;
  v11 = MxCreatePfnsForPtes;
  v5 = a1;
  v6 = 1;
  MxCreatePfnsForPtes(v8, 0xFFFFF6FB7DBEDF68uLL, 3LL);
  MiWalkPageTables(v8);
  MiIssueFlushTbEntire(0LL, -1);
  v6 = 0;
  MiFlags |= 0x8000000000uLL;
  MiWalkPageTables(v8);
  v2 = 48 * ((MEMORY[0xFFFFF6FBC0000000] >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v3 = MiLockPageInline(v2);
  v13 = *(_DWORD *)(v2 + 32);
  LOWORD(v13) = v13 + 1;
  *(_DWORD *)(v2 + 32) = v13;
  return MiUnlockPage(v2, v3);
}
