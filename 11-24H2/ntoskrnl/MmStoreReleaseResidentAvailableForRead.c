/*
 * XREFs of MmStoreReleaseResidentAvailableForRead @ 0x140445054
 * Callers:
 *     SmPartitionCleanup @ 0x1407976A4 (SmPartitionCleanup.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MmStoreReleaseResidentAvailableForRead(ULONG **a1, __int64 a2)
{
  ULONG *v2; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v4; // r8
  struct _KPRCB *CurrentPrcb; // r10
  signed __int32 CachedResidentAvailable; // edx
  bool v7; // zf

  v2 = *a1;
  result = (unsigned __int64)&MiSystemPartition;
  v4 = a2 + 48;
  if ( *a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( CachedResidentAvailable != -1 )
    {
      do
      {
        if ( v4 + CachedResidentAvailable > 0x100 || v4 >= 0x80000 )
          break;
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                 v4 + CachedResidentAvailable,
                                 CachedResidentAvailable);
        v7 = CachedResidentAvailable == (_DWORD)result;
        CachedResidentAvailable = result;
        if ( v7 )
          return result;
      }
      while ( (_DWORD)result != -1 );
      if ( CachedResidentAvailable > 192 )
      {
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                 192,
                                 CachedResidentAvailable);
        if ( CachedResidentAvailable == (_DWORD)result )
        {
          result = (unsigned int)(CachedResidentAvailable - 192);
          v4 += (int)result;
        }
      }
    }
  }
  if ( v4 )
    _InterlockedAdd64((volatile signed __int64 *)v2 + 2344, v4);
  return result;
}
