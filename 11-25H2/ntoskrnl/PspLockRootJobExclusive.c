/*
 * XREFs of PspLockRootJobExclusive @ 0x1409697E4
 * Callers:
 *     PspJobDelete @ 0x1404EB860 (PspJobDelete.c)
 *     PspSetNetRateControl @ 0x140768744 (PspSetNetRateControl.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140969360 (PspAllocateAndQueryNotificationChannel.c)
 *     PspSetJobIoRateControl @ 0x140A3AD48 (PspSetJobIoRateControl.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
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
