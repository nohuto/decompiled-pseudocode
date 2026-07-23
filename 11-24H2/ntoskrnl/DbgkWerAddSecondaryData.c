/*
 * XREFs of DbgkWerAddSecondaryData @ 0x140706340
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     DbgkpWerFreePool @ 0x140706910 (DbgkpWerFreePool.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall DbgkWerAddSecondaryData(__int64 a1, __int128 *a2, const void *a3, unsigned int a4)
{
  size_t v4; // rsi
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // rbp
  int v11; // ecx
  __int64 result; // rax
  __int64 Pool2; // rdi
  void *v14; // rax
  __int128 v15; // xmm0

  v4 = a4;
  if ( !a1 || !a3 || !a2 || !a4 )
  {
    DbgPrintEx(5u, 0, "DBGK: DbgkWerAddSecondaryData: Invalid parameter.\n\n");
    return 3221225485LL;
  }
  v8 = *(_DWORD *)(a1 + 88);
  if ( v8 != 1 )
  {
    if ( v8 != 2 )
      return 3221225659LL;
    v10 = *(_QWORD *)(a1 + 120);
    if ( v10 )
    {
      v9 = v10 + 32;
      goto LABEL_10;
    }
    return 3221225485LL;
  }
  v9 = a1 + 152;
LABEL_10:
  v11 = *(_DWORD *)(a1 + 80);
  if ( a4 > v11 - *(_DWORD *)(a1 + 84) )
  {
    DbgPrintEx(
      5u,
      0,
      "DBGK: DbgkWerAddSecondaryData: Secondary data exceeds buffer. Size 0x%x Maxsize 0x%x Datasize 0x%x.\n\n",
      a4,
      v11,
      *(_DWORD *)(a1 + 84));
    return 3221225626LL;
  }
  Pool2 = ExAllocatePool2(0x100uLL, 0x28uLL, 0x57676244u);
  if ( !Pool2 )
    return 3221225495LL;
  v14 = (void *)ExAllocatePool2(0x100uLL, (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0x57676244u);
  *(_QWORD *)(Pool2 + 16) = v14;
  if ( !v14 )
  {
    DbgkpWerFreePool(Pool2);
    return 3221225495LL;
  }
  memmove(v14, a3, v4);
  v15 = *a2;
  *(_DWORD *)(Pool2 + 24) = v4;
  *(_OWORD *)Pool2 = v15;
  *(_DWORD *)(a1 + 84) += v4;
  if ( *(_DWORD *)(a1 + 88) == 1 )
    ++*(_DWORD *)(a1 + 168);
  *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(v9 + 8);
  result = 0LL;
  *(_QWORD *)(v9 + 8) = Pool2;
  return result;
}
