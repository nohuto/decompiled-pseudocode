/*
 * XREFs of ExpSaPageGroupDescriptorAllocate @ 0x14026E450
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14026E250 (ExpSaAllocatorAllocate.c)
 * Callees:
 *     ExpSaBinaryArrayInsert @ 0x14026E6F8 (ExpSaBinaryArrayInsert.c)
 *     KeQueryNodeActiveAffinity @ 0x14026FD20 (KeQueryNodeActiveAffinity.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14031D920 (KeQueryMaximumProcessorCountEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExpSaBinaryArrayRemove @ 0x1404F4218 (ExpSaBinaryArrayRemove.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 */

char *__fastcall ExpSaPageGroupDescriptorAllocate(__int64 a1, char a2)
{
  char v4; // r15
  __int64 v5; // r14
  unsigned int v6; // esi
  ULONG_PTR v7; // r12
  char *result; // rax
  char *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // r13
  struct _KPRCB *v15; // rax
  USHORT v16; // si
  void *Pool3; // rbx
  char v18; // si
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v20; // rbx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  ULONG MaximumProcessorCount; // [rsp+34h] [rbp-4Ch]
  unsigned int v25; // [rsp+38h] [rbp-48h]
  _GROUP_AFFINITY Affinity; // [rsp+40h] [rbp-40h] BYREF
  __int128 v27; // [rsp+50h] [rbp-30h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-20h] BYREF

  Affinity = 0LL;
  v4 = 0;
  PreviousAffinity = 0LL;
  v27 = 0LL;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v5 = 0LL;
  v6 = MaximumProcessorCount;
  v7 = a2 != 0 ? 256LL : 64LL;
  result = (char *)ExAllocatePool2(v7, 0x80uLL, 0x61537845u);
  v9 = result;
  if ( !result )
    return result;
  memset_0(result, 0, 0x80uLL);
  *((_QWORD *)v9 + 6) = 512LL;
  *((_QWORD *)v9 + 7) = v9 + 64;
  *((_DWORD *)v9 + 9) = 512;
  *((_QWORD *)v9 + 2) = a1;
  v10 = KeAbPreAcquire(&ExSaPageGroupDescriptorArrayLock, 0LL, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v10, &ExSaPageGroupDescriptorArrayLock);
  if ( v11 )
    *(_BYTE *)(v11 + 10) = 1;
  v12 = ExpSaBinaryArrayInsert(
          ExSaPageGroupDescriptorArray,
          v9,
          KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]);
  *((_DWORD *)v9 + 8) = v12;
  if ( v12 == -1 )
    goto LABEL_28;
  v13 = KeNumberProcessors_0;
  v25 = KeNumberProcessors_0;
  while ( 1 )
  {
    if ( (unsigned int)v5 >= v6 )
    {
      Pool3 = 0LL;
      v18 = 1;
      goto LABEL_17;
    }
    v14 = *(_QWORD *)(ExSaPageArrays + 8 * v5);
    v15 = (unsigned int)v5 >= v13 ? KeGetCurrentPrcb() : (struct _KPRCB *)KeGetPrcb((unsigned int)v5);
    v16 = v15->SchedulerSubNode->Affinity.Reserved[0];
    if ( a2 )
      break;
    LOBYTE(v27) = 3;
    DWORD2(v27) = v16 | 0x80000000;
    Pool3 = (void *)ExAllocatePool3(v7, 1);
    if ( !Pool3 )
      goto LABEL_27;
LABEL_13:
    if ( (unsigned int)ExpSaBinaryArrayInsert(v14, Pool3, v16) == -1 )
      goto LABEL_27;
    v13 = v25;
    v5 = (unsigned int)(v5 + 1);
    v6 = MaximumProcessorCount;
  }
  KeQueryNodeActiveAffinity(v16, &Affinity, 0LL);
  if ( v4 )
  {
    p_PreviousAffinity = 0LL;
  }
  else
  {
    v4 = 1;
    p_PreviousAffinity = &PreviousAffinity;
  }
  KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
  Pool3 = (void *)ExAllocatePool2(v7, 0x1000uLL, 0x61537845u);
  if ( Pool3 )
    goto LABEL_13;
LABEL_27:
  v18 = 0;
LABEL_17:
  if ( v4 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( Pool3 )
    ExFreePoolWithTag(Pool3, 0);
  if ( !v18 )
  {
LABEL_28:
    if ( *((_DWORD *)v9 + 8) != -1 )
    {
      while ( (_DWORD)v5 )
      {
        v5 = (unsigned int)(v5 - 1);
        v20 = *(_QWORD *)(ExSaPageArrays + 8 * v5);
        v21 = *((_DWORD *)v9 + 8);
        _BitScanReverse(&v22, v21);
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v20 + 8LL * (v22 - 2)) + 8LL * ((1 << v22) ^ v21) + 8), 0);
        ExpSaBinaryArrayRemove(v20, *((unsigned int *)v9 + 8));
      }
      ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, *((unsigned int *)v9 + 8));
    }
    ExFreePoolWithTag(v9, 0);
    v9 = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExSaPageGroupDescriptorArrayLock);
  KeAbPostRelease((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  return v9;
}
