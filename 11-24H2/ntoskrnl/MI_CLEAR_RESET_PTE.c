/*
 * XREFs of MI_CLEAR_RESET_PTE @ 0x1402FD264
 * Callers:
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSwizzleInvalidPte @ 0x1402FD620 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MI_CLEAR_RESET_PTE(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax

  v2 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  v3 = 0LL;
  if ( v2 )
  {
    if ( qword_140E2DCC0 )
    {
      if ( (v2 & 0x10) != 0 )
        v2 &= ~0x10uLL;
      else
        v2 &= ~qword_140E2DCC0;
    }
    v3 = v2;
  }
  result = MiSwizzleInvalidPte((unsigned int)v3, v3);
  *a1 = result;
  return result;
}
