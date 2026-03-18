/*
 * XREFs of KiUpdateVPBackingThreadPriority @ 0x140316DD0
 * Callers:
 *     KiTryToUpdateVPBackingThreadPriorityBeforePreemption @ 0x140254190 (KiTryToUpdateVPBackingThreadPriorityBeforePreemption.c)
 *     KeYieldExecution @ 0x14027B240 (KeYieldExecution.c)
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiDirectSwitchThread @ 0x140315A20 (KiDirectSwitchThread.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 * Callees:
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140317BD0 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1404303E4 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceXSchedulerPriorityUpdate @ 0x1404C7758 (EtwTraceXSchedulerPriorityUpdate.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall KiUpdateVPBackingThreadPriority(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, char a4)
{
  bool v5; // zf
  int v8; // eax
  ULONG_PTR v9; // rdx
  int v10; // r15d
  ULONG_PTR v11; // r10
  char v12; // cl
  char v13; // cl
  ULONG_PTR v14; // r8
  char v15; // al
  char v16; // al
  int v17; // r14d
  int v18; // edi
  int v19; // ecx
  signed int v20; // eax
  int v21; // ecx
  _DWORD *v22; // rdx
  int v23; // ecx
  unsigned __int8 *v24; // rax
  __int64 *v25; // rsi
  unsigned int v26; // eax
  __int64 v27; // rbp
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v31; // [rsp+30h] [rbp-38h] BYREF
  __int64 v32; // [rsp+38h] [rbp-30h] BYREF

  v5 = (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0;
  v31 = 0LL;
  if ( v5 )
    return 0;
  _InterlockedOr(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0x100000u);
  v8 = KiReadGuestSchedulerAssistPriority(BugCheckParameter1, &v31);
  LODWORD(v9) = *(_DWORD *)(BugCheckParameter1 + 1024);
  v10 = v8;
  if ( v8 != (_DWORD)v9 )
  {
    v11 = (char)v8 + BugCheckParameter1;
    v12 = *(_BYTE *)(v11 + 824);
    if ( v12 == -1 )
      KeBugCheckEx(0x157u, BugCheckParameter1, (char)v8, 1uLL, 0LL);
    *(_BYTE *)(v11 + 824) = v12 + 1;
    *(_DWORD *)(BugCheckParameter1 + 856) |= 1 << v8;
    if ( (_DWORD)v9 != 32 )
    {
      v13 = v9;
      v14 = (char)v9;
      v9 = (char)v9 + BugCheckParameter1;
      v15 = *(_BYTE *)(v9 + 824);
      if ( !v15 )
        KeBugCheckEx(0x157u, BugCheckParameter1, v14, 2uLL, 0LL);
      v16 = v15 - 1;
      *(_BYTE *)(v9 + 824) = v16;
      if ( !v16 )
        *(_DWORD *)(BugCheckParameter1 + 856) ^= 1 << v13;
    }
    *(_DWORD *)(BugCheckParameter1 + 1024) = v10;
  }
  v17 = *(char *)(BugCheckParameter1 + 195);
  if ( !a4 )
  {
    *(_BYTE *)(BugCheckParameter1 + 870) = 0;
    *(_WORD *)(BugCheckParameter1 + 518) &= 0xF00Fu;
  }
  v18 = *(char *)(BugCheckParameter1 + 563);
  if ( v18 < 16 )
  {
    v19 = v18 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
    if ( __OFSUB__(v19, v18) || v19 == v18 )
      v19 = *(char *)(BugCheckParameter1 + 563);
    v18 += *(char *)(BugCheckParameter1 + 870);
    if ( v18 <= v19 )
      v18 = v19;
    LODWORD(v9) = *(unsigned __int16 *)(BugCheckParameter1 + 518) >> 4;
    if ( (unsigned __int8)v9 > v18 )
      v18 = (unsigned __int8)v9;
    if ( v18 >= 16 && (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0 )
      v18 = 15;
  }
  v20 = *(_DWORD *)(BugCheckParameter1 + 856);
  if ( v20 )
  {
    _BitScanReverse((unsigned int *)&v20, v20);
    if ( v18 < v20 )
      v18 = v20;
  }
  if ( v18 != v17 )
    KiUpdateThreadPriority(a2, v9, BugCheckParameter1, v18, a2 != 0);
  v21 = *(unsigned __int8 *)(BugCheckParameter1 + 1122);
  if ( *(_BYTE *)(BugCheckParameter1 + 1122) )
  {
    v22 = *(_DWORD **)(BugCheckParameter1 + 968);
    if ( v22 )
    {
      if ( v22[7] || v22[8] || (v22[5] & 0x4000) != 0 || (*v22 & 0x200000) != 0 )
        v21 = 0;
    }
  }
  if ( v21 != *(unsigned __int8 *)(BugCheckParameter1 + 516) )
  {
    *(_BYTE *)(BugCheckParameter1 + 516) = v21;
    if ( a2 )
    {
      v23 = *(_DWORD *)(BugCheckParameter1 + 120) >> 1;
      v32 = a2;
      if ( (v23 & 1) == 0 )
      {
        v25 = &v32;
        v26 = 1;
        goto LABEL_39;
      }
      v24 = *(unsigned __int8 **)(a2 + 36440);
      v25 = (__int64 *)(v24 + 8);
      v26 = *v24;
      if ( v26 )
      {
LABEL_39:
        v27 = v26;
        do
        {
          v28 = *v25;
          *(_BYTE *)(*(_QWORD *)(*v25 + 56) + 64LL) ^= (*(_BYTE *)(BugCheckParameter1 + 516) ^ *(_BYTE *)(*(_QWORD *)(*v25 + 56) + 64LL)) & 7;
          KiUpdateThreadQosGroupingSummaries(v28);
          Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v29);
          ++v25;
          --v27;
        }
        while ( v27 );
      }
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0xFFEFFFFF);
  if ( v17 != v18 && (BYTE4(xmmword_140FC5B10) & 0x20) != 0 )
    EtwTraceXSchedulerPriorityUpdate(BugCheckParameter1, v17, v10, v18, (__int64)&v31);
  return 1;
}
