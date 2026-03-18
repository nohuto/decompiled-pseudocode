/*
 * XREFs of MiInitializeTbFlushStamps @ 0x14044464C
 * Callers:
 *     MiDecommitAddToList @ 0x1402889A0 (MiDecommitAddToList.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MmUnmapViewInSystemCache @ 0x1402F1760 (MmUnmapViewInSystemCache.c)
 *     MiApplyLazyStampToAwePtes @ 0x14068117C (MiApplyLazyStampToAwePtes.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiInitializeTbFlushStamps(unsigned __int64 *a1)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  _InterlockedOr(v4, 0);
  if ( v2 && qword_140E2DB80 )
  {
    if ( (v2 & 0x10) != 0 )
      LODWORD(v2) = v2 & 0xFFFFFFEF;
    else
      LODWORD(v2) = ~(_DWORD)qword_140E2DB80 & v2;
  }
  result = (unsigned int)v2 | ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 32);
  if ( qword_140E2DB80 )
  {
    if ( (qword_140E2DB80 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2DB80;
  }
  *a1 = result;
  return result;
}
