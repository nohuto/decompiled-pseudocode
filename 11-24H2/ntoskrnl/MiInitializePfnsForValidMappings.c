/*
 * XREFs of MiInitializePfnsForValidMappings @ 0x140C518FC
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiIssueFlushTbEntire @ 0x1403AFDC8 (MiIssueFlushTbEntire.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MxCreatePfnsForPtes @ 0x140C52830 (MxCreatePfnsForPtes.c)
 */

__int64 __fastcall MiInitializePfnsForValidMappings(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  unsigned __int8 v4; // al
  __int64 v6; // [rsp+20h] [rbp-79h] BYREF
  int v7; // [rsp+28h] [rbp-71h]
  int v8; // [rsp+2Ch] [rbp-6Dh]
  _DWORD v9[10]; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp-41h]
  __int64 v11; // [rsp+60h] [rbp-39h]
  __int64 (__fastcall *v12)(_QWORD, _QWORD, _QWORD); // [rsp+D8h] [rbp+3Fh]
  __int64 *v13; // [rsp+E8h] [rbp+4Fh]
  int v14; // [rsp+100h] [rbp+67h]

  v8 = 0;
  memset_0(v9, 0, 0xC0uLL);
  v11 = -1LL;
  v13 = &v6;
  v9[0] = 140800;
  v10 = 0xFFFF800000000000uLL;
  v12 = MxCreatePfnsForPtes;
  v6 = a1;
  v7 = 1;
  MxCreatePfnsForPtes(v9, 0xFFFFF6FB7DBEDF68uLL, 3LL);
  MiWalkPageTables((__int64)v9);
  MiIssueFlushTbEntire(0LL, 0xFFFFFFFFLL, v2);
  v7 = 0;
  MiFlags |= 0x8000000000uLL;
  MiWalkPageTables((__int64)v9);
  v3 = 48 * ((MEMORY[0xFFFFF6FBC0000000] >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v4 = MiLockPageInline(v3);
  v14 = *(_DWORD *)(v3 + 32);
  LOWORD(v14) = v14 + 1;
  *(_DWORD *)(v3 + 32) = v14;
  return MiUnlockPage(v3, v4);
}
