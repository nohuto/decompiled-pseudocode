/*
 * XREFs of MiYieldPageTableWalk @ 0x1402E8120
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiReleaseWalkLocks @ 0x1402BBAD0 (MiReleaseWalkLocks.c)
 *     MiAgeTrimListsTail @ 0x1402E8290 (MiAgeTrimListsTail.c)
 *     MiDeleteVaTail @ 0x1404701A0 (MiDeleteVaTail.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiYieldPageTableWalk(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v4)(); // r8
  int v5; // esi
  __int64 v7; // rdi
  BOOL v8; // r9d
  unsigned int v9; // edi
  unsigned int v10; // eax
  int v12; // ecx
  unsigned __int64 v13; // rdx

  v4 = *(__int64 (__fastcall **)())(a1 + 176);
  v5 = a2;
  *(_DWORD *)(a1 + 4) |= 0x20u;
  if ( !v4 )
    goto LABEL_7;
  if ( v4 == MiAgeWorkingSetTail )
  {
    v7 = *(_QWORD *)(a1 + 184);
    v8 = (*(_DWORD *)v7 & 3) != 0 || *(__int64 (__fastcall **)())(a1 + 168) == MiSimpleAgePte;
    MiAgeTrimListsTail(a1, v7 + 56, 0, v8, (__int64)MiAgeWorkingSetVpabCallback);
    if ( (*(_DWORD *)(a1 + 4) & 0x20) != 0 )
      *(_BYTE *)(v7 + 6) = 1;
    goto LABEL_7;
  }
  if ( v4 == MiUpdateOldWorkingSetPagesTail )
  {
    MiAgeTrimListsTail(a1, *(_DWORD *)(a1 + 184) + 24, 0, 0, (__int64)MiUpdateOldPagesVpabCallback);
LABEL_7:
    v9 = 0;
    goto LABEL_8;
  }
  if ( (char *)v4 == (char *)MiDeleteVaTail )
    v9 = MiDeleteVaTail(a1, a2, v4, a4);
  else
    v9 = guard_dispatch_icall_no_overrides(a1, a2);
LABEL_8:
  v10 = *(_DWORD *)(a1 + 4) & 0xFFFFFFDF;
  *(_DWORD *)(a1 + 4) = v10;
  if ( (v10 & 1) != 0 || (int)v9 >= 4 || !v5 )
    return v9;
  v12 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    v13 = *(_QWORD *)(a1 + 56);
    if ( v13 )
    {
      *(_DWORD *)(a1 + 4) = v10 | 2;
      if ( (v12 & 0x1000) == 0 || v13 != 0xFFFFF6FB7DBEDF68uLL )
        MiUnlockPageTable(*(_QWORD *)(a1 + 32), v13);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    return v9;
  }
  MiReleaseWalkLocks(a1);
  return v9;
}
