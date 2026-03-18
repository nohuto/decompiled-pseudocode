/*
 * XREFs of MI_CLEAR_RESET_PTE @ 0x14045BA80
 * Callers:
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14021A0C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MI_CLEAR_RESET_PTE(__int64 *a1)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 result; // rax

  v2 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  v3 = 0;
  if ( v2 )
  {
    if ( qword_140E2D940 )
    {
      if ( (v2 & 0x10) != 0 )
        LODWORD(v2) = v2 & 0xFFFFFFEF;
      else
        LODWORD(v2) = ~(_DWORD)qword_140E2D940 & v2;
    }
    v3 = v2;
  }
  result = MiSwizzleInvalidPte(v3);
  *a1 = result;
  return result;
}
