/*
 * XREFs of MiInitializeTbFlushStamps @ 0x140327C9C
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x14023D300 (MmUnmapViewInSystemCache.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiDecommitAddToList @ 0x140382190 (MiDecommitAddToList.c)
 *     MiApplyLazyStampToAwePtes @ 0x14067595C (MiApplyLazyStampToAwePtes.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiInitializeTbFlushStamps(unsigned __int64 *a1)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  _InterlockedOr(v4, 0);
  if ( v2 && qword_140E2D940 )
  {
    if ( (v2 & 0x10) != 0 )
      LODWORD(v2) = v2 & 0xFFFFFFEF;
    else
      LODWORD(v2) = ~(_DWORD)qword_140E2D940 & v2;
  }
  result = (unsigned int)v2 | ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 32);
  if ( qword_140E2D940 )
  {
    if ( (qword_140E2D940 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2D940;
  }
  *a1 = result;
  return result;
}
