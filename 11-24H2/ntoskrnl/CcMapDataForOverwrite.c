/*
 * XREFs of CcMapDataForOverwrite @ 0x140451570
 * Callers:
 *     CcPreparePinWrite @ 0x140A34720 (CcPreparePinWrite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     CcUnpinFileDataEx @ 0x1402766A0 (CcUnpinFileDataEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcMapDataCommon @ 0x1409781B0 (CcMapDataCommon.c)
 */

__int64 __fastcall CcMapDataForOverwrite(__int64 a1, _DWORD *a2, unsigned int a3, _QWORD *a4, unsigned __int64 *a5)
{
  int v6; // r12d
  int v7; // r13d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rbx
  unsigned int v10; // r14d
  unsigned __int64 *v11; // rdi
  unsigned __int64 v12; // rdi
  unsigned int v13; // ebx
  unsigned int v14; // eax
  __int64 result; // rax
  unsigned int v16; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+10h] BYREF
  char v19; // [rsp+B0h] [rbp+18h] BYREF
  _QWORD *v20; // [rsp+B8h] [rbp+20h]

  v20 = a4;
  v6 = (int)a2;
  v7 = a1;
  v18 = 0LL;
  v16 = (a3 + 4095LL + (unsigned __int64)(*a2 & 0xFFF)) >> 12;
  CurrentThread = KeGetCurrentThread();
  v19 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( (*(_DWORD *)(v9 + 152) & 0x20000) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v9 + 536) + 768LL), &LockHandle);
    *(_DWORD *)(v9 + 152) |= 0x20000u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v10 = BYTE4(CurrentThread[1].Queue) + 2 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v11 = a5;
  CcMapDataCommon(v7, v6, a3, 1, (__int64)&v18, (__int64)a5);
  v12 = *v11;
  v13 = v16;
  while ( v13 )
  {
    v19 = 1;
    BYTE4(CurrentThread[1].Queue) = 1;
    v14 = v13 - 1;
    v13 = v14;
    if ( v14 > LODWORD(CurrentThread[1].WaitListEntry.Flink) )
    {
      if ( v14 > 0xF )
        v14 = 15;
      LODWORD(CurrentThread[1].WaitListEntry.Flink) = v14;
    }
    MmCheckCachedPageStates(v12, 1LL, 5u, &v19);
    if ( !v19 )
      MmCheckCachedPageStates(v12, 1LL, 4u, 0LL);
    v12 += 4096LL;
  }
  BYTE4(CurrentThread[1].Queue) = v10 & 1;
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v10 >> 1;
  __addgsdword(0x8990u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  result = v18;
  *v20 = v18;
  return result;
}
