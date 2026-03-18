/*
 * XREFs of MiUpdateWsleAge @ 0x140248264
 * Callers:
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetVaAgeList @ 0x140249BE0 (MiSetVaAgeList.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 */

unsigned __int8 __fastcall MiUpdateWsleAge(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int8 result; // al
  __int64 v8; // r9

  v6 = (__int64)(a2 << 25) >> 16;
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
    result = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 56) & 0xF;
  else
    result = (*(_QWORD *)(48
                        * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                        - 0x220000000000LL) >> 42) & 7;
  if ( a3 != result && result < 8u && (a3 == 7 || result == 7) )
  {
    MI_READ_PTE_LOCK_FREE(a2);
    if ( !a3 )
      MiWriteValidPteNewProtection(a2);
    LOBYTE(v8) = a3;
    return MiSetVaAgeList(a1, v6, 1LL, v8);
  }
  return result;
}
