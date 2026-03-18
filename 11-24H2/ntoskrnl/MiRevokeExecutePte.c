/*
 * XREFs of MiRevokeExecutePte @ 0x140458A10
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPfnProtection @ 0x140212E10 (MiGetPfnProtection.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 */

__int64 __fastcall MiRevokeExecutePte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 *ProcessorFlushList; // rax

  v4 = (__int64)(a2 << 25) >> 16;
  if ( v4 <= 0x7FFFFFFEFFFFLL )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = MI_READ_PTE_LOCK_FREE(a2);
    v7 = v6;
    if ( v6 >= 0
      && (MiGetPfnProtection(
            0xFFFFFFFFFFLL,
            v4,
            48 * (((unsigned __int64)v6 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) & 2) == 0 )
    {
      MiWriteValidPteNewProtection(a2, v7 | 0x8000000000000000uLL);
      v9 = *(_QWORD *)(a1 + 184);
      if ( !v9 )
      {
        ProcessorFlushList = MiGetProcessorFlushList();
        MiInitializeTbFlushList((__int64)ProcessorFlushList, v5, *((_DWORD *)ProcessorFlushList + 3), 8, 32);
        *(_QWORD *)(a1 + 184) = v9;
      }
      MiInsertTbFlushEntry(v9, v4, 1LL, 0);
    }
  }
  return 0LL;
}
