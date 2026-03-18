/*
 * XREFs of ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140304A00
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14027A168 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140014AA8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x14004CB54 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     McTemplateK0xqdtqi_EtwWriteTransfer @ 0x140060220 (McTemplateK0xqdtqi_EtwWriteTransfer.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x140185084 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x140305090 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1403053B8 (-UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x140305710 (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x140305744 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1403057D0 (-Blt@BLTENTRY@@QEAAJXZ.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1403059A8 (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x140305D64 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ @ 0x140305DB0 (-ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ.c)
 */

__int64 __fastcall BLTQUEUE::ProcessBltQueue(__int64 a1, int a2, __int64 a3)
{
  int v4; // ebx
  int v6; // eax
  struct _KMUTANT *v7; // rsi
  int v8; // r12d
  __int64 *i; // rdi
  __int64 v10; // r8
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rbp
  char v14; // cl
  char v15; // al
  int v16; // ebx
  bool v18; // zf
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 **v23; // rax
  __int64 *v24; // rbp
  int v25; // eax
  struct _KEVENT *v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  _QWORD *v32; // rbp
  __int64 v33; // rbx
  __int64 v34; // rax
  struct _KEVENT *v35; // rdi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-68h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-68h]
  PLARGE_INTEGER Timeoutb; // [rsp+20h] [rbp-68h]
  __int64 v39; // [rsp+28h] [rbp-60h]
  unsigned int v40; // [rsp+90h] [rbp+8h]
  int v41; // [rsp+98h] [rbp+10h]

  v41 = a2;
  v4 = a2;
  v40 = 0;
  if ( *(int *)(a1 + 1004) < 0 )
  {
    if ( a2 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
    return *(unsigned int *)(a1 + 1004);
  }
  if ( a2 == 1 )
  {
    v6 = *(_DWORD *)(a1 + 520);
    if ( v6 )
      *(_DWORD *)(a1 + 520) = v6 - 1;
  }
  v7 = (struct _KMUTANT *)(a1 + 160);
  v8 = 2;
  for ( i = (__int64 *)(a1 + 216); ; i = (__int64 *)(a1 + 216) )
  {
    if ( *(_DWORD *)(a1 + 520) )
      *(_DWORD *)a3 |= 2u;
    KeWaitForSingleObject(v7, Executive, 0, 0, 0LL);
    v11 = (__int64 *)*i;
    if ( (__int64 *)*i == i )
    {
      v13 = 0LL;
    }
    else
    {
      if ( (__int64 *)v11[1] != i )
        goto LABEL_49;
      v12 = *v11;
      if ( *(__int64 **)(*v11 + 8) != v11 )
        goto LABEL_49;
      *i = v12;
      *(_QWORD *)(v12 + 8) = i;
      v13 = v11 - 1;
      if ( v11 != (__int64 *)8 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v39) = *((_DWORD *)v11 + 13);
        LODWORD(Timeout) = *(_DWORD *)(a1 + 260);
        McTemplateK0pqq_EtwWriteTransfer(
          v12,
          (__int64)&EventBltQueueRemoveEntry,
          v10,
          *(_QWORD *)(a1 + 248),
          Timeout,
          v39);
      }
      v4 = v41;
    }
    KeReleaseMutex(v7, 0);
    if ( !v13 )
    {
      v14 = *(_BYTE *)(a1 + 605);
      v15 = *(_BYTE *)(a1 + 606);
      if ( v14 )
      {
        if ( v15 )
        {
LABEL_66:
          *(_DWORD *)(a1 + 992) = v8 | *(_DWORD *)(a1 + 992) & 0xFFFFFFFD;
          if ( v14 )
          {
            v33 = *(unsigned int *)(a1 + 904);
            *(LARGE_INTEGER *)(a1 + 40 * v33 + 920) = KeQueryPerformanceCounter(0LL);
            v34 = 5 * v33;
            v4 = v41;
            *(_DWORD *)(a1 + 8 * v34 + 928) = v41;
          }
          *(_WORD *)(a1 + 605) = 0;
          BLTQUEUE::FinishCommand((BLTQUEUE *)a1, 0);
          goto LABEL_18;
        }
      }
      else if ( !v15 )
      {
        goto LABEL_18;
      }
      v8 = 0;
      goto LABEL_66;
    }
    if ( v4 == 2 )
    {
      *((_DWORD *)v13 + 130) |= 1u;
      BLTENTRY::ReleaseRenderingDoneEvent((BLTENTRY *)v13);
    }
    if ( (v13[65] & 1) == 0 )
    {
      v35 = (struct _KEVENT *)v13[5];
      if ( KeReadStateEvent(v35) )
      {
        *((_DWORD *)v13 + 130) |= 1u;
      }
      else
      {
        *(_DWORD *)a3 |= 1u;
        *(_QWORD *)(a3 + 8) = v35;
        if ( ++*((_DWORD *)v13 + 131) <= (unsigned int)(5 * *(_DWORD *)(a1 + 384)) / *(_DWORD *)(a1 + 388) )
          goto LABEL_29;
        *((_DWORD *)v13 + 130) |= 1u;
        *((_DWORD *)v13 + 130) |= 2u;
        *(_DWORD *)(a1 + 1000) |= 4u;
        WdLogSingleEntry1(2LL, a1);
        WdLogGlobalForLineNumber = 3253;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"BLTQUEUE 0x%I64x : rendering timeout hit",
          a1,
          0LL,
          0LL,
          0LL,
          0LL);
        *(_DWORD *)a3 &= ~1u;
      }
      BLTENTRY::ReleaseRenderingDoneEvent((BLTENTRY *)v13);
    }
LABEL_29:
    if ( v4 != 1 && (v13[65] & 1) != 0 && !*(_DWORD *)(a1 + 520) && *((_DWORD *)v13 + 14) && !*(_BYTE *)(a1 + 352) )
      *(_DWORD *)a3 |= 2u;
    if ( (*(_DWORD *)a3 & 2) != 0 || (*(_DWORD *)a3 & 1) != 0 )
    {
      BLTQUEUE::InsertQueueHead(a1, a1 + 216, v13, 2LL);
LABEL_18:
      if ( v4 == 1 )
        BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
      return v40;
    }
    KeWaitForSingleObject((PVOID)(a1 + 264), Executive, 0, 0, 0LL);
    BLTQUEUE::UpdatePresentStats((BLTQUEUE *)a1, (struct BLTENTRY *)v13, (struct BLTQUEUE::__BLTWAITINFO *)a3);
    if ( v4 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    v41 = -1;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v27 = a1 + 216;
      KeWaitForSingleObject((PVOID)(a1 + 160), Executive, 0, 0, 0LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v39) = *((_DWORD *)v13 + 15);
        LODWORD(Timeoutb) = *(_DWORD *)(a1 + 260);
        McTemplateK0xqdtqi_EtwWriteTransfer(v29, v28, v30, *(_QWORD *)(a1 + 248), Timeoutb, v39);
      }
      v31 = *(_QWORD *)v27;
      v32 = v13 + 1;
      if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 )
LABEL_49:
        __fastfail(3u);
      *v32 = v31;
      v32[1] = v27;
      *(_QWORD *)(v31 + 8) = v32;
      *(_QWORD *)v27 = v32;
      KeReleaseMutex((PRKMUTEX)(a1 + 160), 0);
      KeReleaseMutex((PRKMUTEX)(a1 + 264), 0);
      return v40;
    }
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)a1) + 111) & 0x100) != 0 )
    {
      KeWaitForSingleObject((PVOID)(a1 + 2768), Executive, 0, 0, 0LL);
      v40 = BLTENTRY::IndirectBlt((BLTENTRY *)v13);
      KeReleaseMutex((PRKMUTEX)(a1 + 2768), 0);
      v16 = v40;
    }
    else
    {
      v25 = BLTENTRY::Blt((BLTENTRY *)v13);
      v26 = (struct _KEVENT *)v13[6];
      v16 = v25;
      v40 = v25;
      if ( v26 )
      {
        KeSetEvent(v26, 0, 0);
        ObfDereferenceObject((PVOID)v13[6]);
        v13[6] = 0LL;
      }
    }
    if ( v16 >= 0 )
    {
      v18 = *(_BYTE *)(a1 + 352) == 0;
      *(_DWORD *)(a1 + 516) = *((_DWORD *)v13 + 14);
      if ( v18 )
        v19 = *((_DWORD *)v13 + 14);
      else
        v19 = 0;
      *(_DWORD *)(a1 + 520) = v19;
    }
    DXGALLOCATIONREFERENCE::AssignNull((DXGALLOCATIONREFERENCE *)(v13 + 4));
    KeWaitForSingleObject(v7, Executive, 0, 0, 0LL);
    v22 = a1 + 232;
    if ( a1 + 232 == a1 + 216 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v39) = *((_DWORD *)v13 + 15);
      LODWORD(Timeouta) = *(_DWORD *)(a1 + 260);
      McTemplateK0xqdtqi_EtwWriteTransfer(v22, v20, v21, *(_QWORD *)(a1 + 248), Timeouta, v39);
      v22 = a1 + 232;
    }
    v23 = *(__int64 ***)(v22 + 8);
    v24 = v13 + 1;
    if ( *v23 != (__int64 *)v22 )
      goto LABEL_49;
    *v24 = v22;
    v24[1] = (__int64)v23;
    *v23 = v24;
    *(_QWORD *)(v22 + 8) = v24;
    KeReleaseMutex(v7, 0);
    if ( *(_BYTE *)(a1 + 606) )
    {
      *(_BYTE *)(a1 + 606) = 0;
      *(_DWORD *)(a1 + 640) = v16;
      *(LARGE_INTEGER *)(a1 + 880) = KeQueryPerformanceCounter(0LL);
      KeSetEvent((PRKEVENT)(a1 + 576), 0, 0);
    }
    KeReleaseMutex((PRKMUTEX)(a1 + 264), 0);
    if ( v16 < 0 )
      break;
    v4 = -1;
  }
  BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
  *(_DWORD *)(a1 + 1004) = v16;
  return (unsigned int)v16;
}
