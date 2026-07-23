/*
 * XREFs of MiMakeShadowPageTableRange @ 0x1407F6DA8
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x1407F6DA8 (MiMakeShadowPageTableRange.c)
 *     MmCreateShadowMapping @ 0x1407F6EC0 (MmCreateShadowMapping.c)
 * Callees:
 *     MiReadWriteAnyLevelShadowPte @ 0x1402EE8E8 (MiReadWriteAnyLevelShadowPte.c)
 *     MiInitializeShadowPageTable @ 0x1407F6B9C (MiInitializeShadowPageTable.c)
 *     MiMakeShadowPageTableRange @ 0x1407F6DA8 (MiMakeShadowPageTableRange.c)
 */

void __fastcall MiMakeShadowPageTableRange(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        signed int a4,
        __int64 a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  int v8; // r14d
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rcx

  v6 = a1;
  v7 = a2;
  v8 = a3;
  if ( a1 < *(_QWORD *)(a3 + 16LL * a4) )
    v6 = *(_QWORD *)(a3 + 16LL * a4);
  if ( a2 > *(_QWORD *)(a3 + 16LL * a4 + 8) )
    v7 = *(_QWORD *)(a3 + 16LL * a4 + 8);
  for ( ; v6 <= v7; v6 += 8LL )
  {
    if ( (MiReadWriteAnyLevelShadowPte(v6, (unsigned int)a4, 0, CLFS_LSN_NULL_EXT) & 1) == 0 )
    {
      if ( a4 )
      {
        v10 = (_QWORD *)(a5 + 72);
        v9 = *(_QWORD **)(a5 + 72);
        if ( v9[1] != a5 + 72 || (v11 = *v9, *(_QWORD **)(*v9 + 8LL) != v9) )
          __fastfail(3u);
        *v10 = v11;
        *(_QWORD *)(v11 + 8) = v10;
        --*(_QWORD *)(a5 + 88);
        ++*(_QWORD *)(a5 + 112);
      }
      else
      {
        v9 = 0LL;
      }
      MiInitializeShadowPageTable(v6, v9, a4);
    }
    if ( a4 > *(_DWORD *)(a5 + 132) )
      MiMakeShadowPageTableRange((__int64)(v6 << 25) >> 16, ((__int64)(v6 << 25) >> 16) + 4088, v8, a4 - 1, a5);
  }
}
