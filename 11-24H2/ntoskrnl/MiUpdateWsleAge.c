/*
 * XREFs of MiUpdateWsleAge @ 0x14022F78C
 * Callers:
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetVaAgeList @ 0x140230FB0 (MiSetVaAgeList.c)
 */

unsigned __int8 __fastcall MiUpdateWsleAge(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int8 result; // al
  __int64 v8; // rax
  __int64 v9; // r9

  v6 = (__int64)(a2 << 25) >> 16;
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
    result = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 56) & 0xF;
  else
    result = (*(_QWORD *)(48
                        * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                        - 0x220000000000LL) >> 42) & 7;
  if ( a3 != result && result < 8u && (a3 == 7 || result == 7) )
  {
    v8 = MI_READ_PTE_LOCK_FREE(a2);
    if ( !a3 )
      MiWriteValidPteNewProtection(a2, v8 | 0x20);
    LOBYTE(v9) = a3;
    return MiSetVaAgeList(a1, v6, 1LL, v9);
  }
  return result;
}
