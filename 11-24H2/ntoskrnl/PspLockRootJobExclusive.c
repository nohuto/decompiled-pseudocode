/*
 * XREFs of PspLockRootJobExclusive @ 0x140858E9C
 * Callers:
 *     PspJobDelete @ 0x1404E6110 (PspJobDelete.c)
 *     PspSetNetRateControl @ 0x1407783E4 (PspSetNetRateControl.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140858A1C (PspAllocateAndQueryNotificationChannel.c)
 *     PspSetJobIoRateControl @ 0x14085A388 (PspSetJobIoRateControl.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 */

__int64 __fastcall PspLockRootJobExclusive(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h]

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  for ( i = *(_QWORD *)(a1 + 1312); ; i = *(_QWORD *)(a1 + 1312) )
  {
    v7 = i;
    ExAcquireResourceExclusiveLite((PERESOURCE)(i + 56), 1u);
    if ( v7 == *(_QWORD *)(a1 + 1312) )
      break;
    ExReleaseResourceLite((PERESOURCE)(v7 + 56));
  }
  result = v7;
  *a3 = v7;
  return result;
}
