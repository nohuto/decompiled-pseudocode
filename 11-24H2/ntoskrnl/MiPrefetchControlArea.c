/*
 * XREFs of MiPrefetchControlArea @ 0x14093AC84
 * Callers:
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiSetPagesModified @ 0x1403DA5EC (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x14093C5D8 (MiValidateSectionCreate.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A2A370 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiGetInPageAutoBoostLock @ 0x1402770DC (MiGetInPageAutoBoostLock.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiPfCompletePrefetchIos @ 0x140351AD0 (MiPfCompletePrefetchIos.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x1403529B8 (MiDereferenceInPageAutoBoostLock.c)
 *     MiReleaseReadListResources @ 0x1409399B0 (MiReleaseReadListResources.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 *     MiPfExecuteReadList @ 0x14093A5EC (MiPfExecuteReadList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPrefetchControlArea(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // rdi
  volatile signed __int64 *v11; // rax
  volatile signed __int64 *v12; // rsi
  _QWORD *v13; // rax
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
  KeLeaveCriticalRegionThread();
  return (unsigned int)List;
}
