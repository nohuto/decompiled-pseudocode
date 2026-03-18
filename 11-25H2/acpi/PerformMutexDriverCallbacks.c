/*
 * XREFs of PerformMutexDriverCallbacks @ 0x14002E494
 * Callers:
 *     ParseAcquire @ 0x140002BC0 (ParseAcquire.c)
 *     FreeObjData @ 0x14002E368 (FreeObjData.c)
 *     Mutex @ 0x14006EBC0 (Mutex.c)
 * Callees:
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     ConvertNtStatusToAMLIStatus @ 0x14002FCFC (ConvertNtStatusToAMLIStatus.c)
 *     ReferenceObjectEx @ 0x140030DA0 (ReferenceObjectEx.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PerformMutexDriverCallbacks(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int16 a5)
{
  __int64 v5; // rdi
  KIRQL v9; // dl
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  int v14; // eax
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h]
  __int128 v18; // [rsp+50h] [rbp-10h]

  v5 = 0LL;
  *(_QWORD *)&v18 = 0LL;
  DWORD2(v18) = 0;
  v16 = 0LL;
  v17 = 0LL;
  if ( !ghMutexObject || !gDeviceLockMutexSupported )
  {
    v10 = 0;
    return ConvertNtStatusToAMLIStatus(v10);
  }
  if ( a4 )
  {
    v5 = a4;
    ExAcquireSpinLockShared(&ACPINamespaceLock);
    for ( ; *(_WORD *)(v5 + 66) == 8; v5 = *(_QWORD *)(v5 + 16) )
      ;
    ReferenceObjectEx(v5);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v9);
    if ( *(_WORD *)(v5 + 66) != 6 )
    {
      v10 = -1072431089;
      goto LABEL_21;
    }
  }
  *(_QWORD *)&v16 = a1;
  *((_QWORD *)&v16 + 1) = a2 + 80;
  v17 = 0LL;
  v18 = 0LL;
  if ( a1 )
  {
    v11 = a1 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 != 1 )
          {
            v10 = -1073741637;
LABEL_20:
            LogError(-1072431101);
            AcpiDiagTraceAmlError(a3, -1072431101);
            PrintDebugMessage(0x91u, (const void *)(int)v10, 0LL, 0LL, 0LL);
            goto LABEL_21;
          }
          *(_QWORD *)&v17 = v5 + 120;
          *((_QWORD *)&v17 + 1) = *(_QWORD *)(a2 + 72);
          LODWORD(v18) = *(_DWORD *)(a2 + 64);
        }
        else
        {
          *(_QWORD *)&v17 = a3;
        }
      }
      else
      {
        *((_QWORD *)&v17 + 1) = a3;
        *(_QWORD *)&v17 = v5 + 120;
        *(_QWORD *)&v18 = *(_QWORD *)(a2 + 72);
        DWORD2(v18) = *(_DWORD *)(a2 + 64);
        WORD6(v18) = a5;
      }
    }
  }
  v14 = ((__int64 (__fastcall *)(__int128 *))ghMutexObject)(&v16);
  v10 = v14;
  if ( v14 < 0 && v14 != -1073741643 && v14 != -1073741536 )
    goto LABEL_20;
LABEL_21:
  if ( v5 )
    DereferenceObjectEx(v5);
  return ConvertNtStatusToAMLIStatus(v10);
}
