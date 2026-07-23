/*
 * XREFs of HalpVpptArmTimer @ 0x140447620
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140205754 (HalpReleaseHighLevelLock.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     HalpAcquireHighLevelLock @ 0x140445E40 (HalpAcquireHighLevelLock.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x140445E88 (HalpVpptUpdatePhysicalTimer.c)
 */

__int64 __fastcall HalpVpptArmTimer(__int64 *a1, int a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  int v8; // esi
  LARGE_INTEGER InterruptTimePrecise; // rax
  int *v10; // rcx
  int *i; // rdx
  __int64 v12; // rax
  __int64 *v14; // rcx
  __int64 **v15; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp+8h] BYREF

  if ( ((a2 - 1) & 0xFFFFFFFD) != 0 )
    return 3221225659LL;
  byte_140FC0D38 = HalpAcquireHighLevelLock(&qword_140FC0D30);
  v6 = 0LL;
  if ( *(int **)&HalpVpptQueue == &HalpVpptQueue )
  {
    v7 = 0LL;
    v8 = -1;
  }
  else
  {
    v7 = *(_QWORD *)(*(_QWORD *)&HalpVpptQueue + 32LL);
    v8 = *(_DWORD *)(*(_QWORD *)&HalpVpptQueue + 16LL);
  }
  if ( *((_BYTE *)a1 + 24) )
  {
    v14 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 )
      goto LABEL_9;
    v15 = (__int64 **)a1[1];
    if ( *v15 != a1 )
      goto LABEL_9;
    *v15 = v14;
    v14[1] = (__int64)v15;
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v10 = &HalpVpptQueue;
  if ( a2 != 3 )
    v6 = a3;
  a1[4] = InterruptTimePrecise.QuadPart + a3;
  a1[5] = v6;
  for ( i = *(int **)&HalpVpptQueue; i != &HalpVpptQueue; i = *(int **)i )
  {
    if ( (unsigned __int64)(InterruptTimePrecise.QuadPart + a3) < *((_QWORD *)i + 4) )
      break;
    v10 = i;
  }
  v12 = *(_QWORD *)v10;
  if ( *(int **)(*(_QWORD *)v10 + 8LL) != v10 )
LABEL_9:
    __fastfail(3u);
  *a1 = v12;
  a1[1] = (__int64)v10;
  *(_QWORD *)(v12 + 8) = a1;
  *(_QWORD *)v10 = a1;
  if ( *(_QWORD *)(*(_QWORD *)&HalpVpptQueue + 32LL) != v7 || *(_DWORD *)(*(_QWORD *)&HalpVpptQueue + 16LL) != v8 )
    HalpVpptUpdatePhysicalTimer((__int64)v10);
  *((_DWORD *)a1 + 5) = 2;
  *((_BYTE *)a1 + 24) = 1;
  HalpReleaseHighLevelLock((__int64)&qword_140FC0D30, byte_140FC0D38);
  return 0LL;
}
