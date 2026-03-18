/*
 * XREFs of MI_CLEAR_RESET_PTE @ 0x140229FF4
 * Callers:
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSwizzleInvalidPte @ 0x14022A3B0 (MiSwizzleInvalidPte.c)
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
    if ( qword_140E2DB80 )
    {
      if ( (v2 & 0x10) != 0 )
        LODWORD(v2) = v2 & 0xFFFFFFEF;
      else
        LODWORD(v2) = ~(_DWORD)qword_140E2DB80 & v2;
    }
    v3 = v2;
  }
  result = MiSwizzleInvalidPte(v3);
  *a1 = result;
  return result;
}
