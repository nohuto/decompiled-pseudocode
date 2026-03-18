/*
 * XREFs of ACPIBuildRunMethodRequest @ 0x14001F5EC
 * Callers:
 *     ACPIBuildRegRequest @ 0x14001FA84 (ACPIBuildRegRequest.c)
 *     ACPIWakeDeferredRestoreEnables @ 0x1400204F0 (ACPIWakeDeferredRestoreEnables.c)
 *     ACPIWakeRestoreEnables @ 0x140020A50 (ACPIWakeRestoreEnables.c)
 *     ACPITableLoad @ 0x14004A4E0 (ACPITableLoad.c)
 * Callees:
 *     ACPIBuildScheduleDpc @ 0x14001E47C (ACPIBuildScheduleDpc.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall ACPIBuildRunMethodRequest(
        __int64 a1,
        void (__fastcall *a2)(__int64, __int64, _QWORD),
        __int64 a3,
        int a4,
        int a5,
        char a6)
{
  _QWORD *v10; // rdi
  __int64 **v11; // rbx
  __int64 *v12; // rax
  unsigned int v14; // ebx

  v10 = 0LL;
  v11 = (__int64 **)ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
  if ( !v11 )
  {
    v14 = -1073741670;
    if ( a2 )
LABEL_19:
      a2(a1, a3, v14);
    return v14;
  }
  if ( a2 )
  {
    v10 = ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
    if ( !v10 )
    {
      ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v11);
      v14 = -1073741670;
      goto LABEL_19;
    }
  }
  if ( !*(_DWORD *)(a1 + 732) )
  {
    ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v11);
    v14 = -1073741130;
    if ( a2 )
    {
      ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v10);
      goto LABEL_19;
    }
    return v14;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 732));
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 732));
  memset(v11, 0, 0x88uLL);
  *((_DWORD *)v11 + 4) = 1599293264;
  v11[16] = (__int64 *)&AcpiBuildRunMethodList;
  *((_DWORD *)v11 + 21) = a5;
  *((_DWORD *)v11 + 6) = 3;
  v11[5] = (__int64 *)a1;
  *((_DWORD *)v11 + 20) = a4;
  *((_DWORD *)v11 + 5) = 4108;
  if ( a2 )
  {
    memset(v10, 0, 0x88uLL);
    *((_DWORD *)v10 + 4) = 1599293264;
    v10[16] = &AcpiBuildSynchronizationList;
    v10[10] = &AcpiBuildRunMethodList;
    *((_DWORD *)v10 + 6) = 3;
    v10[8] = a2;
    v10[9] = a3;
    v10[5] = a1;
    *((_DWORD *)v10 + 22) = a4;
    *((_DWORD *)v10 + 5) = 4106;
    *((_DWORD *)v10 + 23) = 1;
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v12 = (__int64 *)qword_14008B398;
  if ( *(__int64 **)qword_14008B398 != &AcpiBuildQueueList )
    goto LABEL_17;
  *v11 = &AcpiBuildQueueList;
  v11[1] = v12;
  *v12 = (__int64)v11;
  qword_14008B398 = (__int64)v11;
  if ( a2 )
  {
    if ( *v11 == &AcpiBuildQueueList )
    {
      *v10 = &AcpiBuildQueueList;
      v10[1] = v11;
      *v11 = v10;
      qword_14008B398 = (__int64)v10;
      goto LABEL_12;
    }
LABEL_17:
    __fastfail(3u);
  }
LABEL_12:
  if ( a6 )
    ACPIBuildScheduleDpc();
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
  return 259LL;
}
