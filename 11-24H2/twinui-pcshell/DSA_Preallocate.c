/*
 * XREFs of DSA_Preallocate @ 0x18068390C
 * Callers:
 *     DSA_InsertItem @ 0x180683880 (DSA_InsertItem.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x180694180 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 * Callees:
 *     ??$CCv6s_HeapReallocArray@X@@YAJPEAXK0_K1PEAPEAX@Z @ 0x1806832C8 (--$CCv6s_HeapReallocArray@X@@YAJPEAXK0_K1PEAPEAX@Z.c)
 */

__int64 __fastcall DSA_Preallocate(__int64 a1, int a2)
{
  unsigned int v2; // ebp
  signed int v4; // edi
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // r14d
  __int64 v8; // rbx
  HANDLE ProcessHeap; // rax
  unsigned int v10; // ecx
  __int64 v11; // rax
  unsigned int v12; // edi
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  if ( a2 < 0 )
    return 0LL;
  v4 = a2 + *(_DWORD *)a1;
  if ( v4 < 0 )
    return 0LL;
  v5 = *(_DWORD *)(a1 + 16);
  if ( v4 <= v5 )
    return 1LL;
  v6 = *(_DWORD *)(a1 + 24) + v5;
  if ( v4 <= v6 )
    v4 = v6;
  if ( v4 <= 0 )
    return 0LL;
  v7 = *(_DWORD *)(a1 + 20);
  if ( v4 >= 0x7FFFFFFF / v7 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 8);
  v14 = 0LL;
  ProcessHeap = GetProcessHeap();
  if ( (int)CCv6s_HeapReallocArray<void>((__int64)ProcessHeap, (__int64)&v14, v8, v7, v4, &v14) >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 24);
    v2 = 1;
    v11 = v14;
    *(_DWORD *)(a1 + 16) = v4;
    v12 = (unsigned int)v4 >> 2;
    *(_QWORD *)(a1 + 8) = v11;
    if ( v10 <= v12 )
      v10 = v12;
    *(_DWORD *)(a1 + 24) = v10;
  }
  return v2;
}
