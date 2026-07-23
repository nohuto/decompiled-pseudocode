/*
 * XREFs of MiProcessVpabAccessedInfo @ 0x140480648
 * Callers:
 *     MiAgeTrimListsTail @ 0x14020B9B0 (MiAgeTrimListsTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x140296100 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiAgeWorkingSetTail @ 0x140296210 (MiAgeWorkingSetTail.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall MiProcessVpabAccessedInfo(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbp
  __int64 v8; // rcx

  v2 = (unsigned int)*a2;
  v3 = a2 + 2;
  v6 = (unsigned __int64)&a2[2 * v2 + 2];
  while ( (unsigned __int64)v3 < v6 )
  {
    v7 = *v3 & 0xFFFFFFFFFFFFF000uLL;
    LOBYTE(v2) = MI_READ_PTE_LOCK_FREE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v2 & 1) != 0 )
    {
      LOBYTE(v2) = (MiGetWsleContents(v8, v7) & 0xF) - 8;
      if ( (unsigned __int8)v2 > 2u && ((v7 >> 9) & 0x7FFFFFFFF8LL) != 0x98000000000LL )
      {
        LODWORD(v2) = guard_dispatch_icall_no_overrides(a1, v3);
        if ( (_DWORD)v2 )
          break;
      }
    }
    ++v3;
  }
  *a2 = 0;
  return v2;
}
