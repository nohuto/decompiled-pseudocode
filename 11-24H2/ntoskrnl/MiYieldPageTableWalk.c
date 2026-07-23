/*
 * XREFs of MiYieldPageTableWalk @ 0x14020B840
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiAgeTrimListsTail @ 0x14020B9B0 (MiAgeTrimListsTail.c)
 *     MiReleaseWalkLocks @ 0x14020BAF0 (MiReleaseWalkLocks.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiDeleteVaTail @ 0x140462720 (MiDeleteVaTail.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiYieldPageTableWalk(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v4)(); // r8
  int v5; // esi
  __int64 v7; // rdi
  BOOL v8; // r9d
  unsigned int v9; // edi
  unsigned int v10; // eax
  int v12; // ecx
  __int64 v13; // rdx

  v4 = (__int64 (__fastcall *)())*((_QWORD *)a1 + 22);
  v5 = a2;
  a1[1] |= 0x20u;
  if ( !v4 )
    goto LABEL_7;
  if ( v4 == MiAgeWorkingSetTail )
  {
    v7 = *((_QWORD *)a1 + 23);
    v8 = (*(_DWORD *)v7 & 3) != 0 || *((__int64 (__fastcall **)())a1 + 21) == MiSimpleAgePte;
    MiAgeTrimListsTail((_DWORD)a1, v7 + 56, 0, v8, (__int64)MiAgeWorkingSetVpabCallback);
    if ( (a1[1] & 0x20) != 0 )
      *(_BYTE *)(v7 + 6) = 1;
    goto LABEL_7;
  }
  if ( v4 == MiUpdateOldWorkingSetPagesTail )
  {
    MiAgeTrimListsTail((_DWORD)a1, a1[46] + 24, 0, 0, (__int64)MiUpdateOldPagesVpabCallback);
LABEL_7:
    v9 = 0;
    goto LABEL_8;
  }
  if ( (char *)v4 == (char *)MiDeleteVaTail )
    v9 = MiDeleteVaTail(a1, a2, v4, a4);
  else
    v9 = guard_dispatch_icall_no_overrides(a1, a2, v4, a4);
LABEL_8:
  v10 = a1[1] & 0xFFFFFFDF;
  a1[1] = v10;
  if ( (v10 & 1) != 0 || (int)v9 >= 4 || !v5 )
    return v9;
  v12 = *a1;
  if ( (*a1 & 2) == 0 )
  {
    v13 = *((_QWORD *)a1 + 7);
    if ( v13 )
    {
      a1[1] = v10 | 2;
      if ( (v12 & 0x1000) == 0 || v13 != 0xFFFFF6FB7DBEDF68uLL )
        MiUnlockPageTableInternal(*((_QWORD *)a1 + 4), v13);
      *((_QWORD *)a1 + 7) = 0LL;
    }
    return v9;
  }
  MiReleaseWalkLocks(a1, a2, v4, a4);
  return v9;
}
