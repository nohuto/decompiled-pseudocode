/*
 * XREFs of MiInitializePfnsForValidMappings @ 0x140C53A8C
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiIssueFlushTbEntire @ 0x14039E5D8 (MiIssueFlushTbEntire.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MxCreatePfnsForPtes @ 0x140C549C0 (MxCreatePfnsForPtes.c)
 */

__int64 __fastcall MiInitializePfnsForValidMappings(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int8 v7; // al
  __int64 v9; // [rsp+20h] [rbp-79h] BYREF
  int v10; // [rsp+28h] [rbp-71h]
  int v11; // [rsp+2Ch] [rbp-6Dh]
  int v12[10]; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-41h]
  __int64 v14; // [rsp+60h] [rbp-39h]
  __int64 (__fastcall *v15)(_QWORD, _QWORD, _QWORD); // [rsp+D8h] [rbp+3Fh]
  __int64 *v16; // [rsp+E8h] [rbp+4Fh]
  int v17; // [rsp+100h] [rbp+67h]

  v11 = 0;
  memset_0(v12, 0, 0xC0uLL);
  v14 = -1LL;
  v16 = &v9;
  v12[0] = 140800;
  v13 = 0xFFFF800000000000uLL;
  v15 = MxCreatePfnsForPtes;
  v9 = a1;
  v10 = 1;
  MxCreatePfnsForPtes(v12, 0xFFFFF6FB7DBEDF68uLL, 3LL);
  MiWalkPageTables(v12);
  MiIssueFlushTbEntire(0LL, 0xFFFFFFFFLL, v2);
  v10 = 0;
  MiFlags |= 0x8000000000uLL;
  MiWalkPageTables(v12);
  v3 = 48 * ((MEMORY[0xFFFFF6FBC0000000] >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v7 = MiLockPageInline(v3, v4, v5, v6);
  v17 = *(_DWORD *)(v3 + 32);
  LOWORD(v17) = v17 + 1;
  *(_DWORD *)(v3 + 32) = v17;
  return MiUnlockPage(v3, v7);
}
