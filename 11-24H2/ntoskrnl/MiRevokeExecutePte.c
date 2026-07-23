/*
 * XREFs of MiRevokeExecutePte @ 0x14044DEC0
 * Callers:
 *     <none>
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiGetPfnProtection @ 0x140306170 (MiGetPfnProtection.c)
 */

__int64 __fastcall MiRevokeExecutePte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v10; // rcx
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
      MiWriteValidPteNewProtection(a2, v7 | 0x8000000000000000uLL, v8);
      v10 = *(_QWORD *)(a1 + 184);
      if ( !v10 )
      {
        ProcessorFlushList = MiGetProcessorFlushList();
        MiInitializeTbFlushList((__int64)ProcessorFlushList, v5, *((_DWORD *)ProcessorFlushList + 3), 8, 32);
        *(_QWORD *)(a1 + 184) = v10;
      }
      MiInsertTbFlushEntry(v10, v4, 1LL, 0);
    }
  }
  return 0LL;
}
