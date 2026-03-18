/*
 * XREFs of HvlGetGpaPagesAccessState @ 0x14042C0FC
 * Callers:
 *     VmpProcessAccessedBatch @ 0x14042C004 (VmpProcessAccessedBatch.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlpReleaseHypercallPage @ 0x14026D310 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x14026E418 (HvlpHvToNtStatus.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall HvlGetGpaPagesAccessState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  unsigned int v6; // r13d
  __int64 v8; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  PSLIST_ENTRY v10; // rax
  _QWORD *HypercallCachedPages; // r14
  _SLIST_ENTRY *Next; // rax
  struct _KPRCB *v13; // rdi
  PSLIST_ENTRY v14; // rax
  _QWORD *p_Next; // rsi
  _SLIST_ENTRY *v16; // r12
  __int64 v17; // rax
  size_t v18; // rbx
  __int64 result; // rax
  __int128 v20; // [rsp+20h] [rbp-40h] BYREF
  PSLIST_ENTRY v21; // [rsp+30h] [rbp-30h]
  _SLIST_ENTRY *v22; // [rsp+38h] [rbp-28h]
  __int128 v23; // [rsp+40h] [rbp-20h] BYREF
  PSLIST_ENTRY v24; // [rsp+50h] [rbp-10h]
  _SLIST_ENTRY *v25; // [rsp+58h] [rbp-8h]

  v6 = 0;
  v21 = 0LL;
  LODWORD(v22) = 0;
  v24 = 0LL;
  v8 = 0LL;
  LODWORD(v25) = 0;
  v20 = 0LL;
  v23 = 0LL;
  if ( (HvlpFlags & 8) != 0
    && (CurrentPrcb = KeGetCurrentPrcb(),
        v10 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList),
        (HypercallCachedPages = &v10->Next) != 0LL) )
  {
    v21 = v10;
    Next = v10[1].Next;
    LODWORD(v20) = 1;
    *((_QWORD *)&v20 + 1) = CurrentPrcb;
  }
  else
  {
    LODWORD(v20) = 4;
    BYTE8(v20) = KeDisableInterrupts();
    HIDWORD(v20) = 1;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (_SLIST_ENTRY *)HypercallCachedPages[2];
  }
  v22 = Next;
  if ( (HvlpFlags & 8) != 0
    && (v13 = KeGetCurrentPrcb(),
        v14 = RtlpInterlockedPopEntrySList(&v13->HypercallPageList),
        (p_Next = &v14->Next) != 0LL) )
  {
    v16 = v14[1].Next;
    LODWORD(v23) = 1;
    *((_QWORD *)&v23 + 1) = v13;
    v24 = v14;
  }
  else
  {
    LODWORD(v23) = 4;
    BYTE8(v23) = KeDisableInterrupts();
    HIDWORD(v23) = 2;
    p_Next = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    v16 = (_SLIST_ENTRY *)p_Next[2];
  }
  *HypercallCachedPages = a1;
  v25 = v16;
  HypercallCachedPages[1] = a2;
  while ( 1 )
  {
    HypercallCachedPages[2] = v8 + a4;
    v17 = HvcallInitiateHypercall(201);
    if ( (_WORD)v17 )
      break;
    v18 = WORD2(v17) & 0xFFF;
    memmove((void *)(v8 + a6), p_Next, v18);
    v8 += v18;
    a3 -= v18;
    if ( !a3 )
      goto LABEL_14;
  }
  v8 += WORD2(v17) & 0xFFF;
  v6 = HvlpHvToNtStatus(v17);
LABEL_14:
  HvlpReleaseHypercallPage((unsigned int *)&v23);
  HvlpReleaseHypercallPage((unsigned int *)&v20);
  result = v6;
  *a5 = v8;
  return result;
}
