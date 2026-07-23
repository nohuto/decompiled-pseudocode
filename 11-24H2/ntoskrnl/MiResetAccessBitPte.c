/*
 * XREFs of MiResetAccessBitPte @ 0x140294320
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiResetAccessBitPteWorker @ 0x1402941D8 (MiResetAccessBitPteWorker.c)
 *     MiWalkVaCheckCommon @ 0x140295E20 (MiWalkVaCheckCommon.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x140303A64 (MiAcquirePrcbAgeTrimLists.c)
 */

__int64 __fastcall MiResetAccessBitPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // rbx
  _DWORD *v11; // rcx
  unsigned __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 184);
  v5 = *(_QWORD *)(a1 + 32);
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v12 = v7;
  if ( (v7 & 0x20) != 0 )
  {
    v8 = 48 * ((v7 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( (unsigned int)MiWalkVaCheckCommon(v5, a2, 48 * (unsigned int)(v7 >> 12), a3 == 0, (__int64)&v12) )
    {
      v9 = (__int64)(a2 << 25) >> 16;
      if ( !*(_QWORD *)(v3 + 24) )
      {
LABEL_4:
        MiResetAccessBitPteWorker(v5, a2, (__int64)(a2 << 25) >> 16, v8, v3, 0);
        return 0LL;
      }
      if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 )
      {
        if ( (MiGetPagePrivilege(48 * ((v12 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, 0LL) & 0x41) == 0 )
          goto LABEL_4;
      }
      else if ( v9 > 0x7FFFFFFEFFFFLL )
      {
        goto LABEL_4;
      }
      if ( *(_QWORD *)(v3 + 24) == 1LL )
        MiAcquirePrcbAgeTrimLists(v5, v3 + 8);
      v11 = *(_DWORD **)(v3 + 24);
      *(_QWORD *)&v11[2 * (*v11)++ + 2] = v9 & 0xFFFFFFFFFFFFF000uLL;
    }
  }
  return 0LL;
}
