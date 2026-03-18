/*
 * XREFs of MiRevokeExecutePte @ 0x14037CEC0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiGetPfnProtection @ 0x14037CFCC (MiGetPfnProtection.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 */

__int64 __fastcall MiRevokeExecutePte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 ProcessorFlushList; // rax

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
      v12 = *(_QWORD *)(a1 + 184);
      if ( !v12 )
      {
        ProcessorFlushList = MiGetProcessorFlushList(0LL, v9, v10, v11);
        MiInitializeTbFlushList(ProcessorFlushList, v5, *(_DWORD *)(ProcessorFlushList + 12), 8, 32);
        *(_QWORD *)(a1 + 184) = v12;
      }
      MiInsertTbFlushEntry(v12, v4, 1LL, 0);
    }
  }
  return 0LL;
}
