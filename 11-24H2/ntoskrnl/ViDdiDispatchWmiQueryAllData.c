/*
 * XREFs of ViDdiDispatchWmiQueryAllData @ 0x140B864E4
 * Callers:
 *     ViDdiDispatchWmi @ 0x140B86480 (ViDdiDispatchWmi.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     VfIrpLogRetrieveWmiData @ 0x140B9D874 (VfIrpLogRetrieveWmiData.c)
 *     VfIrpLogUnlockDatabase @ 0x140B9DB54 (VfIrpLogUnlockDatabase.c)
 */

__int64 __fastcall ViDdiDispatchWmiQueryAllData(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v6; // r12d
  unsigned int *v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rbx
  KIRQL v10; // al
  int v11; // ebx
  int WmiData; // r15d
  unsigned int v13; // ebx
  int v14; // r12d
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // [rsp+80h] [rbp+48h] BYREF
  int v18; // [rsp+88h] [rbp+50h] BYREF
  int v19; // [rsp+90h] [rbp+58h] BYREF
  int v20; // [rsp+98h] [rbp+60h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v20 = 0;
  v18 = 0;
  v19 = 0;
  v17 = 0;
  if ( *(_QWORD *)(v2 + 8) != a1 )
    return 3221225659LL;
  if ( RtlCompareMemory(*(const void **)(v2 + 16), &GUID_VERIFIER_WMI_INTERFACE, 0x10uLL) != 16 )
    return 3221226133LL;
  v6 = *(_DWORD *)(v2 + 24);
  v7 = *(unsigned int **)(a1 + 64);
  if ( v6 < 0x38 )
    return 3221225507LL;
  v8 = *(_QWORD *)(v2 + 32);
  *(_QWORD *)(v8 + 16) = MEMORY[0xFFFFF78000000014];
  v9 = *v7;
  v10 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  if ( *(_DWORD *)(ViIrpLogDatabase + 24 * v9) )
  {
    v11 = -1073741267;
  }
  else
  {
    *(_DWORD *)(ViIrpLogDatabase + 24 * v9) = 1;
    v11 = 0;
  }
  KeReleaseSpinLock(&ViIrpLogDatabaseLock, v10);
  if ( v11 < 0 )
    return (unsigned int)v11;
  WmiData = VfIrpLogRetrieveWmiData(*v7, 0, (unsigned int)&v20, (unsigned int)&v18, (__int64)&v19, (__int64)&v17);
  if ( WmiData < 0 )
  {
    VfIrpLogUnlockDatabase(*v7);
    return (unsigned int)WmiData;
  }
  v13 = v17 + 72;
  v17 = v13;
  if ( v13 <= v6 )
  {
    v14 = v18;
    if ( v18 )
    {
      v15 = VfIrpLogRetrieveWmiData(*v7, v8, (unsigned int)&v20, (unsigned int)&v18, (__int64)&v19, (__int64)&v17);
      v14 = v18;
      WmiData = v15;
      v13 = v17;
    }
    VfIrpLogUnlockDatabase(*v7);
    if ( WmiData < 0 )
      return (unsigned int)WmiData;
    if ( v14 )
    {
      *(_DWORD *)v8 = 72;
      v13 = 72;
      *(_QWORD *)(v8 + 56) = 0LL;
      *(_DWORD *)(v8 + 48) = 0;
    }
    else
    {
      v16 = *(_DWORD *)(v8 + 44) & 0xFFFFFFEF;
      *(_DWORD *)v8 = v13;
      *(_DWORD *)(v8 + 44) = v16 | 1;
      *(_DWORD *)(v8 + 48) = v19;
      *(_DWORD *)(v8 + 56) = v20;
    }
    *(_DWORD *)(v8 + 52) = 0;
    *(_QWORD *)(a2 + 56) = v13;
  }
  else
  {
    VfIrpLogUnlockDatabase(*v7);
    *(_DWORD *)(v8 + 44) |= 0x20u;
    *(_DWORD *)(v8 + 48) = v13;
    *(_QWORD *)(a2 + 56) = 56LL;
  }
  return 0LL;
}
