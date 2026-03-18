/*
 * XREFs of MiPrefetchControlArea @ 0x1409CABB4
 * Callers:
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiSetPagesModified @ 0x140493EB0 (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x140945124 (MiValidateSectionCreate.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1409CB8C0 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     MiGetInPageAutoBoostLock @ 0x1402D9B38 (MiGetInPageAutoBoostLock.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiPfCompletePrefetchIos @ 0x14037991C (MiPfCompletePrefetchIos.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x14037AA08 (MiDereferenceInPageAutoBoostLock.c)
 *     MiReleaseReadListResources @ 0x1409C985C (MiReleaseReadListResources.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 *     MiPfExecuteReadList @ 0x1409CA528 (MiPfExecuteReadList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPrefetchControlArea(
        __int64 a1,
        signed __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // rdi
  volatile signed __int64 *v11; // rax
  volatile signed __int64 *v12; // rsi
  __int64 *v13; // rax
  ULONG_PTR v14; // rbp
  int List; // ebx
  int v17; // eax
  PVOID v18; // rcx
  PVOID P[2]; // [rsp+50h] [rbp-38h] BYREF

  P[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = MiGetInPageAutoBoostLock();
  v12 = v11;
  if ( v11 )
  {
    v13 = KeAbPreAcquire((__int64)v11, 0LL);
    v14 = (ULONG_PTR)v13;
    if ( v13 )
      *((_BYTE *)v13 + 10) = 1;
    List = MiPfPrepareSequentialReadList(0LL, a1, a2, 0LL, a3, a4, a6, (__int64)v12, (__int64 *)P);
    if ( List >= 0 && P[0] )
    {
      ++BYTE6(CurrentThread[1].Queue);
      *((_DWORD *)P[0] + 52) = 0;
      v17 = MiPfPutPagesInTransition((__int64)P[0], 0, a5, a6, 0LL);
      v18 = P[0];
      List = v17;
      if ( v17 >= 0 && *((PVOID *)P[0] + 28) != (char *)P[0] + 224 )
      {
        MiPfExecuteReadList((__int64)P[0], a5, a6, 0LL);
        MiPfCompletePrefetchIos((ULONG_PTR *)P[0] + 28, 0LL, 0LL);
        v18 = P[0];
      }
      MiReleaseReadListResources((__int64)v18);
      --BYTE6(CurrentThread[1].Queue);
      ExFreePoolWithTag(P[0], 0);
    }
    if ( v14 )
      KeAbPostReleaseEx((ULONG_PTR)v12, v14);
    MiDereferenceInPageAutoBoostLock(v12);
  }
  else
  {
    List = -1073741670;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return (unsigned int)List;
}
