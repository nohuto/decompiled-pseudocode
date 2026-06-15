/*
 * XREFs of ?AERTLockMemory@@YAJPEAX_K@Z @ 0x180167AA4
 * Callers:
 *     ?GetMemory@?$CCrossProcessClientMemory@UControlData_V1@@@@UEAAJPEAIPEAPEAX@Z @ 0x180165A30 (-GetMemory@-$CCrossProcessClientMemory@UControlData_V1@@@@UEAAJPEAIPEAPEAX@Z.c)
 *     ?GetMemory@CCrossProcessKSMemory@@UEAAJPEAIPEAPEAX@Z @ 0x180165D60 (-GetMemory@CCrossProcessKSMemory@@UEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x180167B50 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 */

signed int __fastcall AERTLockMemory(void *lpAddress, SIZE_T a2)
{
  signed int result; // eax

  if ( VirtualLock(lpAddress, a2) )
    return 0;
  result = IncreaseProcessWorkingSet(a2);
  if ( result < 0 )
    return result;
  if ( VirtualLock(lpAddress, a2) )
    return 0;
  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
