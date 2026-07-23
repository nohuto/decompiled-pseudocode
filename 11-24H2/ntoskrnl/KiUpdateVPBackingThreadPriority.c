/*
 * XREFs of KiUpdateVPBackingThreadPriority @ 0x1404DD430
 * Callers:
 *     KiTryToUpdateVPBackingThreadPriorityBeforePreemption @ 0x140285700 (KiTryToUpdateVPBackingThreadPriorityBeforePreemption.c)
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiSwapThread @ 0x1402D60C0 (KiSwapThread.c)
 *     KeYieldExecution @ 0x14031B9F0 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 * Callees:
 *     KiReadGuestSchedulerAssistPriority @ 0x1402D8644 (KiReadGuestSchedulerAssistPriority.c)
 *     KiUpdateThreadPriority @ 0x1402E0E50 (KiUpdateThreadPriority.c)
 *     EtwTraceXSchedulerPriorityUpdate @ 0x1404C1AE8 (EtwTraceXSchedulerPriorityUpdate.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x1404E0370 (KiUpdateThreadQosGroupingSummaries.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x1405C275C (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 */

char __fastcall KiUpdateVPBackingThreadPriority(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, char a4)
{
  bool v5; // zf
  int v8; // eax
  __int64 v9; // rcx
  int v10; // edx
  int v11; // r15d
  ULONG_PTR v12; // r10
  ULONG_PTR v13; // r8
  ULONG_PTR v14; // rdx
  char v15; // al
  char v16; // al
  int v17; // r14d
  int IsEnabledNoReportingNoInline; // eax
  __int64 v19; // rdx
  __int64 v20; // r9
  int v21; // edi
  int v22; // ecx
  signed int v23; // eax
  bool v24; // cc
  int v25; // edi
  char v26; // al
  int v27; // ecx
  __int64 v28; // rdx
  int v29; // ecx
  unsigned __int8 *v30; // rax
  __int64 *v31; // rsi
  unsigned int v32; // eax
  __int64 v33; // rbp
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int8 v36; // al
  __int64 v37; // rdx
  __int64 v39; // [rsp+30h] [rbp-38h] BYREF
  __int64 v40; // [rsp+38h] [rbp-30h] BYREF

  v5 = (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0;
  v39 = 0LL;
  if ( v5 )
    return 0;
  _InterlockedOr(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0x100000u);
  v8 = KiReadGuestSchedulerAssistPriority(BugCheckParameter1, &v39);
  v10 = *(_DWORD *)(BugCheckParameter1 + 1024);
  v11 = v8;
  if ( v8 != v10 )
  {
    v12 = (char)v8 + BugCheckParameter1;
    v9 = *(unsigned __int8 *)(v12 + 824);
    if ( (_BYTE)v9 == 0xFF )
      KeBugCheckEx(0x157u, BugCheckParameter1, (char)v8, 1uLL, 0LL);
    LOBYTE(v9) = v9 + 1;
    *(_BYTE *)(v12 + 824) = v9;
    *(_DWORD *)(BugCheckParameter1 + 856) |= 1 << v8;
    if ( v10 != 32 )
    {
      v9 = (char)v10;
      v13 = (char)v10;
      v14 = (char)v10 + BugCheckParameter1;
      v15 = *(_BYTE *)(v14 + 824);
      if ( !v15 )
        KeBugCheckEx(0x157u, BugCheckParameter1, v13, 2uLL, 0LL);
      v16 = v15 - 1;
      *(_BYTE *)(v14 + 824) = v16;
      if ( !v16 )
        *(_DWORD *)(BugCheckParameter1 + 856) ^= 1 << v9;
    }
    *(_DWORD *)(BugCheckParameter1 + 1024) = v11;
  }
  v17 = *(char *)(BugCheckParameter1 + 195);
  if ( !a4 )
  {
    *(_BYTE *)(BugCheckParameter1 + 870) = 0;
    *(_WORD *)(BugCheckParameter1 + 518) &= 0xF00Fu;
  }
  IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v9);
  v21 = *(char *)(BugCheckParameter1 + 563);
  if ( IsEnabledNoReportingNoInline )
  {
    v20 = (unsigned int)v21;
    if ( v21 < 16 )
    {
      v24 = v21 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF) <= v21;
      v25 = v21 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
      v26 = 0;
      if ( v24 )
        v25 = *(char *)(BugCheckParameter1 + 563);
      if ( *(char *)(BugCheckParameter1 + 870) > 0 )
        v26 = *(_BYTE *)(BugCheckParameter1 + 870);
      v21 = v26 + v25;
      if ( v21 >= 16 )
        v21 = 15;
      v19 = *(unsigned __int16 *)(BugCheckParameter1 + 518) >> 4;
      if ( (unsigned __int8)v19 > v21 )
        v21 = (unsigned __int8)v19;
    }
    v23 = *(_DWORD *)(BugCheckParameter1 + 856);
    if ( v23 )
      goto LABEL_34;
  }
  else
  {
    if ( v21 < 16 )
    {
      v22 = v21 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
      if ( __OFSUB__(v22, v21) || v22 == v21 )
        v22 = *(char *)(BugCheckParameter1 + 563);
      v21 += *(char *)(BugCheckParameter1 + 870);
      if ( v21 <= v22 )
        v21 = v22;
      v19 = *(unsigned __int16 *)(BugCheckParameter1 + 518) >> 4;
      if ( (unsigned __int8)v19 > v21 )
        v21 = (unsigned __int8)v19;
      if ( v21 >= 16 && (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0 )
        v21 = 15;
    }
    v23 = *(_DWORD *)(BugCheckParameter1 + 856);
    if ( v23 )
    {
LABEL_34:
      _BitScanReverse((unsigned int *)&v23, v23);
      if ( v21 < v23 )
        v21 = v23;
    }
  }
  if ( v21 != v17 )
    KiUpdateThreadPriority(a2, v19, BugCheckParameter1, v21, a2 != 0);
  v27 = *(unsigned __int8 *)(BugCheckParameter1 + 1122);
  if ( *(_BYTE *)(BugCheckParameter1 + 1122) )
  {
    v28 = *(_QWORD *)(BugCheckParameter1 + 968);
    if ( v28 )
    {
      v20 = *(unsigned int *)(v28 + 32);
      if ( *(_QWORD *)(v28 + 28) || (*(_DWORD *)(v28 + 20) & 0x4000) != 0 || (*(_DWORD *)v28 & 0x200000) != 0 )
        v27 = 0;
    }
  }
  if ( v27 == *(unsigned __int8 *)(BugCheckParameter1 + 516) )
    goto LABEL_52;
  *(_BYTE *)(BugCheckParameter1 + 516) = v27;
  if ( !a2 )
    goto LABEL_52;
  v29 = *(_DWORD *)(BugCheckParameter1 + 120) >> 1;
  v40 = a2;
  if ( (v29 & 1) == 0 )
  {
    v31 = &v40;
    v32 = 1;
    goto LABEL_50;
  }
  v30 = *(unsigned __int8 **)(a2 + 36440);
  v31 = (__int64 *)(v30 + 8);
  v32 = *v30;
  if ( v32 )
  {
LABEL_50:
    v33 = v32;
    do
    {
      v34 = *v31;
      v35 = *(_QWORD *)(*v31 + 56);
      v36 = *(_BYTE *)(v35 + 64);
      v37 = (*(_BYTE *)(BugCheckParameter1 + 516) ^ v36) & 7;
      *(_BYTE *)(v35 + 64) = (*(_BYTE *)(BugCheckParameter1 + 516) ^ v36) & 7 ^ v36;
      KiUpdateThreadQosGroupingSummaries(v34, v37, v35, v20);
      ++v31;
      --v33;
    }
    while ( v33 );
  }
LABEL_52:
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0xFFEFFFFF);
  if ( v17 != v21 && (BYTE4(xmmword_140FC6B50) & 0x20) != 0 )
    EtwTraceXSchedulerPriorityUpdate(BugCheckParameter1, v17, v11, v21, (char *)&v39);
  return 1;
}
