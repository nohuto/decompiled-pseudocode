/*
 * XREFs of PspApplyWorkingSetLimits @ 0x140777480
 * Callers:
 *     PspSetJobLimitsJobPostCallback @ 0x140A68E80 (PspSetJobLimitsJobPostCallback.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     MmAdjustWorkingSetSize @ 0x1403CD080 (MmAdjustWorkingSetSize.c)
 *     MmEnforceWorkingSetLimit @ 0x14047DC7C (MmEnforceWorkingSetLimit.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall PspApplyWorkingSetLimits(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // rax
  int v5; // r9d
  PVOID *v6; // rbx
  PVOID *result; // rax
  __int64 v8; // rax
  PVOID P; // [rsp+20h] [rbp-50h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-48h]
  _OWORD v11[3]; // [rsp+30h] [rbp-40h] BYREF

  p_P = &P;
  P = &P;
  memset(v11, 0, sizeof(v11));
  while ( 1 )
  {
    v2 = PspWorkingSetChangeHead;
    if ( (__int64 *)PspWorkingSetChangeHead == &PspWorkingSetChangeHead )
      break;
    if ( *(__int64 **)(PspWorkingSetChangeHead + 8) != &PspWorkingSetChangeHead
      || (v3 = *(_QWORD *)PspWorkingSetChangeHead,
          *(_QWORD *)(*(_QWORD *)PspWorkingSetChangeHead + 8LL) != PspWorkingSetChangeHead)
      || (PspWorkingSetChangeHead = *(_QWORD *)PspWorkingSetChangeHead,
          *(_QWORD *)(v3 + 8) = &PspWorkingSetChangeHead,
          v4 = p_P,
          *p_P != &P) )
    {
LABEL_14:
      __fastfail(3u);
    }
    *(_QWORD *)(v2 + 8) = p_P;
    *(_QWORD *)v2 = &P;
    *v4 = v2;
    p_P = (PVOID *)v2;
    KiStackAttachProcess(*(_KPROCESS **)(v2 + 16), 0, (__int64)v11);
    LOBYTE(v5) = 1;
    MmAdjustWorkingSetSize(*(_QWORD *)(v2 + 24), *(_QWORD *)(v2 + 32), 0, v5);
    MmEnforceWorkingSetLimit(*(_KPROCESS **)(v2 + 16), 1);
    KiUnstackDetachProcess((__int64)v11, 0);
  }
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1552), 0xFFFFFEFF);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140FC60B0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140FC60B0);
  KeAbPostRelease((ULONG_PTR)&qword_140FC60B0);
  while ( 1 )
  {
    v6 = (PVOID *)P;
    result = &P;
    if ( P == &P )
      return result;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_14;
    v8 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_14;
    P = *(PVOID *)P;
    *(_QWORD *)(v8 + 8) = &P;
    ObfDereferenceObjectWithTag(v6[2], 0x624A7350u);
    ExFreePoolWithTag(v6, 0x72437350u);
  }
}
