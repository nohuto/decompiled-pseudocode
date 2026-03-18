/*
 * XREFs of ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140430240
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x140093270 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x14004C604 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x14005E2E4 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x140094408 (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1402822D0 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x1402F99DC (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x140367770 (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1403A1500 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1403A2E50 (-Blt@BLTENTRY@@QEAAJXZ.c)
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1403A3170 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1403A5CBC (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1403BFCE0 (-UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1403DCD98 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ @ 0x1403E3F70 (-ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1404300C8 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 */

__int64 __fastcall BLTQUEUE::ProcessBltQueue(__int64 a1, int a2, struct BLTQUEUE::__BLTWAITINFO *a3)
{
  int v3; // ebp
  struct BLTQUEUE::__BLTWAITINFO *v4; // rdi
  int v6; // r13d
  int v8; // eax
  struct _LIST_ENTRY *v9; // rax
  int v10; // r12d
  struct _LIST_ENTRY **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r14
  _DWORD *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rax
  char v20; // cl
  char v21; // al
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbx
  struct _KEVENT *v25; // [rsp+90h] [rbp+8h]
  char v26; // [rsp+90h] [rbp+8h]
  char v27; // [rsp+90h] [rbp+8h]
  int v28; // [rsp+98h] [rbp+10h]

  v28 = a2;
  v3 = 0;
  v4 = a3;
  v6 = 0;
  if ( *(int *)(a1 + 1076) < 0 )
  {
    if ( a2 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
    return *(unsigned int *)(a1 + 1076);
  }
  if ( a2 == 1 )
  {
    v8 = *(_DWORD *)(a1 + 520);
    if ( v8 )
      *(_DWORD *)(a1 + 520) = v8 - 1;
  }
  v9 = (struct _LIST_ENTRY *)(a1 + 216);
  v10 = 2;
  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 520) )
      *(_DWORD *)v4 |= 2u;
    v11 = BLTQUEUE::RemoveQueueHead((BLTQUEUE *)a1, v9);
    v14 = (__int64)v11;
    if ( !v11 )
      break;
    v15 = v11 + 65;
    if ( v28 == 2 )
    {
      *v15 |= 1u;
      BLTENTRY::ReleaseRenderingDoneEvent((BLTENTRY *)v11, v12, v13);
    }
    if ( (*v15 & 1) == 0 )
    {
      v25 = *(struct _KEVENT **)(v14 + 40);
      if ( KeReadStateEvent(v25) )
      {
        *v15 |= 1u;
LABEL_19:
        BLTENTRY::ReleaseRenderingDoneEvent((BLTENTRY *)v14, v16, v17);
        goto LABEL_20;
      }
      *(_DWORD *)v4 |= 1u;
      *((_QWORD *)v4 + 1) = v25;
      if ( ++*(_DWORD *)(v14 + 524) > (unsigned int)(5 * *(_DWORD *)(a1 + 384)) / *(_DWORD *)(a1 + 388) )
      {
        *v15 |= 1u;
        *v15 |= 2u;
        *(_DWORD *)(a1 + 1072) |= 4u;
        WdLogSingleEntry1(2LL, a1);
        WdLogGlobalForLineNumber = 3794;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"BLTQUEUE 0x%I64x : rendering timeout hit",
          a1,
          0LL,
          0LL,
          0LL,
          0LL);
        *(_DWORD *)v4 &= ~1u;
        goto LABEL_19;
      }
    }
LABEL_20:
    if ( v28 != 1 && (*v15 & 1) != 0 && !*(_DWORD *)(a1 + 520) && *(_DWORD *)(v14 + 56) && !*(_BYTE *)(a1 + 352) )
      *(_DWORD *)v4 |= 2u;
    if ( (*(_DWORD *)v4 & 2) != 0 || (*(_DWORD *)v4 & 1) != 0 )
    {
      BLTQUEUE::InsertQueueHead(a1, (__int64 *)(a1 + 216), v14);
      goto LABEL_63;
    }
    KeWaitForSingleObject((PVOID)(a1 + 264), Executive, 0, 0, 0LL);
    BLTQUEUE::UpdatePresentStats((BLTQUEUE *)a1, (struct BLTENTRY *)v14, a3);
    if ( v28 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    v28 = -1;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      BLTQUEUE::InsertQueueHead(a1, (__int64 *)(a1 + 216), v14);
      KeReleaseMutex((PRKMUTEX)(a1 + 264), 0);
      return (unsigned int)v6;
    }
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)a1) + 111) & 0x100) != 0 )
    {
      KeWaitForSingleObject((PVOID)(a1 + 2840), Executive, 0, 0, 0LL);
      v6 = BLTENTRY::IndirectBlt((LARGE_INTEGER *)v14);
      KeReleaseMutex((PRKMUTEX)(a1 + 2840), 0);
    }
    else
    {
      v6 = BLTENTRY::Blt((BLTENTRY *)v14);
      BLTENTRY::ReleasePresentDoneEvent((BLTENTRY *)v14, 1);
    }
    if ( v6 >= 0 )
    {
      *(_DWORD *)(a1 + 516) = *(_DWORD *)(v14 + 56);
      v18 = 0;
      if ( !*(_BYTE *)(a1 + 352) )
        v18 = *(_DWORD *)(v14 + 56);
      *(_DWORD *)(a1 + 520) = v18;
    }
    DXGALLOCATIONREFERENCE::AssignNull((struct _EX_RUNDOWN_REF **)(v14 + 32));
    BLTQUEUE::InsertQueueTail(a1, a1 + 232, v14);
    if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
    {
      KeWaitForSingleObject((PVOID)(a1 + 600), Executive, 0, 0, 0LL);
      v19 = *(_QWORD *)(a1 + 676);
      *(_DWORD *)(a1 + 676) &= ~0x40u;
      v26 = v19;
      KeReleaseMutex((PRKMUTEX)(a1 + 600), 0);
      if ( (v26 & 0x40) == 0 )
        goto LABEL_43;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 662) )
        goto LABEL_43;
      *(_BYTE *)(a1 + 662) = 0;
    }
    BLTQUEUE::FinishCommand((BLTQUEUE *)a1, v6);
LABEL_43:
    KeReleaseMutex((PRKMUTEX)(a1 + 264), 0);
    if ( v6 < 0 )
    {
      BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
      *(_DWORD *)(a1 + 1076) = v6;
      return (unsigned int)v6;
    }
    v4 = a3;
    v9 = (struct _LIST_ENTRY *)(a1 + 216);
  }
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject((PVOID)(a1 + 600), Executive, 0, 0, 0LL);
    v23 = *(_QWORD *)(a1 + 676);
    *(_DWORD *)(a1 + 676) &= 0xFFFFFF9F;
    v27 = v23;
    KeReleaseMutex((PRKMUTEX)(a1 + 600), 0);
    if ( (v27 & 0x60) == 0 )
      goto LABEL_63;
    if ( (v27 & 0x60) == 0x60 )
      v3 = 2;
    *(_DWORD *)(a1 + 1064) = *(_DWORD *)(a1 + 1064) & 0xFFFFFFFD | v3;
    if ( (v27 & 0x20) != 0 )
    {
      v24 = *(unsigned int *)(a1 + 976);
      *(LARGE_INTEGER *)(a1 + 40 * v24 + 992) = KeQueryPerformanceCounter(0LL);
      *(_DWORD *)(a1 + 40 * v24 + 1000) = v28;
    }
    goto LABEL_62;
  }
  v20 = *(_BYTE *)(a1 + 661);
  v21 = *(_BYTE *)(a1 + 662);
  if ( v20 )
  {
    if ( !v21 )
      goto LABEL_53;
LABEL_54:
    *(_DWORD *)(a1 + 1064) = v10 | *(_DWORD *)(a1 + 1064) & 0xFFFFFFFD;
    if ( v20 )
    {
      v22 = *(unsigned int *)(a1 + 976);
      *(LARGE_INTEGER *)(a1 + 40 * v22 + 992) = KeQueryPerformanceCounter(0LL);
      *(_DWORD *)(a1 + 40 * v22 + 1000) = v28;
    }
    *(_WORD *)(a1 + 661) = 0;
LABEL_62:
    BLTQUEUE::FinishCommand((BLTQUEUE *)a1, 0);
    goto LABEL_63;
  }
  if ( v21 )
  {
LABEL_53:
    v10 = 0;
    goto LABEL_54;
  }
LABEL_63:
  if ( v28 == 1 )
    BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
  return (unsigned int)v6;
}
